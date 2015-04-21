
# -----------------------------------------------------------------------------------
#
#	Makefile
#	ECE 244: Lab #6
#
#	Please complete the missing information (denoted by "[...]") in this file.
#
# -----------------------------------------------------------------------------------

lab6: main.o Driver.o treeNode.o treeDB.o DBentry.o 
	g++ -g main.o Driver.o treeNode.o treeDB.o DBentry.o -o lab6

main.o: main.cpp Driver.h Driver.cpp 
	g++ -c -g main.cpp

Driver.o:Driver.h Driver.cpp
	g++ -c -g Driver.cpp

DBentry.o: DBentry.cc DBentry.h
	g++ -c -g DBentry.cc

treeNode.o: treeNode.h treeNode.cc DBentry.h DBentry.cc
	g++ -c -g treeNode.cc

treeDB.o: treeDB.cc treeDB.h treeNode.h treeNode.cc DBentry.cc DBentry.h
	g++ -c -g treeDB.cc

submit:
	submitece244f 6 main.cpp Resistor.cpp Resistor.h Strip.cpp Strip.h Makefile Driver.cpp Driver.h StripList.h StripList.cpp ResistorList.cpp ResistorList.h


# === This will remove all of the Makefile-generated files from your directory
# === when you run "make clean"

clean:
	rm lab6
	find *.o -exec rm '{}' ';'


# === This will create a backup of your Makefile, C++ source files (.cpp) and your
# === header files (.h) when you run "make backup".  If you need to recover a file
# === later (i.e., if you delete something by accident), type:
# ===      unzip [zip_file] [file_to_recover]
# === for example:
# ===      unzip backup-20090923-1024.zip Makefile

backup:
	set BACKUP_FILENAME=`date "+backup-%Y%m%d-%H%M.zip"`
	echo Backing up your files into ${BACKUP_FILENAME}
	zip ${BACKUP_FILENAME} *.cpp *.h Makefile
