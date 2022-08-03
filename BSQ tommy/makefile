LIBF		=lib
SRCF		=src
OBJF		=obj

SRCS		= $(wildcard lib/*.c src/*.c)

#OBJS		= $(shell basename $(SRCS:.c=.o) | awk '{print "obj/"$1}')
OBJS		= ${SRCS:.c=.o}

NAME		= BSQ.exe

CC			= gcc
RM			= rm -rf

CFLAGS		= -Wall -Werror -Wextra

.c.o:
			@echo "Making prerequis"
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@echo "Making the program"
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			@clear
			@echo "Regular cleaning"
			${RM} ${OBJS}

fclean:		clean
			@clear
			@echo "Enforce cleaning"
			${RM} ${NAME}
			${RM} src/*.exe
			${RM} src/*.dSYM

re:
			@echo "Re build the project"
			fclean all

norm:
			@clear
			@echo "Looking for some norm"
			@norminette src
			@norminette lib/*.c
			@norminette -R CheckDefine lib/*.h

.PHONY:		all clean fclean re