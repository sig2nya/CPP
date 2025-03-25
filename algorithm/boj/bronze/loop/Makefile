CXX = g++

CXXFLAGS = -Wall -O2

TARGET = 2439

SRCS = 2439.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

2439 : 2439.o
	$(CXX) $(CXXFLAGS) -o 2439 2439.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : all clean
