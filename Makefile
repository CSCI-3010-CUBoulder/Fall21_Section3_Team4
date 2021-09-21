CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm test

test: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o test
