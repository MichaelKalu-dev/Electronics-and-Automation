Project 02: Button-Controlled Device

Overview

An Arduino-based controller operated by two push buttons. One button turns the system ON, while the other turns it OFF. Two LEDs indicate the current operating state.

Components

- Arduino Uno R3
- 2 push buttons
- 1 red LED
- 1 green LED
- 2 × 220 Ω resistors
- Breadboard
- Jumper wires

Pin Configuration

Component| Arduino Pin
Red LED| 13
Green LED| 4
ON button| 10
OFF button| 6

The buttons use the Arduino's internal pull-up resistors through "INPUT_PULLUP".

System Behavior

- The system starts in the OFF state.
- Pressing the ON button sets the system state to ON.
- Pressing the OFF button sets the system state to OFF.
- The system retains its state after the buttons are released.
- The red LED indicates OFF.
- The green LED indicates ON.

Circuit Simulation

"Button-Controlled Device Circuit" (circuit.png)

Arduino button-controlled device simulated in Tinkercad Circuits.

Implementation

The program uses:

- "pinMode()" to configure the LED and button pins.
- "INPUT_PULLUP" to configure button inputs.
- "digitalRead()" to read button states.
- "digitalWrite()" to control the indicator LEDs.
- A state variable to retain the system's operating state.

Testing and Results

Status: PASS

- [x] System starts OFF
- [x] ON button activates the system
- [x] OFF button deactivates the system
- [x] State persists after button release
- [x] LEDs indicate the current state

Tools

- Tinkercad Circuits
- Arduino C/C++

Source Code

See ""button_controlled_device.ino"" (button_controlled_device.ino).

Skills Demonstrated

Digital inputs and outputs, internal pull-up resistors, conditional logic, state management, and simulation-based testing.
