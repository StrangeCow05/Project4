main.o: horse.h race.h  main.cpp  
	g++ -c -g  main.cpp 

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp      

race.o: horse.h race.h race.cpp
	g++ -c -g race.cpp

game: main.o horse.o race.o
	g++ -g race.o horse.o main.o  -o game

run: game
	./game

clean: 
	rm *.o
	rm game

debug: game
	gdb game
