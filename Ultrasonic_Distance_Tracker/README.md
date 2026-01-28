# Ultrasonic Distance Tracker

### Project Description
This program uses the HC-SR04 Ultrasonic Sensor to measure the distance between the sensor and an object.

**How it works:** The sensor emits an ultrasonic sound pulse at 40 kHz. If there is an object in front of it, the pulse bounces back.

**The Math:** By measuring the time it takes for the echo to return, we can calculate the distance using the speed of sound (343 m/s or 0.0343 cm/µs).

**Formula:** Since the sound travels to the object and back, we divide the total time by 2.
$$Distance = \frac{Time \times 0.0343}{2}$$

### Connection Table
| HC-SR04 Pin | Arduino Pin |
| :--- | :--- |
| VCC | 5V |
| Trig | Pin 9 |
| Echo | Pin 10 |
| GND | GND |
