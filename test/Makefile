SRCS				= ../src/get_next_line_bonus.c \
 						../src/get_next_line_utils_bonus.c

TEST_HEADERS		= $(shell find ./ -type f -name "*.h")

TEST_SOURCES		= $(shell find ./ -type f -name "*.c")

MAIN				= test_main.c

NAME				= test_executable.o

CC					= gcc -lbsd -ggdb

RM					= rm -f

ICRITERION			= -L../criterion-v2.3.3/lib -I../criterion-v2.3.3/include -lcriterion -Wl,-rpath=../criterion-v2.3.3/lib

ILIBFT				= libft.a

CFLAGS				= -Wall -Wextra -Werror

${NAME}:			$(TARGET_NAME) $(SRCS) $(TEST_HEADERS) $(TEST_SOURCES)
					${CC} ${CFLAGS} -o $(NAME) $(SRCS) $(TEST_SOURCES) $(ICRITERION) $(ILIBFT)

# defines "own_source", which allows for including tests specific to your code with #ifndef
test_own:			$(TARGET_NAME) $(SRCS) $(TEST_HEADERS) $(TEST_SOURCES)
					${CC} ${CFLAGS} -D own_source -o $(NAME) $(SRCS) $(TEST_SOURCES) $(ICRITERION) $(ILIBFT)

no_flags:			$(TARGET_NAME) $(SRCS) $(TEST_HEADERS) $(TEST_SOURCES)
					${CC} -D own_source -o $(NAME) $(SRCS) $(TEST_SOURCES) $(ICRITERION) $(ILIBFT)

all:				${NAME}

fclean:
					${RM} ${NAME}

re:					fclean all

re_no_flags: 		fclean compile_with_no_flags

run: 				re
	@./$(NAME)

run_no_flags: 		re_no_flags
	@./$(NAME)


