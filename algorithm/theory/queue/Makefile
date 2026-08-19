# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 소스 파일 및 실행 파일 이름
SRC1 = pr_queue.cpp
SRC2 = student_queue.cpp

TARGET1 = pr_queue
TARGET2 = student_queue

# 기본 빌드 규칙
all: $(TARGET1) $(TARGET2)

$(TARGET1): $(SRC1)
	$(CXX) $(CXXFLAGS) -o $(TARGET1) $(SRC1)

$(TARGET2): $(SRC2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(SRC2)

# 실행 파일 삭제
clean:
	rm -f $(TARGET1) $(TARGET2)
