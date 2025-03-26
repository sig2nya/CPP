CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = malloc malloc_arr my_pet

all: $(TARGETS)

malloc: malloc.cpp
	$(CXX) $(CXXFLAGS) -o malloc malloc.cpp

malloc_arr: malloc_arr.cpp
	$(CXX) $(CXXFLAGS) -o malloc_arr malloc_arr.cpp

my_pet: my_pet.cpp
	$(CXX) $(CXXFLAGS) -o my_pet my_pet.cpp

clean:
	rm -f $(TARGETS)
