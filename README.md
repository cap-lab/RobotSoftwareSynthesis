# Component Library and Generated Code

This repository contains the composition of the component library and the generated code of the motivational example from the paper "Software Synthesis from High-level Specification for Swarm Robotic Applications."

## Code Organization

__GeneratedCode__ : The generated code of the motivational example which consists of five TurtleBot3 Burgers and two EngineeringKit Robots

__SWComponentLib__ : The component library which contains the pre-defined components 

## Code Repository of the Component Library

```
戍式式 Algorithm : The folder which contains the source code of algorithm components
弛     戍式式 getModeTransferCommand : Soruce code of _getModeTransferCommand_ action
弛     戍式式 include : Header files for sharing structure and enumeration definition with sensor/actuators
弛     弛     戍式式 buzzer : Buzzer sensor header file
弛     弛     戍式式 camera : Camera header file
弛     弛     戍式式 color : Color sensor header file
弛     弛     戍式式 direction : Wheel direction header file
弛     弛     戍式式 distance : Distance sensor header file
弛     弛     戌式式 led : LED header file
弛     戍式式 remoteControl : soruce code of _remoteControl_ action
弛     戍式式 searchV2 : Soruce code of _searchV2_ action
弛     戌式式 searchV3 : Soruce code of _searchV3_ action (This action represents the _searchColor_ in the paper)
戍式式 Consensus : The folder which contains the source code of consensus components
弛     戍式式 GroupSelection : Group selection methods
弛     弛     戍式式 DTA : dynamic group selection method
弛     弛     戌式式 STATIC : Static group selection method
弛     戌式式 LeaderElection : Leader election methods
弛            戌式式 IDBased : ID-based leader election method
戌式式 Robot : The folder which contains the source code of robot components
       戍式式 EngineeringKit : Robot components of Engineering Kit robots
       弛     戍式式 Actuator : Actuator access code of Engineering Kit robots
       弛     弛     戍式式 led : LED access code
       弛     弛     戌式式 wheel : Wheel access code
       弛     戌式式 Sensor : Sensor access code of Engineering Kit robots
       弛            戍式式 camera : Camera access code
       弛            戍式式 color : Color sensor access code
       弛            戌式式 dms : DMS-80 sensor access code
       戌式式 TurtleBot_Common : Robot components of TurtleBot3 robots
              戍式式 Actuator : Actuator access code of TurtleBot3 robots
              弛     戍式式 buzzer : Buzzer access code
              弛     戍式式 led : LED access code
              弛     戌式式 wheel : Wheel access code
              戌式式 Sensor : Sensor access code of TurtleBot3 robots
                     戍式式 camera : Camera access code
                     戍式式 color : Color sensor access code
                     戍式式 lds : Laser distance sensor access code
                     戌式式 motion : Motion sensor access code
```


## Structure of the Generated Code

Each TurtleBot3 Burger comprises one Raspberry Pi 4 (Linux-based) and one OpenCR 1.0 (Arduino-based) board. Since the programming on OpenCR 1.0 is available to the public, the synthesizer generates the code on both platforms.

On the other hand, CM-550, which is a microcontroller of Engineering Kit robots, does not support programming on its board, so only the code running on Raspberry Pi 4 which is also mounted on Engineering Kit robots is generated.

Five TurtleBot3 Burgers are involved in the motivational example, and the IDs of the five robots are <br>
Burger\_1, Burger\_2, Burger\_3, Burger\_5, and Burger\_6.

Two Engineering Kit robots participated in the motivational example, and the IDs of the two robots are <br> 
EngineeringKit\_1 and EngineeringKit\_2.

| Folder name | Explanation | 
| --- | --- |
| Burger\_[number]\_OpenCR | Code generated for the OpenCR 1.0 board of Burger\_[number]. |
| Burger\_[number]\_RaspberryPi4\_8 | Code generated for the Raspberry Pi 4 board of Burger\_[number]. |
| EngineeringKit\_[number]\_RaspberryPi4\_ek | Code generated for the Raspberry Pi 4 board of EngineeringKit\_[number]. |


