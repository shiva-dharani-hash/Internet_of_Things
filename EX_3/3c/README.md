# Exercise 3C: Temperature Sensor (LM35) Analog Reading

## Overview
This exercise demonstrates how to read an analog temperature sensor (LM35) with an Arduino and convert the reading to degrees Celsius.

## Components Required
- Arduino Board
- LM35 temperature sensor (or similar analog temperature sensor)
- Jumper Wires
- USB Cable

## Pin Configuration
- Analog Pin: A0 (sensor output)
- VCC: 5V (sensor Vcc)
- GND: Ground

## How It Works
1. The LM35 outputs a voltage proportional to temperature (10 mV/°C for LM35).
2. Read the analog value (0-1023) from A0 and convert to voltage: voltage = (reading/1023.0) * 5.0.
3. Convert voltage to temperature in °C (for LM35): temperature = voltage * 100.
4. Print the temperature on the Serial Monitor.

## Example Serial Output
```
Temperature: XX.XX °C
```

## Notes
- Calibrate if you use a different sensor with a different voltage-to-temperature scaling.
- Add smoothing (moving average) if readings are noisy.
- Keep sensor away from heat sources for accurate ambient measurements.
