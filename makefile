run : array.o
	g++ -o run array.o
array.o : array.cpp
	g++ -c array.cpp
clean :
	rm run array.o
