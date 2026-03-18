CC = cc

NAME = push_swap

SRC_FT_LIBFT = LIBFT/libft.a

SRC_FT_PRINTF = LIBFTPRINTF/libftprintf.a

SRC_PUSHSWAP = ft_utils.c main.c ft_sa_sb_ss_sort.c ft_ra_rb_rr_sort.c ft_rra_rrb_rrr.c ft_pa_pb.c ft_computer_desorder.c \
				ft_simple.c

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC_PUSHSWAP:.c=.o}

RED     := \033[31m
GREEN   := \033[32m
RESET   := \033[0m
BOLD    := \033[1m
PINK 	:= \033[35m

all: ${NAME}

${NAME}: ${OBJ} ${SRC_FT_LIBFT} ${SRC_FT_PRINTF}
	@echo "Compiled with $(GREEN)$(BOLD)$(CFLAGS)$(RESET)"
	${CC} ${SRC_PUSHSWAP} ${SRC_FT_LIBFT} ${SRC_FT_PRINTF} ${CFLAGS} -o ${NAME} -lm
	@echo "$(PINK)$(BOLD)----------------------------------------"
	@echo "     $(NAME) = NOW READY FOR USE!✅"
	@echo "----------------------------------------$(RESET)"

$(SRC_FT_LIBFT):
	make -C LIBFT

$(SRC_FT_PRINTF):
	make -C LIBFTPRINTF

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C LIBFT
	make clean -C LIBFTPRINTF
	rm -f ${OBJ}
	@echo "${BLUE} ${BOLD} ${OBJ} ${RESET} .o Cleaned ✅"

fclean: clean
	make fclean -C LIBFT
	make fclean -C LIBFTPRINTF
	rm -f ${NAME}
	@echo "$(BLUE) $(BOLD)$(NAME) $(RESET) Clean ✅"

re: fclean all

.PHONY: fclean clean re all