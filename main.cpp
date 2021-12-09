//Programmer: Austin Turner
//Studnet ID: 12555140
//Section: 101
//Date: 12/5/2021
//File: main.cpp
//Purpose: Homework 9 Submission

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
#include "city.hpp"
#include "jewel.hpp"
#include "robber.hpp"
#include "ordinaryrobber.hpp"
#include "greedyrobber.hpp"
#include "police.hpp"





int main() {
	City Grid;
	
	OrdinaryRobber OrdRob1;
	OrdinaryRobber OrdRob2;
	OrdinaryRobber ORobbers[] = {OrdRob1, OrdRob2};

	GreedyRobber GreedRob1;
	GreedyRobber GreedRob2;
	GreedyRobber GRobbers[] = {GreedRob1, GreedRob1};

	Police Cop;
	srand(85);


	int Jewel_Num = 0;
	int OrdRobber_Num = 0;
	int GreedRobber_Num = 0;
	int Police_Num = 0;
	int turns = 0;
//*****Populate City with Jewels*****
	for (int i = 0; i < 46; i++) {
    int x = rand()% 10;
    int y = rand()% 10;
  	if (Grid.city[x][y] == 0) {
    	Grid.city[x][y] = 'J'; // J
   	 	Jewel_Num++;
    }
  }

//*****Populate City with Ordinary Robbers*****
	for(int i = 0; i < 2; i++){
		int x = rand()% 10;
		int y = rand()% 10;
		if (Grid.city[x][y] == 0)
		{
			Grid.city[x][y] = 'R'; // R
			ORobbers[i].x=x;
			ORobbers[i].y=y;
			OrdRobber_Num++;
		}
		else{
			i--;
		}	

	}
	//*****Populate City with Greedy Robbers*****
	for(int i = 0; i < 2; i++){
		int x = rand()% 10;
		int y = rand()% 10;
		if (Grid.city[x][y] == 0)
		{
			Grid.city[x][y] = 'R'; // G
			GRobbers[i].x=x;
			GRobbers[i].y=y;
			GreedRobber_Num++;
		}
		else{
			i--;
		}
	}
	//*****Populate City with Police*****
	for (int i = 0; i < 1; i++) {
		int x = rand()% 10;
		int y = rand()% 10;
		if (Grid.city[x][y] == 0)
		{
			Grid.city[x][y] = 'P'; // R
			Cop.x=x;
			Cop.y=y;
			Police_Num++;
		}
		else {i--;}
	}
	//***** Format City *****
	Grid.PrintArray();

	//***** Game Start *****

	bool endCondition= false;
	int turnNumber= 0;
	//TODO: Loop stucture for game

	//Movement
	while(turns < 30){
		for(int i=0; i< 2; i++){

			Grid.city[ORobbers[i].x][ORobbers[i].y] = ' ';
			ORobbers[i].move();
				char curCord = Grid.city[ORobbers[i].x][ORobbers[i].y];
				switch (curCord) {
					case('J'):
						cout << "O" << i << " ";
						ORobbers[i].pickUpJewel();
						break;
					case('P'):
						cout << "O" << i << " ";
						Cop.arrest();
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'P';
					default:
						cout << "O" << i << " ";
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'R';
				}
			
		}
		for(int i=0; i< 2; i++){
			Grid.city[GRobbers[i].x][GRobbers[i].y] = ' ';
			//cout << "Old cord" << GRobbers[i].x << GRobbers[i].y << endl;
			GRobbers[i].move();
			char curCord = Grid.city[ORobbers[i].x][ORobbers[i].y];
			switch (curCord) {
					case('J'):
						cout << "G" << i << " ";
						ORobbers[i].pickUpJewel();
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'R';
						break;
					case('R'):
						cout << "G" << i << " ";
						GRobbers[i].scatter();
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'R';
						break;
					case('P'):
					  cout << "G" << i << " ";
						Cop.arrest();
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'P';
						break;
					default:
						cout << "G" << i << " ";
						Grid.city[ORobbers[i].x][ORobbers[i].y] = 'R';
						break;
				} 
			Grid.city[ORobbers[i].x][ORobbers[i].y] = 'R';
		}
		Grid.city[Cop.x][Cop.y] = ' '; 
		Cop.move();
		if (Grid.city[Cop.x][Cop.y] == 'J') {
			Cop.totalJCons += (Cop.x + Cop.y);
		}
		Grid.city[Cop.x][Cop.y] = 'P';
		Grid.PrintArray();
		cout << "Total Jewel worth returned to the bank $" << Cop.totalJCons << endl;
		int turnadd = 0;
		cin >> turnadd;
		turns += turnadd;
	}

	//Check for jewels
	//Check for police
	//Greedy robber edgecase
	//TODO: Add Print function




	return 0;
}
