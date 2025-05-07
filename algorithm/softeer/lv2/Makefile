CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = 9657.cpp 6284.cpp 11001.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
