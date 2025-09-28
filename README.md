# 🟢 LED Traffic Light Controller

This project is a simple LED traffic light controller built using an Arduino Uno. It features three LEDs representing the colors of a traffic light: red, yellow, and green. The system operates in a loop, successively turning on each LED for a specified duration.

## ✨ Features
- Sequential operation of red, yellow, and green LEDs
- Red LED stays on for 3 seconds
- Yellow LED stays on for 1 second
- Green LED stays on for 3 seconds
- Easy to modify timing for each LED

## 🛠 Tools & Components Used
- Arduino UNO (Microcontroller)
- 3 LEDs (Red, Yellow, Green)
- 3 Resistors (220Ω recommended for each LED)
- Breadboard & Jumper Wires
- USB Cable for Arduino
- Arduino IDE (for coding & uploading)

## 🔌 Circuit Connections
- *Red LED* → Arduino UNO
  - Anode (long leg) → Pin 2
  - Cathode (short leg) → Resistor → GND

- *Yellow LED* → Arduino UNO
  - Anode (long leg) → Pin 3
  - Cathode (short leg) → Resistor → GND

- *Green LED* → Arduino UNO
  - Anode (long leg) → Pin 4
  - Cathode (short leg) → Resistor → GND

## ⚙ How It Works
1. The program initializes the pins connected to the LEDs as outputs.
2. All LEDs are turned off at the start.
3. In an infinite loop, each LED is turned on one at a time:
   - *Red LED* for 3 seconds
   - *Yellow LED* for 1 second
   - *Green LED* for 3 seconds
4. The changeLedState function handles the LED state transitions and timing.

## 📖 Applications
- Basic traffic light simulation
- Educational projects to learn about LED control
- Timing applications where visual signals are needed
