
# -----------------------------------------------------------------------------------
#
#	Makefile
#	ECE 244: Lab #2
#
#	Please complete the missing information (denoted by "[...]") in this file.
#
# -----------------------------------------------------------------------------------

lab2: main.o printFunctions.o
	g++ main.o printFunctions.o -o lab2

main.o: main.cpp main.h printFunctions.cpp printFunctions.h
	g++ -c main.cpp

printFunctions.o: printFunctions.cpp printFunctions.h
	g++ -c printFunctions.cpp

submit:
	submitece244f 2 Makefile main.cpp main.h printFunctions.cpp printFunctions.h


# === This will remove all of the Makefile-generated files from your directory
# === when you run "make clean"

clean:
	rm lab2
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
