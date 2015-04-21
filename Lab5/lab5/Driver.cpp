//Christian Sangle
//ECE244 Lab 5: Resistors
//998158425

    #include "Driver.h"
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

