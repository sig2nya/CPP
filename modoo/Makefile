CC = g++
CFLAGS = -Wall -std=c++11

# 모든 ch* 디렉토리를 검색하여 포함
SUBDIRS := $(wildcard ch*)

# 각 디렉토리 내의 cpp 파일을 오브젝트 파일로 변환
SOURCES := $(wildcard $(patsubst %, %/*.cpp, $(SUBDIRS)))
OBJECTS := $(SOURCES:.cpp=.o)
EXECUTABLES := $(SOURCES:.cpp=)

all: $(EXECUTABLES)

# 각 소스 파일을 개별 실행 파일로 컴파일
%: %.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLES) $(OBJECTS)

