A:A.o head.o
	g++ -o A A.o head.o
A.o:A.cpp head.h
	g++ -c A.cpp
head.o:head.cpp head.h
	g++ -c head.cpp
