# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 09:50:40 by jkollner          #+#    #+#              #
#    Updated: 2023/09/12 13:14:12 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Zombie
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp Zombie.cpp zombieHorde.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

clean:
	rm ${obj}

fclean: clean
	rm ${name}

re:	fclean all

.PHONY: all ${name} clean fclean
