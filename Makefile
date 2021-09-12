battleship: main.o Executive.o gameBoard.o test_input.o
	g++ -g -std=c++11 -Wall main.o Executive.o gameBoard.o test_input.o -o battleship

main.o: main.cpp Executive.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c main.cpp

Executive.o: Executive.cpp Executive.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c Executive.cpp

gameBoard.o: gameBoard.cpp gameBoard.hpp myDefines.h
	g++ -g -std=c++11 -Wall -c gameBoard.cpp
	
test_input.o: test_input.cpp test_input.hpp myDefines.h
		g++ -g -std=c++11 -Wall -c test_input.cpp

clean:
	rm *.o battleship

run:
	./battleship
