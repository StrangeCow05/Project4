#indef HORSE_H_EXISTS 
#define HORSE_H_EXISTS

#include <string>

class Horse{
 private: 
	 int position;
	 int trackLength;
	 int index;
 public:
	 Horse();
	 void init(int index, int trackLength);
	 void advance();
	 bool isWinner();
	 void printLane();



}
