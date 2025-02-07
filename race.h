#indef RACE_H_EXIST
#define RACE_H_EXIST


#include <string>
#include "horse.h"

class Race(){
 private:
	 Horse horses [numHorses];
	 const int trackLength;
	 const static int numHorses;
 public:
	 Race();
	 void run();


}
