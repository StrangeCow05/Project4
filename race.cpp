#include <string>
#include <iostream>
#include "horse.h"
#include "race.h"

Race::Race(){
 for (int nh = 0; nh < numHorses; nh++){
	 horses[nh].init(nh, trackLength);
 }//end for
}//end constructer

void Race::run(){
 bool keepGoing = true;
 while (keepGoing){
  for (int nh = 0; nh < numHorses; nh++){
   horses[nh].advance();
   horses[nh].printLane();
   if (horses[nh].isWinner()){
     keepGoing = false;
   }//end if
  }//end for
std::cout <<"Press Enter to Continue:";
 std::cin.ignore();
 }//end while
}//end run 
