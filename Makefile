.PHONY: all

all: out/day1 out/day2

out/%: src/%.cpp
	mkdir -p out
	g++ $< -o $@
