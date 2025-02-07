#ifndef RACE_H_EXIST
#define RACE_H_EXIST


#include <string>
#include "horse.h"

class Race{
 private:
	 const int trackLength;
	 const static int numHorses=5;
	 Horse horses[numHorses];
 public:
	 Race();
	 void run();


};
