TARGET=game
CPPFLAGS=-Wall -Wextra -g
CPP=g++

SRC=main.cpp menu.cpp

OBJ=$(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)

all: clean
	make
	./$(TARGET)

run: $(TARGET)
	./$(TARGET)