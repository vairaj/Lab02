// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "size of cows : " << cows.sizeOf() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "size of cows : " << cows.sizeOf() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "size of cows : " << cows.sizeOf() << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of horses : " << horses.sizeOf() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "size of cows : " << cows.sizeOf() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of horses : " << horses.sizeOf() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "size of cows : " << cows.sizeOf() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of horses : " << horses.sizeOf() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size of pigs : " << pigs.sizeOf() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "size of cows : " << cows.sizeOf() << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of horses : " << horses.sizeOf() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size of pigs : " << pigs.sizeOf() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "size of cows : " << cows.sizeOf() << endl;
	cout << "sum of cows : " << cows.sumOf() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "size of horses : " << horses.sizeOf() << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "size of pigs : " << pigs.sizeOf() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

