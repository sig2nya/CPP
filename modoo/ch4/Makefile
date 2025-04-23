CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = class.cpp overloading.cpp constructor.cpp starcraft.cpp destructor.cpp starcraft2.cpp this.cpp return_reference.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
