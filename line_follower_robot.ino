//The programming part of line follower robot is very simple and we require only basic Arduino functions. The complete program for this project can be found at the bottom of this page. The explanation of this program is as follows:
//First step is to defined every Arduino pin that we are using. I started with motoring the driver pins and sensor pins. Here, I have commented on each line of code for your easy understanding.
//The programming for the IoT-Driven Line Conveyor System with the autonomous line-following robot involves basic functions that control the robot's movement based on sensor input. Here's an explanation of how the code works:

#define enA 5 //Enable1 L293 Pin enA
#define in1 6 //Motor1  L293 Pin in1
#define in2 7 //Motor1  L293 Pin in1
#define in3 9 //Motor2  L293Pin in1
#define in4 10 //Motor2  L293 Pin in1
#define enB 8 //Enable2 L298 Pin enB
#define R_S 4 // Right sensor
#define L_S 2 // Left sensor

//In the loop section, declare the pin modes of each pin. Here, we need to read the output of IR sensors, hence I have defined those pins as an input. The motor needs to be driven by the Arduino, thus defining the motor driver pins as output. Finally, I pulled enable pin to high.

pinMode(R_S, INPUT);
pinMode(L_S, INPUT);
pinMode(enA, OUTPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(enB, OUTPUT);
digitalWrite(enA, HIGH);
digitalWrite(enB, HIGH);

//In the loop section, we first read the values of IR sensors and then using ‘if condition’ control the movement of motor as per our requirements. The four movement conditions are explained below.
//Moving forward:

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)){forward();}

//In this case, if Right Sensor and Left Sensor are on top of white colour then the robot should move in the forward direction, so we call the forward function.
//(Note : here 0 means output of IR sensor is high as the sensor is on white surface)

//Turning towards Right Side:

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)){turnRight();}

//if Right Sensor is detecting Black and Left Sensor is not detecting any black line, then it will call the Right function, initiating the protocol for making right turn by calling turnRight function.

//Turning towards Left side:

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)){turnLeft();}
//if Right Sensor is over white and the Left Sensor is detecting Black then it will call turnLeft function. It will initiate the steps for turning the robot in left direction.

//Stopping the Robot:

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)){Stop();}
//If the Right Sensor and Left Sensor are on the Black color then it will call the Stop function. In this case, the robot will come to a complete halt.
//We have defined the 4 functions of the robot as Forward, turnLeft, turnRight and Stop. The code to perform these functions are given below:


Forward function:
void forward(){
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
}

//This means we are pulling to high the input 1 and 4 of the motor driver, as a result, both motors will move forward  same as this I made other functions

//Turnright function:
void turnRight(){
digitalWrite(in1, LOW);  //Right Motor forword Pin
digitalWrite(in2, HIGH); //Right Motor backword Pin
digitalWrite(in3, LOW);  //Left Motor backword Pin
digitalWrite(in4, HIGH); //Left Motor forword Pin
}

//TurnLeft function:
void turnLeft(){
digitalWrite(in1, HIGH); //Right Motor forword Pin
digitalWrite(in2, LOW);  //Right Motor backword Pin
digitalWrite(in3, HIGH); //Left Motor backword Pin
digitalWrite(in4, LOW);  //Left Motor forword Pin
}

//Stop function:
void Stop(){
digitalWrite(in1, LOW); //Right Motor forword Pin
digitalWrite(in2, LOW); //Right Motor backword Pin
digitalWrite(in3, LOW); //Left Motor backword Pin
digitalWrite(in4, LOW); //Left Motor forward Pin

//So, that’s all about coding. Now need to upload the code to the Arduino and to do so, connect your Arduino with the computer using USB cable and upload this code using the Arduino IDE.
