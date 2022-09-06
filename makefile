fileHandling: fileHandling.o
	g++ fileHandling.o -o fileHandling

fileHandling.o: fileHandling.cpp
	g++ -c fileHandling.cpp

clean:
	rm *.o fileHandling