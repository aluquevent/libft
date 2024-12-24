NAME = libtf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I./include
AR = ar rcs
RM = rm -f

SRCDIR = $(shell pwd)/srcs/
OBJDIR = $(shell pwd)/objs/

SRCS = $(wildcard $(SRCDIR)*.c)
OBJS = $(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)

TEST_NAME = test_libft
TEST_MAIN = $(shell pwd)/tests/main.c
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creando la biblioteca estática ${NAME}... 📚"
	@$(AR) $(NAME) $(OBJS)
	@echo "Biblioteca ${NAME} creada con éxito. ✅"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "Compilando $<... 🛠️"
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Eliminando archivos objeto... 🧹"
	@$(RM) -r $(OBJDIR)
	@echo "Archivos objeto eliminados. ✅"

fclean: clean
	@echo "Eliminando ${NAME} y el ejecutable de tests... 🗑️"
	@$(RM) $(NAME)
	@$(RM) $(TEST_NAME)
	@echo "Limpieza completa. ✅"

re: fclean all

test: $(NAME)
	@echo "Compilando el ejecutable de tests... 🧪"
	@$(CC) $(CFLAGS) $(NAME) $(TEST_MAIN) -o $(TEST_NAME)
	@echo "Ejecutando los tests... 🚀"
	./$(TEST_NAME)
.PHONY: all fclean clean re test
	
