CXX = g++
CXXFLAGS = -Wall -O2
TARGET = adivina.exe

all: build run
build: $(TARGET)

run: $(TARGET)
	.\$(TARGET) 0 20

$(TARGET): main.exe juego.exe
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.exe juego.exe

main.o: main.cpp juego.hpp
	$(CXX) $(CXXFLAGS) -c -o main.exe main.cpp

juego.o: juego.cpp juego.hpp
	$(CXX) $(CXXFLAGS) -c -o juego.exe juego.cpp

clean:
	del $(TARGET) main.exe juego.exe

.PHONY: all build run clean
