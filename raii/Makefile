# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# 실행 파일 이름
TARGET1 = raii
TARGET2 = without_raii

# 소스 파일
SRC1 = raii.cpp
SRC2 = without_raii.cpp

# 기본 타겟
all: $(TARGET1) $(TARGET2)

$(TARGET1): $(SRC1)
	$(CXX) $(CXXFLAGS) -o $(TARGET1) $(SRC1)

$(TARGET2): $(SRC2)
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(SRC2)

# 청소 명령
clean:
	rm -f $(TARGET1) $(TARGET2)
