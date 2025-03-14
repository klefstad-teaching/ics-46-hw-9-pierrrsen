F = -std=c++20 -Wall -Wextra -Wpedantic -Wfatal-errors
Z = ICS46_hw9.zip
P = ladder

def: $P

ladder: ladder.cpp ladder_main.cpp ladder.h
	g++ $F ladder.cpp ladder_main.cpp -o ladder

clean:
	/bin/rm -f $P $Z

zip: clean
	zip $Z Makefile ladder_main.cpp ladder.h ladder.cpp small.txt medium.txt large.txt largest.txt words.txt
