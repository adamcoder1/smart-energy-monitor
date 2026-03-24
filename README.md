# smart-energy-monitor
Real-time household power consumption monitor built with Arduino.

**Builder:** [Adam], Grade 8
**Started:** March 2026
**Goal:** Measure and log real home energy usage to find waste patterns.

Week 1 — March 2026

What I built:
External LED circuit on breadboard connected to Elegoo Uno R3.

Resistor calculation
Target current: 20mA
R = (V_supply - V_LED) / I
R = (5 - 2.1) / 0.02 = 145Ω, but I used 100Ω (closest in kit)
Recalculated current: I = (5-2.1)/100 = 29mA: safe for testing
What failed
First attempt: LED and resistor were not in the correct order in the breadboard.
LED long leg was not next to the resistor, so no circuit was completing.

