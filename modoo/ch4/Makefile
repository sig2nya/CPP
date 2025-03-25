CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = oop.cpp overloading.cpp date.cpp marine.cpp photon_cannon.cpp destructor.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
