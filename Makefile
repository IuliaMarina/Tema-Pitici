all:
	gcc -o pitici.exe fisier.c -Wall

.PHONY: clean
clean:
	rm -f pitici.exe *~ 
