##
## EPITECH PROJECT, 2025
## Day 12, task01
## File description:
## No file there, just an epitech header example .
## You can even have multiple lines if you want !
##

all:
	make -C ./lib/my/
clean:
	make -C ./lib/my/ clean
fclean:
	make -C ./lib/my/ fclean
re:
	make -C ./lib/my/ re
build:	re
	epiclang main.c -I./include/ -L./ -lmy -g3
