//Christian Sangle
//ECE244 Lab 5: Resistors
//998158425

    #include "Driver.h"
    #include<iostream>
    #include<cstdlib>
    #include<string>
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
        string str1("new");
        string str2("find");
        string str3("delete");
        string str4("printall");
        string str5("printprobes");
        string str6("deleteall");
        if (str1.compare(command)==0)
          handle_new();
        else if (str2.compare(command)==0)
          handle_find();
        else if (str3.compare(command)==0)
          handle_delete();
        else if (str4.compare(command)==0)
          handle_printall();
        else if (str5.compare(command)==0)
          handle_printprobes();
        else if (str6.compare(command)==0)
          handle_clear();

        else {
          cout << "Error: unknown command." << endl;
          cin.ignore(1000, '\n');
             }

    }

