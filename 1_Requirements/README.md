# Requirements
## Introduction
 * In high end Modular Kitchen,Electrical Chimney to reduce the heat and smoke coming out of the stove.But its not affordable for the middle class family.They normally use manual switch on Exhaust Fan for there kitchen.
 * Automatic Exhaust Fan can be used to reduce there work and also make their smaller kitchen even smarter.It detect the temperature of the kitchen room and turns on the exhaust fan when temperature exceeds certain limit. 

## Research
### Electrical Calculator...
* This is a simple project which simply provide required electrical parameters value to the user after taking input from the user. 
* This calculator is using various formulas for different functions,research are done in the particular calculation and theres need to be perequites before entering to the program

![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/f2cda815554c041bf7139979462159bb732afc52/1_Requirements/resistor_code.gif)
-------------------------------------------------------------------------------------------------
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/256f5675952ce21aabe37ecf476e453ace6db5f4/1_Requirements/led-series-table.jpg)

## Cost and Features
* This project has various features, like it can provide electrical parameters like volatge,current resistor value,battery life etc.. 
* In Resistor color code Calculator,it can give values of any band upto 6 bands.
* In ohms law Calculator,user can enter any two parameters(V,I,R,P) and can get other two parameter values.
* In LED series resistor Calculator,user can get resistor value to drive the LED by entering parameters.
* In Batter life Calculator,user can get the battery life in hours by entering the parameter.
#### above features are shown in the below screenshot. 
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/9f8aba398f1a0cc5bcde30190051daae5f0a3664/1_Requirements/index.png)

## Defining Our System
* System bacically takes input from the user and executes the particular function the user selected, and then print the values.
* There are 4 types of functions in this Calculator
  * Resistor Color Code Calculator
  * Ohms law Calculator
  * LED series Resistor Calculator
  * Battery Life Calculator


## SWOT ANALYSIS
![image](https://github.com/Suneesh-S/M1_Electrical_Calculator/blob/ce31353fb25e1129f81ab9baa3c5cf5c7dae40e5/1_Requirements/SWOT%20analysis.png)

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
