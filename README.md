# 🤖 Flex Sensor Glove with ESP32 – Robotic Hand Interface

This project features a **Flex Sensor Glove** using an ESP32 board to read finger positions in real time. The glove can serve as an input device to control robotic hands, translate sign language gestures, or experiment with gesture-based automation.

All outputs are displayed via the **Serial Monitor**—no additional display modules or apps are required.

---

## 📌 Features

- 🔄 Real-time flex sensor readings from all five fingers.
- 📟 Serial Monitor output for easy testing and debugging.
- 🤝 Modular and extendable for robotic hand control, sign language translation, or IoT integration.
- ⚡ Lightweight code compatible with most ESP32 boards.

---

## 🧠 How It Works

- Each finger on the glove is connected to a **flex sensor**.
- The ESP32 reads the analog values using its ADC pins.
- Values are printed to the **Serial Monitor**, simulating finger movement tracking.
- Ideal for controlling a robotic hand by mapping sensor values to servo angles.

---

## 🛠️ Hardware Required

| Component             | Quantity |
|----------------------|----------|
| ESP32 Dev Board      | 1        |
| Flex Sensors         | 5        |
| Resistors (10kΩ)     | 5        |
| Breadboard & Wires   | As needed |
| Glove (any kind)     | 1        |

---

## 🔌 Circuit Diagram (Textual Guide)

Each flex sensor is connected between:
- **Analog pin (e.g., A0–A4)** on ESP32
- **Voltage divider with 10kΩ resistor to GND**

Example for one sensor:
