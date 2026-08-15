# Arduino Reference Implementation

The original Arduino `.ino` source was not present in the supplied project archive.

`GraviSol_Monitor_Reconstructed.ino` is a reference implementation reconstructed
from the documented hardware and methodology. It is **not the original source
code recovered from the project**.

Documented electronics include:
- Arduino UNO
- INA219 voltage/current sensor
- Potentiometer for shaft-position feedback
- NEMA17 + DRV8825 locking mechanism
- DC motor used for lifting and generation
- 12 V LED load

The sketch focuses on the documented measurement path: voltage, current, power
and potentiometer feedback.

Before using it:
1. Install the Adafruit INA219 Arduino library.
2. Verify INA219 I2C wiring.
3. Verify the potentiometer connection.
4. Verify the actual stepper/DRV8825 control wiring separately.

The exact original pin mapping was not included in the supplied files.
