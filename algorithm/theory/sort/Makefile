# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 소스 파일 및 실행 파일 이름
SRC = quick_sort.cpp
TARGET = quick_sort

# 기본 빌드 규칙
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# 실행 파일 삭제
clean:
	rm -f $(TARGET)
