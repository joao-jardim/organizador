# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude

# Arquivos-fonte e objetos
SRC = src/main.cpp src/Menu.cpp
OBJ = $(SRC:.cpp=.o)

# Nome do executável
TARGET = programa

# Regra padrão (gera o executável)
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar arquivos .cpp em .o
src/%.o: src/%.cpp include/%.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos compilados
clean:
	rm -f $(OBJ) $(TARGET)

# Rodar o programa
run: all
	./$(TARGET)
