gcc_options = -std=c++17 -Wall --pedantic-error
include = -include all.h

hello_world : hello_world.cpp
	g++ $(gcc_options) $(include) -o $@ $<

lambda : lambda.cpp
	g++ $(gcc_options) $(include) -o $@ $<

functions : functions.cpp
	g++ $(gcc_options) $(include) -o $@ $<

all.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

