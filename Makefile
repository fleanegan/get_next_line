SRCS				= ./src/get_next_line_bonus.c \
 						./src/get_next_line_utils_bonus.c

ICRITERION			= -L./criterion-v2.3.3/lib -I./criterion-v2.3.3/include -lcriterion -Wl,-rpath=./criterion-v2.3.3/lib

ILIBFT				= ./test/libft.a

alibi:			$(TARGET_NAME) $(SRCS) $(TEST_HEADERS) $(TEST_SOURCES)
					@echo TEST ${CC} ${CFLAGS} -o $(NAME) $(SRCS) $(TEST_SOURCES) $(ICRITERION) $(ILIBFT)

run_tests:
			$(MAKE) -C 	./test/ run

run_tests_compile_no_flags:
			$(MAKE) -C 	./test/ run_no_flags

re:
			$(MAKE) -C 	./test/ re

fclean:
			$(MAKE) -C 	./test/ fclean

all:
			$(MAKE) -C 	./test/ all

own_tests:
			$(MAKE) -C 	./test/ test_own

no_flags:
			$(MAKE) -C 	./test/ no_flags
