build:
	gcc -o dwarfland fisier.c -Wall -lm

.PHONY: clean
clean:
	rm -f dwarfland *~
