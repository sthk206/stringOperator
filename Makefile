all: functionOperator.o main.o
	g++ --std=c++11 main.o functionOperator.o -o stringOperator

main.o: ./src/main.cpp
	g++ -c --std=c++11 ./src/main.cpp

# menu.o: ./src/Menu.hpp ./src/MenuSelection.hpp
# 	g++ -c ./src/MenuSelection.hpp

functionOperator.o: ./src/functionOperator.cpp ./src/functionOperator.hpp
	g++ --std=c++11 -c ./src/functionOperator.cpp

clean:
	rm *.o stringOperator