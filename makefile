.PHONY: all clean

CXX = g++
CXXFLAGS = -Iinclude

SRC = $(wildcard src/*.cpp)

TARGET = build/UniManagement

all: 
	mkdir -p build
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf build