Project 01: Programmable Signal Controller 🚦

Overview

A traffic signal controller built with an Arduino Uno, three LEDs, and resistors. The system cycles through red, green, and yellow signals automatically using timed digital outputs.

Objectives

- Control multiple digital outputs using Arduino.
- Implement sequential operations with timing.
- Configure digital pins as outputs.
- Build and test a functioning embedded system in Tinkercad Circuits.

Components

- Arduino Uno R3
- 1 red LED
- 1 green LED
- 1 yellow LED
- 3 × 220 Ω resistors
- Breadboard
- Jumper wires

Pin Configuration

Component| Arduino Pin
Red LED| 10
Green LED| 9
Yellow LED| 8

Each LED uses an individual series resistor, with the circuit connected to GND.

![Circuit Screenshot](circuit.png)

System Behavior

The controller repeats the following sequence continuously:

1. Red LED — 3 seconds
2. Green LED — 3 seconds
3. Yellow LED — 1 second
4. Repeat

Only one LED is illuminated at a time. All three outputs are initialized LOW when the Arduino starts.

Circuit Simulation

"Programmable Signal Controller Circuit" (circuit.png)

Arduino Uno traffic signal controller simulated in Tinkercad Circuits.

Implementation

The program uses:

- "pinMode()" to configure digital output pins.
- "digitalWrite()" to control the LEDs.
- "delay()" to define the signal durations.
- "setup()" to initialize the controller.
- "loop()" to repeat the signal sequence.

Testing and Results

Status: PASS

- [x] Red signal timing verified
- [x] Green signal timing verified
- [x] Yellow signal timing verified
- [x] Continuous sequence verified
- [x] Only one LED illuminated at a time
- [x] Outputs initialized LOW

Tools

- Tinkercad Circuits
- Arduino C/C++

Source Code

See ""signal_controller.ino"" (signal_controller.ino).

Skills Demonstrated

- Digital input/output configuration
- Sequential logic
- Timing and delays
- Circuit construction
- Embedded programming
- Simulation and testing
