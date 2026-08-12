# ⚡ GraviSol — Gravity-Driven Mechanical Energy Storage

> A laboratory-scale gravitational energy storage prototype that uses renewable energy to lift a mass, store energy as gravitational potential energy, and recover electrical energy during controlled descent.

## 🚀 Overview

GraviSol explores **mechanical energy storage** as an alternative to chemical battery storage for renewable-energy systems.

The prototype uses a solar-powered lifting mechanism to raise a mass. When the mass is released and descends, the motor operates as a generator and converts the mechanical energy back into electrical output.

The project evolved through multiple experiential-learning phases, so this repository separates the development history, current prototype documentation, hardware media and reference code.

## ⚙️ System Flow

Solar Input → DC-DC Regulation → Motor Lifts Mass → Gravitational Energy Stored → Controlled Descent → Motor as Generator → Electrical Load → Arduino Monitoring

## 🔧 Key Hardware

- ☀️ 20 W solar panel
- ⚙️ DC motor / dynamo
- 🧲 NEMA17 stepper motor
- 🔌 DRV8825 stepper driver
- 📟 Arduino UNO
- 📊 INA219 voltage/current sensor
- 🎛️ Potentiometer for shaft-position feedback
- 💡 12 V LED load
- 🧱 PVC/cardboard structure, pulley, shaft, thread and clamps

The documented prototype uses a vertical structure of approximately **0.6 m**.

## 📈 Experimental Results

The experiments showed a clear relationship between operating mass and recovered electrical output.

Reported peak performance:
- **Optimum operating mass:** approximately 1.0 kg
- **Maximum current:** approximately 0.72 A
- **Maximum power:** approximately 0.74 W
- **Peak efficiency:** approximately 17.9%

Beyond the optimum mass, performance decreased due to mechanical friction, structural flexibility and generator/electrical losses.

## 🧪 Engineering Analysis

The project evaluates:
- Gravitational potential energy using `mgh`
- Electrical power from measured voltage and current
- Conversion efficiency
- Repeatability across descent cycles
- Performance variation with changing mass
- Mechanical and electrical losses

## 🛠️ Tools & Techniques

**Arduino UNO · INA219 · NEMA17 · DRV8825 · DC Motor · Solar Panel · DC-DC Buck Converter · Experimental Testing · Energy Conversion Analysis**

## 📁 Repository Structure

```text
arduino/
├── GraviSol_Monitor_Reconstructed.ino
└── README.md

docs/
├── history/
│   ├── phase-1/
│   └── phase-2/
└── current/

media/
├── images/
└── video/

results/
└── Gravitational_Battery_Updated_Graphs.pdf
```

## 🔌 Arduino Reference Code

The supplied project archive did not contain the original Arduino `.ino` file.

A **reconstructed monitoring sketch** is included under `arduino/`. It is based only on the documented Arduino + INA219 + potentiometer setup and should be treated as a reference implementation. The exact original pin mapping and control logic were not available.

## 🎯 Applications

Gravitational storage can be explored for:
- Long-duration renewable-energy storage
- Solar and wind energy integration
- Backup and peak-shifting systems
- Low-degradation mechanical storage

## 🔮 Future Scope

- Fully automated lifting and locking
- Closed-loop control of the stepper/locking mechanism
- Higher storage height and mass capacity
- Improved generator efficiency
- Real-time energy monitoring dashboard
- Hybrid integration with batteries or other storage technologies

## 📚 Documentation

The `docs/` folder preserves selected project milestones from earlier development phases and the current prototype documentation.

The `media/` folder contains selected prototype photographs, circuit/design visuals and experimental graphs. A compressed demo video is included for convenient GitHub upload.

---

⭐ Engineering prototype for renewable-energy storage and experimental validation.
