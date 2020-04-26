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
	cat access.log | tail -10

run-task-2:
	sort access.log | grep -Eo '^[^ ]+' access.log | uniq

run-task-3:
	sort access.log | grep 404 -w | cut -f 2 -d '"'

run-task-4:
	#small program

run-task-5:
	#small program