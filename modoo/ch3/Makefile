CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = malloc

all: $(TARGETS)

malloc: malloc.cpp
	$(CXX) $(CXXFLAGS) -o malloc malloc.cpp

clean:
	rm -f $(TARGETS)
