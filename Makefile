all: functionOperator.o main.o
	g++ main.o functionOperator.o -o stringOperator

main.o: ./src/main.cpp
	g++ -c ./src/main.cpp

# menu.o: ./src/Menu.hpp ./src/MenuSelection.hpp
# 	g++ -c ./src/MenuSelection.hpp

functionOperator.o: ./src/functionOperator.cpp ./src/functionOperator.hpp
	g++ -c ./src/functionOperator.cpp

clean:
	rm *.o stringOperator