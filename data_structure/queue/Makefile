# 1. 컴파일러 및 플래그 설정
CXX = g++
CXXFLAGS = -Wall -O2 -std=c++11

# 2. 소스 파일 목록 자동 탐색 (.cpp 파일 전부)
SRCS = queue.cpp test.cpp
# 만약 디렉토리 내 모든 cpp를 자동으로 넣고 싶다면 아래 주석을 풀고 위 줄을 지우세요.
# SRCS = $(wildcard *.cpp)

# 3. 타겟 정의 (각 소스 파일에서 .cpp를 뗀 이름: queue, test)
TARGETS = $(SRCS:.cpp=)

# 4. 기본 빌드 규칙 (make 입력 시 모든 실행 파일 생성)
all: $(TARGETS)

# 5. 각 소스 파일을 독립된 실행 파일로 빌드하는 규칙
# (예: queue.cpp -> queue 실행 파일 생성)
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# 6. 정리 규칙 (생성된 실행 파일들 삭제)
clean:
	rm -f $(TARGETS)

.PHONY: all clean
