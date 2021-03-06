all: cstatic cdynamic cguided 

test: 
	gcc -ggdb -fopenmp -o ./bin/cc ./c_files/collatz.c

cstatic: 
	gcc -fopenmp -o ./bin/ccs ./c_files/collatzStatic.c

cdynamic:
	gcc -fopenmp -o ./bin/ccd ./c_files/collatzDynamic.c 

cguided:
	gcc -fopenmp -o ./bin/ccg ./c_files/collatzGuided.c 

runtest: test
	./bin/cc

runcStatic:
	./bin/ccs 2000

runcDynamic:
	./bin/ccd

runcGuided:
	./bin/ccg

