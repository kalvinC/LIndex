./bin/LIndex:main.o
	  g++ -o $@ $<

main.o:./src/main.cpp
	  g++ -c $<
