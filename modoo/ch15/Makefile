CXX = g++

CXXFLAGS = -std=c++11 -Wall -pthread

SRCS = thread.cpp not_join_thread.cpp thread_detach.cpp mutex.cpp
EXES = $(SRCS:.cpp=)

.PHONY: all clean

all: $(EXES)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
