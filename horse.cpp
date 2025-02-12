#include<string>
#include<iostream>
#include<random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
 Horse::position = 0;
 Horse::trackLength = 15;
 Horse::index = 0;
}//end constructer

void Horse::init(int index, int trackLength){
 Horse::position = 0;
 Horse::index = index;
 Horse::trackLength = trackLength;
}//end init

void Horse::advance(){
int coin = dist(rd);
Horse::position += coin;
}

void Horse::printLane(){
 for (int pos = 0; pos < Horse::trackLength; pos++){
  if (pos == Horse::position){
   std::cout<<Horse::index;
  }else{
   std::cout <<"." ;
  }//end if
 }//end for
 std::cout<<" "<<std::endl; 
}//end print lane

bool Horse::isWinner(){
 bool result = false;
 if (Horse::position > Horse::trackLength){
  std::cout<<Horse::index << " is the winner"<<std::endl;
  result = true;
 }//end if
 return result;
}//end isWinner
