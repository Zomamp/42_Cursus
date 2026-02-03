NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC =  ft_atoi.c ft_strlen.c ft_strrchr.c ft_strlcat.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c ft_strjoin.c ft_substr.c \
	ft_strtrim.c ft_calloc.c ft_split.c
	
OBJ = ${SRC:.c=.o}

########################################

all : ${NAME}

########################################

${NAME}: ${OBJ}
	$(AR) ${NAME} ${OBJ}
	@echo "Library created successfully"

########################################

%.o:%.c
	$(CC) ${CFLAGS} -c $<

########################################

clean: 
	rm -f $(OBJ)

########################################

fclean: clean
	rm ${NAME}

########################################

re: fclean all

########################################

c: 
	cc main.c $(NAME)

########################################

val: 
	cc main.c $(NAME) && valgrind ./a.out

########################################

.PHONY: all fclean 

########################################
