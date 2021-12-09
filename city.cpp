
//Libraries
#include <iostream>
#include <string>
#include <cstdlib>
#include "city.hpp"
using namespace std;
//Files
//#include "jewel.hpp"
//#include "robber.hpp"
//#include "police.hpp"


void City::PrintArray() 
{
	cout << "Printing array" << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << i << " | ";
		for(int j = 0; j < 10; j++)
		{
		cout << city[i][j] << "  ";
			if (city[i][j] == 0)
			{
				city[i][j] = 32;
				cout << city[i][j];
			}
		}
		cout << "|" << endl;
	}
	return;
}


