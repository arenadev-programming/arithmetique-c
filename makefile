all:
	gcc main.c src/calculateur.c src/affichage.c -o calculateur.exe
	./calculateur.exe