TARGET = megaphone

CC = clang++
CFLANG = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)
SRCS = megaphone.cpp

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAG) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re