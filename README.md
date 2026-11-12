# Proteus_projects
LDR-based automatic LED brightness control using Arduino UNO, ADC and PWM, simulated in Proteus 8 with live readings on Virtual Terminal.
# LDR-Based LED Brightness Control (Proteus + Arduino UNO)

A simulation project where an LDR senses ambient light and an Arduino UNO adjusts LED brightness automatically using PWM.

## How it works
- LDR + 10k resistor form a voltage divider, read on **A1** (ADC, 0-1023).
- The value is mapped to 0-255 and written to **pin 11** (PWM) to drive the LED.
- Live sensor values are printed to the Virtual Terminal at **9600 baud**.

## Components
- Arduino UNO
- LDR (TORCH_LDR)
- 10k resistor
- Yellow LED
- Virtual Terminal

## Tools
Proteus 8 Professional, Arduino IDE 2.3

## Files
- `sketch_nov11a.ino`: Arduino code
- `*.hex`: compiled firmware loaded in Proteus
- `New.pdsprj`: Proteus project

## Run it
1. Open the `.pdsprj` in Proteus.
2. Double-click the Arduino and set Program File to the `.hex`.
3. Press Play and open Debug → Virtual Terminal.

## What I learned
ADC reading, PWM output, serial communication, debugging in Proteus.

## Author
Akimaa, ECE student
