
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//#include "city.hpp"
#include "jewel.hpp"
//#include "robber.hpp"
//#include "police.hpp"



	void Jewel::UpdateCords(City &City)
{
    bool jewelPresent = 0;
    do
    {
      m_Jewel_XPos = rand()% 10;
      m_Jewel_YPos = rand()% 10;
      if (City.city[m_Jewel_XPos][m_Jewel_YPos] == 'J')
      {
        jewelPresent = 0;
      }
      else
      {
        jewelPresent = 1;
      }
    }
    while(jewelPresent == 0);
    City.city[m_Jewel_XPos][m_Jewel_YPos] = 'J';
    return;
}
