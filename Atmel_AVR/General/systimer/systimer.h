/*
 * systimer.h
 *
 *  Created on: Feb 11, 2012
 *      Author: Administrator
 */

#ifndef SYSTIMER_H_
#define SYSTIMER_H_

#include <avr/io.h>
#include <avr/interrupt.h>

extern uint32_t systimer_10ms;
uint32_t systimer1;

#if F_CPU == 8000000UL
	#define OFFSET 1250
#elif F_CPU == 16000000UL
	#define OFFSET 2500
#else
	#define OFFSET 2500
#endif

extern void handle_10ms_tick(void);
extern void handle_1ms_tick(void);
void systimer_10ms_restart(uint8_t offset);
#define clear_systimer10()	systimer10 = 0;




#endif /* SYSTIMER_H_ */
