/*
 * main.h
 *
 *  Created on: Apr 10, 2021
 *      Author: Justin Qiao
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "msp.h"
#include "msp432p401r.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* RTOS header files */
#include <FreeRTOS.h>
#include <task.h>
#include <semphr.h>

/* ECE353 Includes */
#include <ece353.h>
#include <lcd.h>

/* Image data */
#include <airplane.h>
#include <ball.h>

/* FreeRTOS Tasks */
#include <task_airplane_fight.h>
#include <task_timer.h>
#include <task_accelerometer.h>
#include <task_enemy.h>
#include <task_console.h>


#endif /* MAIN_H_ */
