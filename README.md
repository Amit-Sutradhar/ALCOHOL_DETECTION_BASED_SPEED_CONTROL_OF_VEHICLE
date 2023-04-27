# Alcohol Detection Vehicle Control System 🚗🚑
This is a project that uses an MQ-135 sensor and a servo motor to control the speed of a vehicle based on the alcohol percentage detected from the driver's breath.

# Components
Arduino Uno
MQ-135 sensor
Servo motor
Jumper wires

# How it works
The MQ-135 sensor measures the alcohol concentration in the air exhaled by the driver, and outputs an analog value. The analog value is converted to a percentage using the map() function, and the motor speed is reduced based on the percentage.

If the alcohol percentage is between 5% and 10%, the motor speed is reduced by 60%. If the alcohol percentage is 12% or higher, the motor speed is reduced by 80%. Otherwise, the motor runs at full speed.

The motor speed is controlled by sending a PWM signal to the servo motor using the write() function. The motor speed and alcohol percentage are displayed on the serial monitor.

# Cunnection 👈

-   Arduino         MQ135         Servo 1 & 2
-   pin9             -              pwn pin
-   pin10            -              pwn pin
-    A0              A0               -
-    6v              5v            6v-12v DC     

# Getting started
To use this project, you will need an Arduino Uno, an MQ-135 sensor, a servo motor, and jumper wires. Follow these steps to get started:

Connect the MQ-135 sensor to the analog pin A0 on the Arduino Uno, and connect the servo motor to pins 9 and 10.
Upload the code to the Arduino Uno using the Arduino IDE.
Open the serial monitor to see the motor speed and alcohol percentage.

# Future improvements
This project can be improved in several ways:

Add a buzzer or LED to alert the driver when the motor speed is reduced.
Implement a more accurate alcohol detection method, such as a breathalyzer.
Add a GPS module to track the location of the vehicle and alert the authorities if the driver is under the influence.
Implement a system to prevent the vehicle from starting if the alcohol percentage is above a certain threshold.

# Credits
This project was created by Amit Sutradhar. Feel free to use and modify this code for your own projects.




