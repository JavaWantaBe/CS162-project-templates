/*
 * Alarm.h
 *
 *  Created on: Apr 9, 2014
 *      Author: richard
 */


#ifndef _ALARM_H
#define _ALARM_H

#include <stdint.h>

typedef struct
{
	uint8_t sec;
	uint8_t min;
	uint8_t hour;
	uint8_t dayofweek;
	uint8_t month;
	uint8_t dayofmonth;
	uint16_t year;

} alarm_time_h;

class Alarm
{
	private:
		alarm_time_h alarm_time;
		void( *task )( void );
		uint8_t alarm_count = 0;
		bool is_time_valid( alarm_time_h & set_time );
	public:
		Alarm( void(* run_task )( void ) );
		~Alarm( void );
		void set_alarm( alarm_time_h & set_time );
		alarm_time_h get_alarm( void ){ return alarm_time; }
		void set_task( void( *run_task )( void ) );
};


#endif


