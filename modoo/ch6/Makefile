CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = string.cpp employee.cpp inheritance.cpp init_list.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
