CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = test.cpp char.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
