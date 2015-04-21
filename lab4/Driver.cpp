//Christian Sangle
//ECE244 Lab 3: Resistors
//998158425

    #include "Driver.h"
    #include "Resistor.h"
    #include "Strip.h"
    #include<iostream>
    #include<cstdlib>
    #include<cstring>
    using namespace std;
    int process_input()
    {
       char command[100];
       void driver (char *len);
         for (cin >> command; !cin.eof(); cin >> command)
        {
           char*in_val=new char[100];
           driver(command);
        }
     return 0;
    }

    void driver(char *command)
    {
        if (!strcmp(command, "insert"))
          handle_insert();
        else if(!strcmp(command,"print"))
          handle_print();
        else {
          cout << "Error: unknown command." << endl;
          cin.ignore(1000, '\n');
             }

    }
