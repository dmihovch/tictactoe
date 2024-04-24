vim:
	nvim main.c logic.c funcs.h

run: tictactoe
	./tictactoe
all:
	gcc main.c logic.c -o tictactoe
clean:
	rm tictactoe
