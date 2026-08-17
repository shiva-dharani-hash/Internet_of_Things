# Exercise 3A: LDR (Light Dependent Resistor) Analog Reading

## Overview
This exercise demonstrates how to read analog values from an LDR (photoresistor) using an Arduino.

## Components Required
- Arduino Board
- LDR (photoresistor)
- 10kΩ resistor
- Breadboard and Jumper Wires
- USB Cable

## Pin Configuration
- Analog Pin: A0 (LDR voltage divider)
- VCC: 5V
- GND: Ground

## How It Works
1. The LDR is wired as part of a voltage divider connected to analog pin A0.
2. Analog readings range from 0 to 1023 (10-bit ADC).
3. Values are read periodically and displayed on the Serial Monitor.

## Example Serial Output
```
ldr value : XXX
```

## Notes
- Higher values correspond to brighter light (depending on the divider wiring).
- Use a small delay between reads (100-500ms) to avoid flooding the serial output.
- You can use the value to control LEDs, backlight brightness, or trigger actions based on ambient light.
