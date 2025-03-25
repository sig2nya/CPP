CXX = g++

CXXFLAGS = -Wall -O2

TARGET = 2557 1000 1001 10869 10926 18108

SRCS = 2557.cpp 1000.cpp 1001.cpp 10869.cpp 10926.cpp 18108.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

2557 : 2557.o
	$(CXX) $(CXXFLAGS) -o 2557 2557.o

1000 : 1000.o
	$(CXX) $(CXXFLAGS) -o 1000 1000.o

1001 : 1001.o
	$(CXX) $(CXXFLAGS) -o 1001 1001.o

10869 : 10869.o
	$(CXX) $(CXXFLAGS) -o 10869 10869.o

10926 : 10926.o
	$(CXX) $(CXXFLAGS) -o 10926 10926.o

18108 : 18108.o
	$(CXX) $(CXXFLAGS) -o 18108 18108.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : all clean
