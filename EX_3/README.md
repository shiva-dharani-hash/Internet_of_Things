# Exercise 3: IoT Sensor Projects

## Folder Structure

```
EX_3/
├── 3A/                    # DHT11 Humidity and Temperature Sensor
│   ├── DHT_Sensor.ino
│   └── README.md
├── 3B/                    # Potentiometer Analog Reading
│   ├── Potentiometer.ino
│   └── README.md
├── 3C/                    # Flame Sensor Fire Alarm System
│   ├── Flame_Alarm.ino
│   └── README.md
└── README.md              # This file
```

## Exercises Overview

### 3A: DHT11 Humidity and Temperature Sensor
- **Description**: Reads and displays humidity and temperature data
- **Sensor**: DHT11
- **Data Pin**: GPIO 4
- **See**: [3A/README.md](3A/README.md)

### 3B: Potentiometer Analog Reading
- **Description**: Reads analog values from a potentiometer
- **Component**: 10kΩ Potentiometer
- **Analog Pin**: A0
- **See**: [3B/README.md](3B/README.md)

### 3C: Flame Sensor Fire Alarm System
- **Description**: Detects fire and triggers buzzer and LED alarm
- **Sensor**: Flame Sensor (IR based)
- **Buzzer Pin**: 10, LED Pin: 9, Flame Pin: 8
- **See**: [3C/README.md](3C/README.md)

## How to Use These Files

1. Open the `.ino` files in Arduino IDE
2. Select your board type and COM port
3. Upload to your Arduino board
4. Open Serial Monitor (9600 baud) to view output

## Getting Started

Each subfolder contains:
- Source code files (`.ino`)
- README with specific instructions
- Component lists and pin configurations

Happy Learning! 🚀
