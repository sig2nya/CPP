CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = vector iterator

all: $(TARGETS)

vector: vector.cpp
	$(CXX) $(CXXFLAGS) -o vector vector.cpp

iterator: iterator.cpp
	$(CXX) $(CXXFLAGS) -o iterator iterator.cpp

clean:
	rm -f $(TARGETS)
