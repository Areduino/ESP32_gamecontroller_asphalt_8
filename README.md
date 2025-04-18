# ESP32 Bluetooth HID Game Controller

## Overview
This project turns an **ESP32** into a **Bluetooth HID game controller** that can send joystick movements and button presses to a connected device. It works with PC, Android, and potentially games like **Asphalt 8**.

## Features
- 📡 **Bluetooth HID support** (mimics a standard game controller).
- 🎮 **Joystick inputs** (X/Y axis for movement).
- 🔘 **Single button functionality** (e.g., action button).
- 🚀 **Lightweight & customizable** for different games.

## Hardware Requirements
- **ESP32 DevKit V1** board
- **Analog joystick module** (connected to GPIO34/35)
- **Button** (connected to GPIO25)
- **Arduino IDE** (for programming)
- **ESP32 BLE HID Library**

## Installation & Setup
### 1️⃣ Install Required Libraries
Ensure you have the **ESP32 BLE Arduino library** installed:
1. Open **Arduino IDE**.
2. Go to **Library Manager** (`Sketch > Include Library > Manage Libraries`).
3. Search for **"ESP32 BLE HID"** and install it.

### 2️⃣ Flashing the Code
1. Connect the ESP32 via USB to your PC.
2. Open the Arduino IDE and **upload the game controller code**.
3. Hold the **BOOT button** while flashing if needed.

### 3️⃣ Pairing the ESP32
1. Open Bluetooth settings on your **PC or Android device**.
2. Search for `"ESP32_GameController"` and **pair**.
3. Use a **game controller tester** to verify input responses.

## Usage
- **Move the joystick** to send X/Y axis data.
- **Press the button** to activate an in-game action.
- **Modify the code** for extra buttons or enhanced features.

## Future Enhancements
🔹 Add **multiple buttons** for more controls  
🔹 Implement **BLE HID keyboard/mouse mode**  
🔹 Improve **compatibility with Asphalt 8**  

## License
This project is open-source under the **MIT License**. Feel free to modify and contribute!

---
