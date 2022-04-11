# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_tester.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 16:38:07 by ademurge          #+#    #+#              #
#    Updated: 2022/04/11 17:23:15 by ademurge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

git clone https://github.com/Tripouille/libftTester.git
git clone https://github.com/y3ll0w42/libft-war-machine.git

cd ..
git clone https://github.com/alelievr/libft-unit-test.git

cd libft-unit-test
make f

cd ../libft/libft-war-machine
./grademe.sh
./grademe.sh

cd ../libftTester
make a

cd ..
rm -rf libftTester libft-war-machine

cd ..
rm -rf libft-unit-test