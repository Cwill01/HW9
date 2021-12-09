#ifndef JEWEL_HPP
#define JEWEL_HPP

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include "city.hpp"
//#include "robber.hpp"
//#include "police.hpp"



class Jewel
{
private:

public:
	int m_Jewel_XPos;
	int m_Jewel_YPos;
	int JewelVal = (m_Jewel_XPos + m_Jewel_YPos);

	void UpdateCords(City & City);


};

#endif