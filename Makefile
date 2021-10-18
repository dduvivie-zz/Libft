CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror
TARGET		= libft.a
SRCS		= main.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c
OBJS 		= $(SRCS:.c=.o)

all:		$(TARGET)

$(TARGET):	$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

clean:
	-rm -f *.o