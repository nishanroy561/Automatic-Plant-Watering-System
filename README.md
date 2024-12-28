# Automatic Plant Watering System

## Overview
The Automatic Plant Watering System is a simple Arduino-based project designed to monitor soil moisture levels and control a water pump to ensure that plants receive adequate hydration. The system uses a soil moisture sensor to detect the moisture level in the soil and activates a pump when the soil is too dry.

## Components Required
- Arduino board (e.g., Arduino Uno)
- Soil moisture sensor
- Relay module (to control the pump)
- Water pump
- Jumper wires
- Breadboard (optional)

## Pin Configuration
- **Soil Moisture Sensor**: Connected to analog pin A0
- **Pump Relay**: Connected to digital pin 7

## Code Explanation
- The code initializes the serial communication for debugging and monitoring.
- It reads the moisture level from the soil moisture sensor and converts the analog value to a percentage.
- If the moisture percentage falls below a certain threshold (35%), the pump is activated to water the plants. If the moisture level is sufficient, the pump remains off.

## Usage
1. Connect the components as per the pin configuration.
2. Upload the code to the Arduino board.
3. Open the Serial Monitor to view the moisture readings and pump status.

## License
This project is open-source and can be modified and distributed freely.