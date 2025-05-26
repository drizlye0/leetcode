# Nombre del ejecutable
TARGET = main

# Compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -Wall -std=c++17

# Archivos fuente
SRC = main.cpp

# Archivos objeto
OBJ = $(SRC:.cpp=.o)

# Regla por defecto
all: $(TARGET)

# Regla para compilar el ejecutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regla para compilar archivos .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Ejecutar el programa
run: $(TARGET)
	./$(TARGET)

# Limpiar archivos generados
clean:
	rm -f $(TARGET) $(OBJ)

.PHONY: all run clean
