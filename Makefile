

bin/firewater : src/firewater.cpp include/*.hpp
	c++ src/firewater.cpp -I include -o bin/firewater -lcurses

run : bin/firewater
	./bin/firewater

