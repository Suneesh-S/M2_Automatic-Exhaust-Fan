# TEST Cases:

## Table no: High level test plan
 
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Is user able to get the temperature in Display |Samp ip|exp i/p| act o/p | Requirement based |
|  H_02       | Is the motor turns on when the temperature beyond 30oC| Samp i/p | exp i/p| act o/p  | Scenario Based  |
|  H_03       | Is the motor turns off when the temperature below 30oC| Samp i/p | exp i/p| act o/p  | Scenario Based  |
|  H_04       | Is the Alarm turns off when the temperature beyond 70oC| Samp i/p | exp i/p| act o/p  | Scenario Based |
|  H_05       | Is the user able to see the status off the system in PC using UART| Samp i/p | exp i/p| act o/p  | Requirement based |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | is the sound alarm working| PD2=1 | alarm on | alarm on|Requirement based |
|  L_02       | is the LM35(potentiometer) working | temperature varies | microcontroller reads value | microcontroller reads value|Requirement based |
|  L_03       | is the LCD display working | 'A' | A(displays) | A(displays)|Requirement based |
|  L_04       | is the motor and L23 driver working | portc on | Motor Rotates | Motor Rotates|Requirement based |
|  L_05       | is the UART communication with PC working | Samp ip | exp i/p | act o/p|Requirement based |
