# 컴파일러와 옵션
CXX = g++
CXXFLAGS = -Wall -O2 -std=c++11

# 현재 디렉토리 내의 모든 cpp 파일
SRCS := $(wildcard *.cpp)

# .cpp → 실행파일명으로 (확장자 제거)
BINS := $(SRCS:.cpp=)

# 기본 타겟: 모든 실행파일 빌드
all: $(BINS)

# 각 cpp → 실행파일 룰
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# clean: 생성된 실행파일 삭제
clean:
	rm -f $(BINS)
