/*
 * main.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: richard
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "uart.h"
#include "i2cmaster.h"
#include "ds1307.h"
#include "Alarm.h"

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

void system_init( void );
void beep( void );

void system_init()
{
	DDRD |= ( 1 << PIN1 );

	uart_init( 38400 );	// Initialize UART to 38,400 baud
	_delay_ms( 100 );	// Allow 100ms for the UART to stabilize

	i2c_init();			// Initialize TWI to 100khz

	ds1307_init();		// Initialize DS1307 RTC

	sei();				// Enable all global interrupts

	uart_puts( "System Initialized\n" );
}

void beep()
{
	//An action will happen here
}

int main()
{
	system_init();
	Alarm my_alarm( beep );

	while( 1 )
	{
		uart_putc('C');
		_delay_ms( 500 );
	}

	return 0;
}
