CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCS = print.cpp print_overloading.cpp func_template.cpp explicit_template.cpp multi_args_template.cpp swap.cpp specialize_template.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
