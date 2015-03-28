/*
 * main.cpp
 *
 *  Created on: Apr 2, 2014
 *      Author: richard
 */

#include <iostream>
#include "intergerlist.h"
using namespace std;



int main( void )
{
	int val, x;
	const int SIZE = 20;

	cout << "Welcome to CS162 with Richard" << endl;

	IntergerList numbers( SIZE );

	/* Store a 9 in each member of the list and display an asterisk each time
	 * a 9 is successfully stored.
	 */
	for( x = 0; x < SIZE; x++ )
	{
		numbers.setElement( x, 9 );
		cout << "*";
	}

	cout << endl;

	// Attempt to store a value outside the list's bounds
	numbers.setElement( 50, 9 );

	// Will this message display?
	cout << "Element 50, successfully set to 9." << endl;

	return 0;
}

