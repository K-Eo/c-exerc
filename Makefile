CC = gcc
FILES = e1 e2 e3 e4 e5 e6 e7 e8 e9 e10

%: %.c
	gcc -o "build/$@" $< -lm

build: create_build $(FILES)

create_build:
	mkdir -p build

clean:
	find . -type f -name "*.o" -delete
	rm -r build/
