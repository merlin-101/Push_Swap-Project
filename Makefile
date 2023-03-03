# Name of the program

NAME = push_swap

#all the main functions - searches for all files ending in *.c from the folder

SOURCES = $(wildcard srcs/Libft/*.c) $(wildcard srcs/Libft/ft_printf/*.c) $(wildcard srcs/mainers/*.c)

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

# The main part of the compilation |
#                                  v

all: $(NAME)

# Making sure that the file exists and compile it

%.o: %.c
	@echo "Compiling $<"
	@ $(CC) $(CFLAGS) -c $< -o $@

# Defining the rule to create object files

$(NAME): $(OBJECTS)
	@echo "Compiling $@"
	@ $(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

# garbage disposable |
#                    v

clean:
	@echo "Deleting the object files..."
	@rm -f $(OBJECTS)
	@echo "Deletion completed."

fclean:
	@echo "Deleting the object files and the executable..."
	@rm -f $(OBJECTS) $(NAME)
	@echo "Deletion completed."

re: fclean all

.PHONY: all, clean, fclean, re, bonus