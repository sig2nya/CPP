CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = vector vector_capacity insert_error

all: $(TARGETS)

vector: vector.cpp
	$(CXX) $(CXXFLAGS) -o vector vector.cpp

vector_capacity: vector_capacity.cpp
	$(CXX) $(CXXFLAGS) -o vector_capacity vector_capacity.cpp

vector_capacity: insert_error.cpp
	$(CXX) $(CXXFLAGS) -o insert_error insert_error.cpp

clean:
	rm -f $(TARGETS)
