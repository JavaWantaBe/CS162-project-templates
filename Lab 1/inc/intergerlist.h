/*
 * intergerlist.h
 *
 *  Created on: Apr 2, 2014
 *      Author: richard
 */

#ifndef INTERGERLIST_H_
#define INTERGERLIST_H_

class IntergerList
{
	private:
		int *list; 					// Pointer to array of integers
		int numElements;			// Number of elements in array
		bool isValid( int element ) const;// Validates the number
	public:
		IntergerList( int size );	// Constructor
		~IntergerList( void );		// Destructor
		void setElement( int element, int value );	// Sets an element to a val
		int getElement( int element );				// Gets element val
};


#endif /* INTERGERLIST_H_ */
