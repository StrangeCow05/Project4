#include <iostream> 
#include <string>
#include"race.h"
#include"horse.h"

int main(){
 std::cout<<"hello world"<<std::endl;

 Horse h;
 h.printLane();
 h.advance();
 h.printLane();
 h.advance();
 h.printLane();
return 0 ;
}
