main.o: main.cpp 
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
