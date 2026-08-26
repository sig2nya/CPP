CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Iinclude

TARGET = game_server

SRCS = \
	src/main.cpp \
	src/net/socket.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
