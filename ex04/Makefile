# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 13:05:24 by jkollner          #+#    #+#              #
#    Updated: 2023/09/16 10:32:39 by jonahkollne      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = sifl
cc = c++
cflags = -Wall -Werror -Wextra -std=c++98
src = main.cpp
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

