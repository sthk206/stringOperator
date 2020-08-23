zeroPad: zpad.o
	g++ zpad.o -o zPad

zpad.o: ./src/zpad.cpp
	g++ -c ./src/zpad.cpp

clean:
	rm *.o zPad