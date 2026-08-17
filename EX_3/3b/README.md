# Exercise 3B: Potentiometer Analog Reading

## Overview
This exercise demonstrates how to read analog values from a potentiometer using Arduino.

## Components Required
- Arduino Board
- Potentiometer (10kΩ variable resistor)
- Jumper Wires
- USB Cable

## Pin Configuration
- Analog Pin: A0
- VCC: 5V
- GND: Ground

## How It Works
1. The potentiometer is connected to analog pin A0.
2. The analog value ranges from 0 to 1023 (10-bit ADC).
3. Values are read every 100ms and displayed on Serial Monitor.

## Example Serial Output
```
potentiometer value : XXX
```

## Notes
- Analog values range from 0 (0V) to 1023 (5V).
- Delay of 100ms prevents overwhelming the serial output.
- Can be used for volume control, brightness, or sensor input calibration.
