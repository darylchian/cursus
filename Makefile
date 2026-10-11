# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchian <tchian@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/04 13:23:28 by tchian            #+#    #+#              #
#    Updated: 2026/10/11 21:08:26 by tchian           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Archiver and Flags (The Linking Engine)
AR = ar
ARFLAGS = rcs

# Cleanup Command
RM = rm -f

# Source Files
SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

# Object Files Translation
OBJS = $(SRCS:.c=.o)

# Default Rule
all: $(NAME)

# Linking Rule: Bundles .o files into libft.a
$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# Implicit rule to compile .c files into .o files
%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $< -o $@

# Cleanup Rules
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Protect rule names from matching actual files
.PHONY: all clean fclean re
