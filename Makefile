#Directories
SRC_DIR = $(shell pwd)
OBJ_DIR = $(shell pwd)/objs/
TEST_DIR = $(shell pwd)/tests/
INCLUDES = $(shell pwd)

# Files
TEST_FILES = $(wildcard $(TEST_DIR)*.c)
SRC_FILES =	ft_atoi.c	ft_memcpy.c \
      		ft_memchr.c	ft_strrchr.c \
		ft_strdup.c	ft_striteri.c \
		ft_substr.c	ft_bzero.c \
		ft_memmove.c	ft_strjoin.c \
		ft_tolower.c	ft_calloc.c \
		ft_memset.c	ft_strlcat.c \
		ft_toupper.c	ft_isalnum.c \
		ft_putchar_fd.c ft_strlcpy.c \
		ft_isalpha.c	ft_putendl_fd.c \
		ft_strlen.c	ft_isascii.c \
		ft_putnbr_fd.c	ft_strmapi.c \
		ft_isdigit.c	ft_putstr_fd.c \
		ft_strncmp.c	ft_isprint.c \
		ft_split.c	ft_strnstr.c \
		ft_itoa.c	ft_memcmp.c \
		ft_strchr.c	ft_strtrim.c

SRC_BONUS =	ft_lstnew_bonus.c	ft_lstadd_front_bonus.c \
		ft_lstlast_bonus.c	ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c	ft_lstsize_bonus.c \
		ft_lstmap_bonus.c	ft_lstiter_bonus.c \
		ft_lstadd_back_bonus.c

# Convertimos las fuentes en objetos
OBJS = $(patsubst %.c, $(OBJ_DIR)srcs/%.o, $(SRC_FILES))
BOBJS = $(patsubst %_bonus.c, $(OBJ_DIR)srcs/%_bonus.o, $(SRC_BONUS))

OBJS := $(filter-out $(BOBJS), $(OBJS))

TEST_SRCS = $(TEST_FILES)
TEST_OBJS = $(TEST_FILES:$(TEST_DIR)%.c=$(OBJ_DIR)tests/%.o)

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDES) -I$(TEST_DIR)
AR = ar rcs
RM = rm -f

# Targets
NAME = libft.a
TEST_LIB = libtests.a
EXEC = test_libft

# Rules
all: $(NAME)

bonus: $(NAME)_bonus

$(NAME): $(OBJS)
	@echo "Creating static library ${NAME}... 📚"
	@$(AR) $(NAME) $(OBJS)
	@echo "Library ${NAME} created successfully. ✅"

$(NAME)_bonus: $(OBJS) $(BOBJS)
	@echo "Adding bonus to static library $(NAME)... 📚"
	@$(AR) $(NAME) $(OBJS) $(BOBJS)
	@echo "Bonus added to $(NAME) successfully. ✅"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)srcs/
	@mkdir -p $(OBJ_DIR)tests/

$(OBJ_DIR)srcs/%.o: %.c libft.h | $(OBJ_DIR)
	@echo "Compiling $<... 🛠️"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)srcs/%_bonus.o: %_bonus.c libft.h | $(OBJ_DIR)
	@echo "Compiling bonus $<... 🛠️"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)tests/%.o: $(TEST_DIR)%.c | $(OBJ_DIR)
	@echo "Compiling test $<... 🛠️"
	@$(CC) $(CFLAGS) -c $< -o $@

$(TEST_LIB): $(TEST_OBJS)
	@echo "Creating test library $(TEST_LIB)... 🧪"
	@$(AR) $(TEST_LIB) $(TEST_OBJS)

test: $(NAME) $(TEST_LIB)
	@echo "Compiling tests executable $(EXEC)... 🔍"
	@$(CC) $(CFLAGS) ./objs/tests/main.o -L$(TEST_DIR) -ltests -L. -lft -o $(EXEC)
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

.PHONY: all bonus fclean clean re test
	
