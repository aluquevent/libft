
# Directories
SRC_DIR = $(shell pwd)/srcs/
OBJ_DIR = $(shell pwd)/objs/
TEST_DIR = $(shell pwd)/tests/
INCLUDES = $(shell pwd)/includes/

# Files
SRC_FILES = $(wildcard $(SRC_DIR)*.c)
TEST_FILES = $(wildcard $(TEST_DIR)*.c)

SRCS = $(SRC_FILES)
OBJS = $(SRC_FILES:$(SRC_DIR)%.c=$(OBJ_DIR)srcs/%.o)
TEST_SRCS = $(TEST_FILES)
TEST_OBJS = $(TEST_FILES:$(TEST_DIR)%.c=$(OBJ_DIR)tests/%.o)

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDES)
AR = ar rcs
RM = rm -f

# Targets
NAME = libft.a
TEST_LIB = libtests.a
EXEC = test_libft

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating static library ${NAME}... 📚"
	@$(AR) $(NAME) $(OBJS)
	@echo "Library ${NAME} created successfully. ✅"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)srcs/
	@mkdir -p $(OBJ_DIR)tests/
	
$(OBJ_DIR)srcs/%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@echo "Compiling $<... 🛠️"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)tests/%.o: $(TEST_DIR)%.c | $(OBJ_DIR)
	@echo "Compiling $<... 🛠️"
	@$(CC) $(CFLAGS) -c $< -o $@

$(TEST_LIB): $(TEST_OBJS)
	@echo "Creating test library $(TEST_LIB)... 🧪"
	@$(AR) $(TEST_LIB) $(TEST_OBJS)

test: $(NAME) $(TEST_LIB)
	@echo "Compiling tests executable $(EXEC)... 🔍"
	@$(CC) $(CFLAGS) ./objs/tests/main.o -L. -ltests -L. -lft -o $(EXEC)
	@./$(EXEC)
clean:
	@echo "Removing object files... 🧹"
	@$(RM) -r $(OBJ_DIR)
	@echo "Object files removed. ✅"

fclean: clean
	@echo "Removing libraries and executable... 🗑️"
	@$(RM) $(NAME) $(TEST_LIB) $(EXEC)
	@echo "Cleanup complete. ✅"

re: fclean all
	@echo "Full recompilation complete. 🎉"

.PHONY: all fclean clean re test
	
