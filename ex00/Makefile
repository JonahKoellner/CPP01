# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/08 09:50:40 by jkollner          #+#    #+#              #
#    Updated: 2023/09/18 10:49:17 by jkollner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = Zombie
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = Main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
obj = ${src:.cpp=.o}

all: ${name}

${name}: ${obj}
	${cc} ${cflags} ${obj} -o ${name}

%.o: %.cpp
	$(cc) $(cflags) $< -c -o $@

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${name}

re:	fclean all

.PHONY: all re clean fclean
