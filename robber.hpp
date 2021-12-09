#ifndef ROBBER_HPP
#define ROBBER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
//#include "city.hpp"
#include "jewel.hpp"
//#include "police.hpp"



class Robber
{
private:

public:
	int RobberID;
	int x = 0;
	int y = 0;
	vector<Jewel> bag[5];
	int JewelVal = 0;
	int TotalJewelWorth = 0;
	bool active = true;

	void pickUpJewel();

	void setx(int x);

	void sety(int y);

	void move();

};



#endif
//THings to do
/* 
Finish vector jewel bag
Police movement and check
jewel pickup + worth
Arrest

*/