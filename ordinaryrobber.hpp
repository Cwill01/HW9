#ifndef ORDINARYROBBER_HPP
#define ODRINARYROBBER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
//#include "city.hpp"
//#include "jewel.hpp"
//#include "robber.hpp"



class OrdinaryRobber : public Robber
{
private:

public:
  void setx(int x);
  void sety(int y);
};

#endif