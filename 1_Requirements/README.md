# Requirements
## Introduction
 * In high end Modular Kitchen,Electrical Chimney to reduce the heat and smoke coming out of the stove.But its not affordable for the middle class family.They normally use manual switch on Exhaust Fan for there kitchen.
 * Automatic Exhaust Fan can be used to reduce there work and also make their smaller kitchen even smarter.It detect the temperature of the kitchen room and turns on the exhaust fan when temperature exceeds certain limit. 

## Research
### Automatic Exhaust Fan...
* To implement the project,the major component need is temperature sensing component 
* From research,got two sensors-LM35 and Thermistor.Thermistor is used in project because the sensitivity of the sensor is better than LM35.It can sense the minor difference

<img src="https://github.com/Suneesh-S/M2_Automatic-Exhaust-Fan/blob/3f50f48eee6bf801f1f051b151a9b0f9d8b52431/1_Requirements/lm35.jpg" width="360" height="240">
<img src="https://github.com/Suneesh-S/M2_Automatic-Exhaust-Fan/blob/1fdc97c9173d17fd25f4d9e2b2ebff66e1105c0e/1_Requirements/thermistor.jpg" width="360" height="240">

## Cost and Features
* This project has various features, like it can provide air circulating system inside the Kitchen 
* It can reduce the temperature of the kitchen with automatic approach
* It can sense the high rise of temperature and alarm the family
* The cost of the system is less compares to the Electric Chimney

## Defining Our System
* System bacically takes temperature input from the environment and executes the particular function according to the Temperature and then Display the Temperature
* There are 3 types of functions in this Calculator
  * Displays the Temperature of the Kitchen
  * Controls the Exhaust Fan according to the Temperature
  * Sounds the alarm during the sense of danger
  

## SWOT ANALYSIS
![image](https://github.com/Suneesh-S/M2_Automatic-Exhaust-Fan/blob/038d15ecd7fb61d6a0f9cf42dbd3ece575f59a97/1_Requirements/SWOT%20analysis.png)

# 4W&#39;s and 1&#39;H

## Who:

* All the small and medium size kitchen family can use this device.

## What:

* Automatic Exhaust Fan used to turn on the exhaust fan when needed and sound the alaram when danger sense.

## When:

* During the step-In training, this is the final project assessment and development started on 4th April.

## Where:

* This can be used in all medium and small sized Kitchen.

## How:

* users can use this device to ease their work even more comfortable.

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|HLR-1| The Exhaust Fan shall be in OFF state till the temperature reaches 30oC |Implemented|
|HLR-2| The Exhaust Fan shall be in ON state when the temperature reaches beyond 30oC. |Implemented|
|HLR-3| The Alarm shall be in ON state when the temperature reaches beyond 70oC. |Implemented|
|HLR-5| user shall be set the temperature at which the Fan operate. |Future|



##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| Sensor shall able to sense the temperature. |Implemented|
|LLR-2| User shall be able to see the temperature of the room. |Implemented|
|LLR-3| System shall able to sense the rise of temperature and sound alarm |Implemented|
|LLR-4| Motor shall vary the speed depends on the temperature to reduce the electricity bill|Future|
