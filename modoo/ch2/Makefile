CXX = g++

CXXFLAGS = -std=c++11 -Wall -O2 -Wextra

TARGETS = reference difference_with_c call_by_reference reference_exam

all: $(TARGETS)

reference: reference.cpp
	$(CXX) $(CXXFLAGS) -o reference reference.cpp

difference_with_c: difference_with_c.cpp
	$(CXX) $(CXXFLAGS) -o difference_with_c difference_with_c.cpp

call_by_reference: call_by_reference.cpp
	$(CXX) $(CXXFLAGS) -o call_by_reference call_by_reference.cpp

referece_exam: reference_exam.cpp
	$(CXX) $(CXXFLAGS) -o reference_exam reference_exam.cpp

clean:
	rm -f $(TARGETS) $(OBJS)
