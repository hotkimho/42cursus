TARGET = span

CC = g++
CFLANG = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		Span.cpp
		

OBJS = $(SRCS:.cpp=.o)


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re