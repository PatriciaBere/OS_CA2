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
	#egrep finds & prints any line that matches this regex in colours.txt
	#the regex is to match any # followed by a 6 or 8 hexadecimal
	egrep '^#[[:xdigit:]]{6}$|^#[[:xdigit:]]{8}$' colours.txt

run-task-2:
	#same as in task 1 except to extract the green value from the valid codes then
	#cut removes only the specified characters using -c (4-5) 
	#using paste it then prints the green value into the terminal separated by commas
	egrep '^#[[:xdigit:]]{6}$|^#[[:xdigit:]]{8}$' colours.txt | cut -c 4-5 | paste -s -d ','-

run-task-3:
	#same as task 1 egrep the valid colour codes then 
	#use c custom program to convert the codes from hex to rgb(000,000,000,00) then
	#use sort alpha value -n to sort in ascending order