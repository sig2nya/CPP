CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = string_constructor.cpp string_append.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
