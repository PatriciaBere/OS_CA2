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
	#prints last 10 lines from the access.log file
	tail -10 access.log

run-task-2:
	#cat to access the access.log file then
	#cut separates the IP addresses using fields -f separated by a -d delimiter
	#uniq then filters out repeated lines in the file and deletes them
	cat access.log | cut -d ' ' -f 1 | uniq

run-task-3:
	#sort rearranges the access.log file then
    #grep searches for the requests -w that contain 404
    #cut then extracts only the REQUEST part using fields -f separated by the -d delimiter
	sort access.log | grep 404 -w | cut -f 2 -d '"'

run-task-4:
	#small program

run-task-5:
	#small program