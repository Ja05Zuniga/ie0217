CXX = g++
CXXFLAGS = -Wall -O2
TARGET = ejecucion.exe

all: build run
build: $(TARGET)

run: $(TARGET)
	./$(TARGET)

$(TARGET): main.exe libro.exe pelicula.exe podcast.exe noticia.exe materialAudiovisual.exe materialLectura.exe materialOrdenado.exe materialPrecio.exe
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.exe libro.exe pelicula.exe podcast.exe noticia.exe materialAudiovisual.exe materialLectura.exe materialOrdenado.exe materialPrecio.exe

main.exe: main.cpp libro.hpp pelicula.hpp podcast.hpp noticia.hpp materialAudiovisual.hpp materialLectura.hpp materialOrdenado.hpp materialPrecio.hpp
	$(CXX) $(CXXFLAGS) -c -o main.exe main.cpp

libro.exe: libro.cpp libro.hpp
	$(CXX) $(CXXFLAGS) -c -o libro.exe libro.cpp

pelicula.exe: pelicula.cpp pelicula.hpp
	$(CXX) $(CXXFLAGS) -c -o pelicula.exe pelicula.cpp

podcast.exe: podcast.cpp podcast.hpp
	$(CXX) $(CXXFLAGS) -c -o podcast.exe podcast.cpp

noticia.exe: noticia.cpp noticia.hpp
	$(CXX) $(CXXFLAGS) -c -o noticia.exe noticia.cpp

materialAudiovisual.exe: materialAudiovisual.cpp materialAudiovisual.hpp
	$(CXX) $(CXXFLAGS) -c -o materialAudiovisual.exe materialAudiovisual.cpp

materialLectura.exe: materialLectura.cpp materialLectura.hpp
	$(CXX) $(CXXFLAGS) -c -o materialLectura.exe materialLectura.cpp

materialOrdenado.exe: materialOrdenado.cpp materialOrdenado.hpp
	$(CXX) $(CXXFLAGS) -c -o materialOrdenado.exe materialOrdenado.cpp

materialPrecio.exe: materialPrecio.cpp materialPrecio.hpp
	$(CXX) $(CXXFLAGS) -c -o materialPrecio.exe materialPrecio.cpp

clean:
	del $(TARGET) main.exe libro.exe pelicula.exe podcast.exe noticia.exe materialAudiovisual.exe materialLectura.exe materialOrdenado.exe materialPrecio.exe

.PHONY: all build run clean