# Component Library and Generated Code

This repository contains the composition of the component library and the generated code of the motivational example from the paper "Software Synthesis from High-level Specification for Swarm Robotic Applications."

## Code Organization

__GeneratedCode__ : The generated code of the motivational example which consists of five TurtleBot3 Burgers and two EngineeringKit Robots

__SWComponentLib__ : The component library which contains the pre-defined components 

## Code Repository of the Component Library

```
¦---- Algorithm : The folder which contains the source code of algorithm components
¦      ¦---- getModeTransferCommand : Soruce code of _getModeTransferCommand_ action
¦      ¦---- include : Header files for sharing structure and enumeration definition with sensor/actuators
¦      ¦      ¦---- buzzer : Buzzer sensor header file
¦      ¦      ¦---- camera : Camera header file
¦      ¦      ¦---- color : Color sensor header file
¦      ¦      ¦---- direction : Wheel direction header file
¦      ¦      ¦---- distance : Distance sensor header file
¦      ¦      +---- led : LED header file
¦      ¦---- remoteControl : soruce code of _remoteControl_ action
¦      ¦---- searchV2 : Soruce code of _searchV2_ action
¦      +---- searchV3 : Soruce code of _searchV3_ action (This action represents the _searchColor_ in the paper)
¦---- Consensus : The folder which contains the source code of consensus components
¦      ¦---- GroupSelection : Group selection methods
¦      ¦      ¦---- DTA : dynamic group selection method
¦      ¦      +---- STATIC : Static group selection method
¦      +---- LeaderElection : Leader election methods
¦             +--- IDBased : ID-based leader election method
+--- Robot : The folder which contains the source code of robot components
       ¦---- EngineeringKit : Robot components of Engineering Kit robots
       ¦      ¦---- Actuator : Actuator access code of Engineering Kit robots
       ¦      ¦      ¦---- led : LED access code
       ¦      ¦      +---- wheel : Wheel access code
       ¦      +---- Sensor : Sensor access code of Engineering Kit robots
       ¦             ¦---- camera : Camera access code
       ¦             ¦---- color : Color sensor access code
       ¦             +---- dms : DMS-80 sensor access code
       +--- TurtleBot_Common : Robot components of TurtleBot3 robots
              ¦---- Actuator : Actuator access code of TurtleBot3 robots
              ¦      ¦---- buzzer : Buzzer access code
              ¦      ¦---- led : LED access code
              ¦      +---- wheel : Wheel access code
              +---- Sensor : Sensor access code of TurtleBot3 robots
                     ¦---- camera : Camera access code
                     ¦---- color : Color sensor access code
                     ¦---- lds : Laser distance sensor access code
                     +---- motion : Motion sensor access code
```


## Structure of the Generated Code

Each TurtleBot3 Burger comprises one Raspberry Pi 4 (Linux-based) and one OpenCR 1.0 (Arduino-based) board. Since the programming on OpenCR 1.0 is available to the public, the synthesizer generates the code on both platforms.

On the other hand, CM-550, which is a microcontroller of Engineering Kit robots, does not support programming on its board, so only the code running on Raspberry Pi 4 which is also mounted on Engineering Kit robots is generated.

Five TurtleBot3 Burgers are involved in the motivational example, and the IDs of the five robots are <br>
Burger\_1, Burger\_2, Burger\_3, Burger\_5, and Burger\_6.

Two Engineering Kit robots participated in the motivational example, and the IDs of the two robots are <br> 
EngineeringKit\_1 and EngineeringKit\_2.

Pre-defined components and generated code from the robot task model generator is located at src/application folder of each generated code folder.

| Folder name | Explanation | 
| --- | --- |
| Burger\_[number]\_OpenCR | Code generated for the OpenCR 1.0 board of Burger\_[number]. |
| Burger\_[number]\_RaspberryPi4\_8 | Code generated for the Raspberry Pi 4 board of Burger\_[number]. |
| EngineeringKit\_[number]\_RaspberryPi4\_ek | Code generated for the Raspberry Pi 4 board of EngineeringKit\_[number]. |


