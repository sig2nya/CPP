CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = 1546
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
