# Name of the program

NAME = push_swap
#--------------------------------------------------------------------------
# Linking the makefile of the Libft to this one and creating its protocol

Libft_Directory = srcs/Libft
Libft = $(Libft_Directory)/libft.a
Libft_MAKE = $(MAKE) -sC $(Libft_Directory)
#--------------------------------------------------------------------------

#all the main functions - searches for all files ending in *.c from the folder

SOURCES = $(wildcard srcs/mainers/*.c)

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

#main makefile linking command
LDF_FLAGS = -L$(Libft_Directory) -lft

# The main part of the compilation |
#                                  v

all: $(NAME)

#extra maker for libft, just in case, "s" is for the silent protocol
$(Libft):
	@ $(MAKE) -sC $(Libft_Directory) 

# Making sure that the file exists and compile it

%.o: %.c
	@echo "Compiling $<"
	@ $(CC) $(CFLAGS) -c $< -o $@

# Defining the rule to create object files for both Libft library and Push_swap

$(NAME): $(Libft) $(OBJECTS)
	@echo "Compiling $@"
	@ $(CC) $(CFlags) $(OBJECTS) $(Libft) -o $@

# garbage disposable |
#                    v
clean:
	@echo "Deleting the files..."
	@ $(Libft_MAKE) clean
	@rm -f $(OBJECTS)

fclean:
	@echo "Deleting the extra main files..."
	@ $(Libft_MAKE) fclean
	@rm -f $(OBJECTS) $(NAME)
	@echo "General deletion completed."

re: fclean all

.PHONY: all, clean, fclean, re, bonus, libft