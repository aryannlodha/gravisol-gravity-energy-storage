/*
  GraviSol – Arduino Monitoring Reference Implementation

  The original Arduino source code was NOT present in the supplied project
  archive. This sketch is therefore a reconstructed reference implementation
  based only on the documented hardware and methodology.

  Documented hardware:
    - Arduino UNO
    - INA219 voltage/current sensor (I2C)
    - Potentiometer for shaft-position feedback

  Output:
    CSV telemetry over Serial: time, voltage, current, power, potentiometer.

  IMPORTANT:
    Verify the actual wiring and pin assignments before connecting to hardware.
    The exact original Arduino pin mapping and stepper/DRV8825 control logic
    were not available in the supplied files.
*/

#include <Wire.h>
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

const int POT_PIN = A0;
const unsigned long SAMPLE_INTERVAL_MS = 500;

unsigned long startTimeMs = 0;
unsigned long lastSampleMs = 0;

void setup() {
  Serial.begin(9600);
  pinMode(POT_PIN, INPUT);

  if (!ina219.begin()) {
    Serial.println("ERROR: INA219 not detected.");
    while (true) {
      delay(1000);
    }
  }

  startTimeMs = millis();
  Serial.println("time_s,voltage_V,current_A,power_W,pot_raw");
}

void loop() {
  unsigned long now = millis();

  if (now - lastSampleMs < SAMPLE_INTERVAL_MS) {
    return;
  }
  lastSampleMs = now;

  float voltageV = ina219.getBusVoltage_V();
  float currentA = ina219.getCurrent_mA() / 1000.0;
  float powerW = voltageV * currentA;

  int potRaw = analogRead(POT_PIN);
  float elapsedS = (now - startTimeMs) / 1000.0;

  Serial.print(elapsedS, 2);
  Serial.print(",");
  Serial.print(voltageV, 3);
  Serial.print(",");
  Serial.print(currentA, 3);
  Serial.print(",");
  Serial.print(powerW, 3);
  Serial.print(",");
  Serial.println(potRaw);
}
