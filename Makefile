build:
	gcc -o dwarfland fisier.c -Wall

.PHONY: clean
clean:
	rm -f dwarfland *~
