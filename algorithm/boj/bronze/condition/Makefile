CXX = g++

CXXFLAGS = -Wall -O2

TARGET = 1330

SRCS = 1330.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

1330 : 1330.o
	$(CXX) $(CXXFLAGS) -o 1330 1330.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : all clean
