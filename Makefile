# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Arquivos-fonte e objetos
SRC = main.cpp Menu.cpp
OBJ = $(SRC:.cpp=.o)

# Nome do executável
TARGET = programa

# Regra padrão (gera o executável)
all: $(TARGET)

# Como gerar o executável
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar arquivos .cpp em .o
%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos compilados
clean:
	rm -f $(OBJ) $(TARGET)

# Rodar o programa
run: all
	./$(TARGET)
