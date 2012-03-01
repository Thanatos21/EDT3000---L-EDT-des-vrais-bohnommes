################################################################
# Définition des variables
################################################################

# Compilateur
CPP = g++

# Options de compilation
CFLAGS = -Wall -pedantic -ansi

# Répertoire contenant des fichiers à inclure
INCLUDE = -I .


# Tous les fichiers objets dont dépend le programme exécutable
OBJ = salle.o salle_cm.o salle_td.o salle_tp.o main.o


################################################################
# Commandes de compilation
################################################################

all: $(OBJ) main

# Edition de liens
main: $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o main

salle.o: salle.h salle.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle.cpp

salle_cm.o: salle_cm.h salle_cm.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_cm.cpp
	
salle_td.o: salle_td.h salle_td.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_td.cpp

salle_tp.o: salle_tp.h salle_tp.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_tp.cpp

main.o: salle.h main.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c main.cpp

clean:
	rm -f *.o main
