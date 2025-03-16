F = -std=c++20 -Wall -Wextra -Wpedantic -Wfatal-errors
Z = ICS46_hw9.zip
P = ladder
D = dijkstra

def: $P $D

ladder: ladder.cpp ladder_main.cpp ladder.h
	g++ $F ladder.cpp ladder_main.cpp -o ladder

dijkstra: dijkstras.cpp dijkstras_main.cpp dijkstras.h
	g++ $F dijkstras.cpp dijkstras_main.cpp -o dijkstras

clean:
	/bin/rm -f $P $D $Z

zip: clean
	zip $Z Makefile dijkstras.cpp dijkstras_main.cpp dijkstras.h ladder_main.cpp ladder.h ladder.cpp small.txt medium.txt large.txt largest.txt words.txt
