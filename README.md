# Black-line-following-robot
The IoT-driven autonomous line-following robot, powered by Arduino IDE, can enhance material handling in furnace operations by automating the loading of materials onto conveyors. With integrated sensors and motors, the robot follows predefined paths, efficiently transporting raw materials for heating. This automation minimizes human intervention, ensures precise loading, and improves safety in high-temperature environments. The flexibility of Arduino IDE allows real-time adjustments to the robot’s speed and direction, optimizing operational efficiency in industrial processes.

## Methodology:
The IoT-driven autonomous line-following robot, powered by Arduino IDE, can enhance material handling in furnace operations by automating the loading of materials onto conveyors. With integrated sensors and motors, the robot follows predefined paths, efficiently transporting raw materials for heating. This automation minimizes human intervention, ensures precise loading, and improves safety in high-temperature environments. The flexibility of Arduino IDE allows real-time adjustments to the robot’s speed and direction, optimizing operational efficiency in industrial processes.

### Circuit diagram:Explain diagram with circuit:
The circuit diagram for the autonomous line-following robot uses an Arduino Uno as the central microcontroller. Two IR sensors are connected to the microcontroller to detect the line and guide the robot along the predefined path. The motor driver (L293D) interfaces with the Arduino to control the left and right motors, adjusting movement based on sensor input. A 7.4V or 9V battery provides the necessary power for the motors and microcontroller. The motors are connected to the L293D, which allows for forward, left, right, and halt movements based on sensor signals. The circuit design is tested and optimized using the Wokwi simulator before physical implementation.

This setup serves as part of an automation or robotic system, where the ultrasonic sensors detect objects or measure distances, and the stepper motors perform precise movements based on the sensor data. For example, this could be used in a robotic arm or an obstacle-avoidance system.
### Moving Forward:

 
In this case, when both the sensors are on a white surface and the line is between the two sensors, the robot should move forward, i.e., both the motors should rotate such that the robot moves in forward direction (actually both the motors should rotate in the opposite direction due to the placement of motors in our setup. But for the sake of simplicity, we will call the motors rotating forward.) When both sensors detect a white surface, the robot moves forward, transporting materials to the conveyor.
### Turning LEFT:
 
In this case, the left sensor is on top of the dark line, whereas the right sensor is on the white part, hence the left sensor detects the black line and gives a signal, to the microcontroller. Since, signal comes from the left sensor, the robot should turn to the left direction. Therefore, the left motor rotates backwards and the right motor rotates in forward direction. Thus, the robot turns towards left side.

### Turning RIGHT:
 
This case is similar to the left case, but in this situation only the right sensor detects the line which means that the robot should turn in the right direction. To turn the robot towards the right direction, the left motor rotates forward and the right motor rotates backwards and as a result, the robot turns towards the right direction.
### Stopping:
 
In this case, both the sensors are on top of the line and they can detect the black line simultaneously, the microcontroller is fed to consider this situation as a process for halt. Hence, both the motors are stopped, which causes the robot to stop moving.
the robot's movement is steady and reliable. The system utilizes a hobby robot chassis, motor wheels, and a castor wheel for smooth motion and stability. The entire system is designed to be tested and optimized using the Wokwi simulator before implementation on the physical conveyor. Integrating IoT enhances real-time monitoring and control, ensuring seamless material flow and reducing human intervention during the loading process.
## Software used/ Tools/ Components required:

1.	Arduino Uno - 1Nos
2.	L293D motor driver- 1Nos
3.	IR sensor module -2 Nos
4.	7.4 or 9V battery -1 Nos
5.	BO motor - 2 Nos
6.	Motor wheel - 2 Nos
7.	Castor wheel - 1 Nos
8.	Hobby robot chassis - 1 Nos
9.	Wires
10.	Screw
11.	Arduino IDE
## Results:

The IoT-Driven Line Conveyor System with Autonomous Line-Following Robots revolutionizes industrial automation by enhancing efficiency, precision, and scalability in material handling. By leveraging IoT connectivity, real-time data monitoring, and autonomous navigation, this system minimizes manual intervention, reduces errors, and optimizes operational workflow. The integration of smart sensors and AI-driven decision-making ensures seamless coordination between robots and conveyor mechanisms, leading to improved productivity and cost savings.
This innovative approach not only enhances workplace safety and efficiency but also sets the foundation for future advancements in smart logistics, warehouse automation, and Industry 4.0.




