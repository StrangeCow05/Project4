main.o: main.cpp race.h horse.h 
	g++ -c -g  main.cpp 

game: main.o
	g++ -g main.o -o game

run: game
	./game

clean: 
	rm *.o
	rm game

debug: game
	gdb game
