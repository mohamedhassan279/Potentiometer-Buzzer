# Potentiometer-Buzzer
A 50 KΩ potentiometer is connected to the arduino 5V port and Gnd to act as a variable voltage input to an analog pin of the arduino.
A buzzer is connected to the digital output of the arduino.
By varying the value of the potentiometer, the value of the voltage on the analog pin varies.
The arduino prints the current analog input voltage on the Serial Monitor.
If this voltage exceeds 3 volts, the buzzer and the built in LED (pin 13) turn ON, and remain ON as long as the voltage remains above the threshold (3 volts). If the voltage drops below 2.5 volts, both the buzzer and LED turn OFF, and remain OFF as long as the voltage is below the threshold (2.5 volts).

---
## Circuit Diagram:

![image](https://user-images.githubusercontent.com/96317608/220428387-ae0b9821-6fab-4a49-a753-d9f95dcc15c4.png)

---
## Video:

https://user-images.githubusercontent.com/96317608/220429142-f399a2a8-f7bd-484a-8603-29e41eaae00d.mp4
