//============================================================================
// Name        : CS162_Tester.cpp
// Author      : Richard Lowe
// Version     :
// Copyright   : Alphaloewe GmbH
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape
{
	public:
		int x;
		Shape() : x(5){}
	private:

};

class Square : public Shape
{
	public:
		void getX( int x );
};

void Square::getX( int x )
{
	
}


int main()
{
	
	return 0;
}
