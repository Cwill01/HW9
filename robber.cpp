
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//#include "city.hpp"
//#include "jewel.hpp"
#include "robber.hpp"
//#include "police.hpp"


void setx(int x)
{
	x = x;
}

void sety(int y)
{
	y = y;
}

void Robber::move()
{
	x += ((rand() % 3) - 1);
	y += ((rand() % 3) - 1);
	if (x > 9) {
		x -= 2;
	} else if (x < 0) {
			x += 2;
	}
	if (y > 9) {
		y -= 2;
	} else if (y < 0) {
		y += 2;
	}
}

void Robber::pickUpJewel() {
	cout << "Pickup" << endl;
}