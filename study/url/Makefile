CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

TARGET = URL-CHECK
SRC = url_pattern.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(TARGET)
