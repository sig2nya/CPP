CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = 7698.cpp 7695.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
