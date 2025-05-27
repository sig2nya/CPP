CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11 -O2

TARGETS = template exam_template

all: $(TARGETS)

template: template.cpp
	$(CXX) $(CXXFLAGS) -o template template.cpp

exam_template: exam_template.cpp
	$(CXX) $(CXXFLAGS) -o exam_template exam_template.cpp

clean:
	rm -f $(TARGETS)
