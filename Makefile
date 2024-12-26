# Makefile
CC=gcc
CFLAGS=-I./include -Wall -Wextra

# Diretórios
SRC_DIR=src
INC_DIR=include
BIN_DIR=bin
TEST_DIR=test
OBJ_DIR=obj

# Arquivos fonte
SRCS=$(wildcard $(SRC_DIR)/*.c)
OBJS=$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TEST_SRCS=$(wildcard $(TEST_DIR)/*.c)
TEST_BINS=$(TEST_SRCS:$(TEST_DIR)/%.c=$(BIN_DIR)/%)

# Alvos principais
all: directories $(BIN_DIR)/conversor tests

# Criar diretórios necessários
directories:
	mkdir -p $(BIN_DIR) $(OBJ_DIR)

# Compilar o programa principal
$(BIN_DIR)/conversor: $(OBJS)
	$(CC) $(OBJS) -o $@ -lm

# Compilar objetos
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compilar e executar testes
tests: $(TEST_BINS)
	@for test in $(TEST_BINS); do ./$$test; done

$(BIN_DIR)/test_%: $(TEST_DIR)/test_%.c $(OBJ_DIR)/conversao_%.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

# Limpar arquivos compilados
clean:
	rm -rf $(BIN_DIR)/* $(OBJ_DIR)/*

.PHONY: all directories tests clean
