CXX = g++

CXXFLAGS = -Wall -O2 

TARGET = 1546

SRCS = 1546.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

2439 : 1546.o
	$(CXX) $(CXXFLAGS) -o 1546 1546.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : all clean
