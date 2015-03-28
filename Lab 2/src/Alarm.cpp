/*
 * Alarm.cpp
 *
 *  Created on: Apr 9, 2014
 *      Author: richard
 */

#include "Alarm.h"


Alarm::Alarm( void( *run_task )( void ) )
{
	if( run_task != 0 )
	{
		task = run_task;
	}
}

Alarm::~Alarm( )
{
	// Nothing to do yet
}

bool Alarm::is_time_valid( alarm_time_h & set_time )
{
	return true;
}

void Alarm::set_alarm( alarm_time_h& set_time )
{
	if( is_time_valid( set_time ) == true )
	{

	}
}
