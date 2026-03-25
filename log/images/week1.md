Week 1 — March 2026

What I built
External LED circuit on breadboard connected to Elegoo Uno R3.

Resistor calculation
R = (5 - 2.1) / 0.02 = 145Ω → used 100Ω (closest in kit)
Recalculated current: I = (5-2.1)/100 = 29mA — safe for testing

What failed:
First attempt: LED and resistor were not in the correct order.
LED long leg was not next to the resistor so no circuit was completing.

What I fixed:
Moved components so order was correct:
pin 13 wire → resistor left leg → resistor right leg → LED long leg → LED short leg → GND wire
Once in correct order LED lit up immediately.

What I learned:
Every LED needs a current-limiting resistor.
Ohm's Law used to calculate real component value.
Breadboard has two types of connections:
1. Numbered rows (columns a-e and f-j), which connect vertically within same row
2. Power rails (red and blue lines along edges),which connect horizontally 
   along the entire length of the board


Photo
![Week 1 LED working](https://github.com/adamcoder1/smart-energy-monitor/blob/main/log/images/week1-led.jpeg?raw=true)
