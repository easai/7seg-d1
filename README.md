# 7-Segment Counter with Wemos D1

<img src="https://github.com/easai/7seg-d1/blob/main/IMG_2605.jpeg" width=300 />

## Overview
This project demonstrates how to build a simple circuit that drives a 7-segment display using a Wemos D1 board. The circuit counts sequentially and displays the numbers on the 7-segment module. It is designed as an educational project to explore microcontroller control of digital displays.

## Features
- Uses Wemos D1 board as the controller
- Displays incremental counts on a 7-segment display
- Employs the LedControl library for simplified control of the display
- Provides a clear example of digital output control
- Modular design for easy adaptation to other microcontroller boards

## Hardware Requirements
- Wemos D1 board
- 7-segment display module
- Breadboard and jumper wires
- Power supply via USB or external source

## Pin Mapping
| Signal | Wemos D1 Pin |
|--------|--------------|
| DIN    | D7           |
| CLK    | D5           |
| CS     | D8           |

## Circuit Description
The Wemos D1 board outputs signals to the pins of the 7-segment display. Each segment is activated through the appropriate GPIO pin, with resistors included to ensure safe current levels. The circuit increments the displayed number step by step, cycling through digits in sequence.

