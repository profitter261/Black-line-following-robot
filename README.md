# Black-line-following-robot
The IoT-driven autonomous line-following robot, powered by Arduino IDE, can enhance material handling in furnace operations by automating the loading of materials onto conveyors. With integrated sensors and motors, the robot follows predefined paths, efficiently transporting raw materials for heating. This automation minimizes human intervention, ensures precise loading, and improves safety in high-temperature environments. The flexibility of Arduino IDE allows real-time adjustments to the robot’s speed and direction, optimizing operational efficiency in industrial processes.

## Methodology
The IoT-driven autonomous line-following robot, powered by Arduino IDE, can enhance material handling in furnace operations by automating the loading of materials onto conveyors. With integrated sensors and motors, the robot follows predefined paths, efficiently transporting raw materials for heating. This automation minimizes human intervention, ensures precise loading, and improves safety in high-temperature environments. The flexibility of Arduino IDE allows real-time adjustments to the robot’s speed and direction, optimizing operational efficiency in industrial processes.

## Circuit Diagram: Explanation
The circuit diagram for the autonomous line-following robot uses an Arduino Uno as the central microcontroller. Two IR sensors are connected to the microcontroller to detect the line and guide the robot along the predefined path. The motor driver (L293D) interfaces with the Arduino to control the left and right motors, adjusting movement based on sensor input. A 7.4V or 9V battery provides the necessary power for the motors and microcontroller. The motors are connected to the L293D, which allows for forward, left, right, and halt movements based on sensor signals. The circuit design is tested and optimized using the Wokwi simulator before physical implementation.

This setup serves as part of an automation or robotic system, where the ultrasonic sensors detect objects or measure distances, and the stepper motors perform precise movements based on the sensor data. For example, this could be used in a robotic arm or an obstacle-avoidance system.

### Moving Forward
<p align="center"> <img src="https://github.com/profitter261/Black-line-following-robot/blob/main/Images/image%206.jpg?raw=true" alt="Moving Forward" width="500"> <br> <em>Figure 1: Both sensors detect white surface — robot moves forward</em> </p>
### Turning Left
<p align="center"> <img src="https://github.com/profitter261/Black-line-following-robot/blob/main/Images/image%203.png?raw=true" alt="Turning Left" width="500"> <br> <em>Figure 2: Left sensor detects black line — robot turns left</em> </p>
### Turning Right
<p align="center"> <img src="https://github.com/profitter261/Black-line-following-robot/blob/main/Images/image%204.png?raw=true" alt="Turning Right" width="500"> <br> <em>Figure 3: Right sensor detects black line — robot turns right</em> </p>
### Stopping
<p align="center"> <img src="https://github.com/profitter261/Black-line-following-robot/blob/main/Images/image%205.png?raw=true" alt="Stopping" width="500"> <br> <em>Figure 4: Both sensors detect black line — robot stops</em> </p>
The robot's movement is steady and reliable. The system utilizes a hobby robot chassis, motor wheels, and a castor wheel for smooth motion and stability. The entire system is designed to be tested and optimized using the Wokwi simulator before implementation on the physical conveyor. Integrating IoT enhances real-time monitoring and control, ensuring seamless material flow and reducing human intervention during the loading process.

## Software Used / Tools / Components Required
1) Arduino Uno - 1 No
2) L293D Motor Driver - 1 No
3) IR Sensor Module - 2 Nos
4) 7.4V or 9V Battery - 1 No
5) BO Motor - 2 Nos
6) Motor Wheel - 2 Nos
7) Castor Wheel - 1 No
8) Hobby Robot Chassis - 1 No
9) Wires
10) Screws
11) Arduino IDE

## Results
The IoT-Driven Line Conveyor System with Autonomous Line-Following Robots revolutionizes industrial automation by enhancing efficiency, precision, and scalability in material handling. By leveraging IoT connectivity, real-time data monitoring, and autonomous navigation, this system minimizes manual intervention, reduces errors, and optimizes operational workflow. The integration of smart sensors and AI-driven decision-making ensures seamless coordination between robots and conveyor mechanisms, leading to improved productivity and cost savings.

This innovative approach not only enhances workplace safety and efficiency but also sets the foundation for future advancements in smart logistics, warehouse automation, and Industry 4.0.

<p align="center"> <img src="https://github.com/user-attachments/assets/489f13f2-71b7-46c8-a5d4-fb5551948e2c" alt="Final Robot Setup" width="500"> <br> <em>Figure 5: Final prototype of IoT-driven autonomous line-following robot</em> </p>
