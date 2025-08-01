NAME = libft.a

SOURCES = ft_atoi.c\
		  ft_bzero.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memcpy.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_strchr.c\
		  ft_strlcat.c\
		  ft_strlcpy.c\
		  ft_strlen.c\
		  ft_strncmp.c\
		  ft_strnstr.c\
		  ft_strrchr.c\
		  ft_tolower.c\
		  ft_toupper.c\
		  ft_calloc.c\
		  ft_strdup.c\
		  ft_substr.c\
		  ft_strjoin.c\
		  ft_itoa.c\
		  ft_split.c\
		  ft_strmapi.c\
		  ft_striteri.c\
		  ft_strtrim.c\
		  ft_putchar_fd.c\
		  ft_putstr_fd.c\
		  ft_putendl_fd.c\
		  ft_putnbr_fd.c\
		 
SOURCES_BONUS = ft_lstadd_front.c\
				ft_lstnew.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\

OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = gcc $(FLAGS)

all: $(NAME)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)
fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

$(NAME): $(SOURCES) $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

bonus : $(SOURCES_BONUS) $(OBJECTS_BONUS)
	ar rc $(NAME) $(OBJECTS_BONUS)
