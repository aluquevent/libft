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
	@echo "Creating static library ${NAME}... 📚"
	@$(AR) $(NAME) $(OBJS)
	@echo "Library ${NAME} created successfully. ✅"

$(OBJDIR)%.o: $(SRCDIR)%.c
	@echo "Compiling $<... 🛠️"
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files... 🧹"
	@$(RM) -r $(OBJDIR)
	@echo "Object files removed. ✅"

fclean: clean
	@echo "Removing ${NAME} and test executable... 🗑️"
	@$(RM) $(NAME)
	@$(RM) $(TEST_NAME)
	@echo "Cleanup complete. ✅"

re: fclean all
	@echo "Full recompilation complete. 🎉"

test: $(NAME)
	@echo "Compiling test executable... 🧪"
	@$(CC) $(CFLAGS) $(NAME) $(TEST_MAIN) -o $(TEST_NAME)
	@echo "Running tests... 🚀"
	./$(TEST_NAME)
.PHONY: all fclean clean re test
	
