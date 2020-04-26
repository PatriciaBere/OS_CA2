CC      = gcc
FLAGS   = -Wall -Wextra -Wpedantic
SOURCES = $(wildcard *.c) $(wildcard lib/*.c)
OBJECTS = $(patsubst %.c, build/%.o, ${SOURCES})

# This target is the final compile and depends on other targets
link: ${OBJECTS}
	${CC} $^ -o build/main

# This target compiles just main.cpp (creates an object file)
build/main.o: main.c
	${CC} -c ${FLAGS} $< -o $@

# This target compiles just lib/*.o (creates an object files)
build/lib/%.o: lib/%.c
	${CC} -c ${FLAGS} $< -o $@

# Remove all built files, and re-create the bin directory
clean:
	rm -rf ./build && mkdir -p build/lib

# Run the solution (FYI: we could make run dependent on link)
run:
	./build/main

run-task-1:
	#echo displays the sentence then
	#wc counts and prints the number of words in the line using -w
	echo "The quick brown fox jumps over the lazy dog\n" | wc -w
	
run-task-2:
	#displays the sentence then 
	#tr changes the lower case letters to uppercase using [:lower:][:upper:]
	echo "The quick brown fox jumps over the lazy dog\n" | tr [:lower:][:upper:]

run-task-3:
	#curl transfers the dkit html source code 
	#then saves it into the dkit html file
	curl https://www.dkit.ie > dkit.html

run-task-4:
	#cat dkit.html views the file
	#tail -1 outputs the last part of the file
	#tr then deletes < & > and replaces them with []
	#the output is then redirected to mangled.txt
	#the same is done for the first part of the file using head -1
	cat dkit.html | tail -1 | tr '<' [ | tr '>' ] > mangled.txt ; echo '' >> mangled.txt ; cat dkit.html | head -1 | tr '<' [ | tr '>' ] >> mangled.txt
	