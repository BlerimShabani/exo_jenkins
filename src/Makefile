
MY_COMPILER = gcc


all: main.o messages.o args.o
	$(MY_COMPILER) -o main main.o messages.o args.o

main.o: src/main.c src/args.h src/colors.h
	$(MY_COMPILER) -c src/main.c -o main.o


message.o: src/messages.c src/messages.h src/colors.h
	$(MY_COMPILER) -c src/messages.c -o messages.o

args.o: src/args.c src/args.h src/messages.h src/colors.h
	$(MY_COMPILER) -c src/args.c -o args.o


math_functions.o: src/math_function.c src/math_function.h
	$(MY_COMPILER) -c src/math_function.c -o math_function.o

test: test/main.c math_function.o 
	$(MY_COMPILER) -c test/main.c -o test/main.o
	$(MY_COMPILER) -c main_test main_test.o math_function
	./main_test


clean:
	rm -rf *.o

