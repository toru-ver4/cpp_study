gcc_options = -std=c++17 -Wall --pedantic-error
include = -include all.h

calc_bmi : calc_bmi.cpp
	g++ $(gcc_options) $(include) -o $@ $<

all.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

