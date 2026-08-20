CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = set.cpp duplicate_set.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
