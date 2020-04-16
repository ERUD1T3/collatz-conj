test: 
	gcc -ggdb -o ./bin/cc ./c_files/collatz.c

runt: test
	./bin/cc