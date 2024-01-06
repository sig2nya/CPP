CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = memory.cpp mypet.cpp oop.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
