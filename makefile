CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp Figure.h Hexagon.h Pentagon.h Rhombus.h
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab4

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
