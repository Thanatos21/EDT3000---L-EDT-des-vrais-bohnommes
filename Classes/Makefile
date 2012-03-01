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
OBJ = salle.o salle_cm.o salle_td.o salle_tp.o module.o personne.o etudiant.o enseignant.o groupe.o creneau.o main.o


################################################################
# Commandes de compilation
################################################################

all: $(OBJ) main

# Edition de liens
main: $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o main

personne.o: personne.h personne.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c personne.cpp

etudiant.o: etudiant.h etudiant.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c etudiant.cpp

enseignant.o: enseignant.h enseignant.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c enseignant.cpp

creneau.o: creneau.h creneau.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c creneau.cpp

salle.o: salle.h salle.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle.cpp

salle_cm.o: salle_cm.h salle_cm.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_cm.cpp

salle_tp.o: salle_tp.h salle_tp.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_tp.cpp

salle_td.o: salle_td.h salle_td.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c salle_td.cpp

module.o: module.h module.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c module.cpp

groupe.o: groupe.h groupe.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c groupe.cpp

main.o: personne.h groupe.h main.cpp
	$(CPP) $(CFLAGS) $(INCLUDE) -c main.cpp

clean:
	rm -f *.o main