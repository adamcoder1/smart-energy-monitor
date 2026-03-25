Week 2 — March 2026

What I built:
Wired ACS712 current sensor to Elegoo Uno R3.
Reading raw current values over Serial Monitor.

How ACS712 works:
Hall-effect sensor detects magnetic field from current.
Outputs 2.5V (reading=512) at zero current.
Every amp changes output by 66mV.

Formula used
Current = (raw − 512) × (5.0/1024) / 0.066

What happened
Serial Monitor showing live readings around 3.5A with nothing
connected, normal electrical noise with no load on terminals.
Will show real current when device is plugged into screw terminals.

What failed
The readings were showing 3.5A even with nothing connected to 
the screw terminals. Expected 0A at first.

What I learned
This is normal, because the sensor picks up electrical noise from the 
environment when nothing is connected. The zero point is 512 
(representing 2.5V) not 0. Any deviation from 512 shows as 
current even if nothing is plugged in. Real current readings 
will show when an actual device is connected to the screw terminals.

### Photos
![Sensor wired](images/week2-sensor-wired.jpg)
<img width="748" height="352" alt="image" src="https://github.com/user-attachments/assets/9eba55f6-5d98-4268-b8b9-26894b1d4bcd" />

