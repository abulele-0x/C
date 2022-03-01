# What is Make? 

Make helps you keep your build up to date, without requiring that everything be compiled again, just what's needed.

There's the target file, the dependencies and the recipe. Yes, you can do all this by hand when you update some file, but it's not practical
when your project gets big enough.

Example:
Wanna compile just the encrypting function, that's on encrypt.c. This will generate the encrypt.o file.

target: dependencies
(tab)recipe

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c

main.o: encrypt.c main.c encrypt.h
	gcc -c main.c

encryptermaster: encrypt.o main.o
	gcc main.o encrypt.o -o encryptermaster

When I do "make encryptermaster", make will check if main.o and encrypt.o are up to date first. If they're not, it'll make them again and
just then, it'll build the final 'encryptermaster' executable.

More about it: tinyurl.com/yczmjx
