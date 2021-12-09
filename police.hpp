#ifndef POLICE_HPP
#define POLICE_HPP
using namespace std;
#include <iostream>
#include <string>
#include <cstdlib>

#include "city.hpp"



class Police 
{
private:

public:
	int x;
	int y;
	int totalJCons = 0;

	void move();

	void setx(int x);

	void sety(int y);

	void arrest();
};


#endif