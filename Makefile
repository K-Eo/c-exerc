OBJECTS = $(patsubst %.c, %, $(wildcard *.c))

build: create_build $(OBJECTS)

%: %.c
	gcc -o "build/$@" $< -lm

create_build:
	mkdir -p build

clean:
	find . -type f -name "*.o" -delete
	rm -r build/
