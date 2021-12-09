#ifndef CITY_HPP
#define CITY_HPP

using namespace std;
//#include "jewel.hpp"
//#include "robber.hpp"
//#include "police.hpp"




class City 
{
private:
	int jewels = 47;
public:
	char city[10][10] = {};

	void PrintArray();
};

#endif
