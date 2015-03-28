/*
 * intergerlist.cpp
 *
 *  Created on: Apr 2, 2014
 *      Author: richard
 */

#include "intergerlist.h"
#include <iostream>
#include <cstdlib>


IntergerList::IntergerList( int size )
{
	list = new int( size );
	numElements = size;

	for( int i = 0; i < size; i++ )
	{
		list[i] = 0;
	}
}

IntergerList::~IntergerList()
{
	delete []list;
}

bool IntergerList::isValid( int element ) const
{
	bool status;

	if( element < 0 || element >= numElements )
	{
		status = false;
	}
	else
	{
		status = true;
	}

	return status;
}

void IntergerList::setElement( int element, int value )
{
	if( isValid( element ) == true )
	{
		list[element] = value;
	}
	else
	{
		std::cout << "Error: Invalid element number!" << std::endl;
		exit( EXIT_FAILURE );
	}
}

int IntergerList::getElement( int element )
{
	if( isValid( element ) == true )
	{
		return list[element];
	}
	else
	{
		std::cout << "Error: Invalid element" << std::endl;
		exit( EXIT_FAILURE );
	}
	return 0;
}

