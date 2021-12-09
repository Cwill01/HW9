#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#include "city.hpp"
//#include "jewel.hpp"
//#include "robber.hpp"
#include "police.hpp"

void Police::move()
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

void Police::setx(int x)
{
	x = x;
}

void Police::sety(int y)
{
	y = y;
}
void Police::arrest() {
	cout << "Arrested" << endl;
}