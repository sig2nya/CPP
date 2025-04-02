CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = hello unnamespace stdin switch

all: $(TARGETS)

hello: hello.cpp
	$(CXX) $(CXXFLAGS) -o hello hello.cpp

unnamespace: unnamespace.cpp
	$(CXX) $(CXXFLAGS) -o unnamespace unnamespace.cpp

stdin: stdin.cpp
	$(CXX) $(CXXFLAGS) -o stdin stdin.cpp

switch: switch.cpp
	$(CXX) $(CXXFLAGS) -o switch switch.cpp

clean:
	rm -f $(TARGETS)
