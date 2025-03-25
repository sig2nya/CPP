CXX = g++ -std=c++11

CXXFLAGS = -Wall -O2

TARGET = 3003 10988 1157

SRCS = 3003.cpp 10988.cpp 1157.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

3003 : 3003.o
	$(CXX) $(CXXFLAGS) -o 3003 3003.o

10988 : 10988.o
	$(CXX) $(CXXFLAGS) -o 10988 10988.o
	
1157 : 1157.o
	$(CXX) $(CXXFLAGS) -o 1157 1157.o

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(TARGET)

.PHONY : all clean
