/**
 * @file Motor.h
 * @author Suneesh S
 * @brief Header File with Motor Control function
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef MOTOR_H_
#define MOTOR_H_

#define  F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

/**
 * @brief Function used to control the motor and alarm with respect to temperature
 * 
 * @param temp 
 */
void Motor_Control(float temp);

#endif