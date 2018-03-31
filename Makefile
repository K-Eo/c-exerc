OBJECTS = $(patsubst src/%.c, %, $(wildcard src/*.c))

build: $(OBJECTS)

%: src/%.c
	gcc -o $@ $< -lm

clean:
	rm e*
