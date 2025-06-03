TARGET = programa

SRCS = main.cpp menu.cpp menu_ejercicios.cpp ejercicios.cpp

OBJS = $(SRCS:.cpp=.o)

LIBS = menu.h menu_ejercicios.h ejercicios.h

CXX = g++

# compila el programa principal
all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $(OBJS) -o $(TARGET) $(LIBS)
%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -rf $(TARGET) $(OBJS)
