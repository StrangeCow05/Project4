main.o: horse.h main.cpp  
	g++ -c -g  main.cpp 

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp       

game: main.o horse.o
	g++ -g horse.o main.o  -o game

run: game
	./game

clean: 
	rm *.o
	rm game

debug: game
	gdb game
