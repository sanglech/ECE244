//Christian Sangle
//ECE244 Lab 5: Resistors
//998158425

    #include "Driver.h"
    #include "Resistor.h"
    #include "Strip.h"
    #include "StripList.h"
    #include<iostream>
    #include<cstdlib>
    #include<cstring>

using namespace std;

StripList strlist;
int main ()
    {
        process_input();
        return(0);
    }

void handle_insert()
{
  int left_strip,right_strip;
  int temp=0;
  double value;
  char res_name[MAX_RESISTOR_NAME_LEN];
  bool check_add=false;

  cin>> value;
  if(cin.fail()||value<0)                                            //Must pass all tests in order for it to add to  the
  {
      cin.clear();
      cin.ignore(1000,'\n');
      cout<<"Error: argument is not a valid number."<<endl;
      }

      else
      {
          cin>>left_strip;
          if(cin.fail()||left_strip<0)
          {
              cin.clear();
              cin.ignore(1000,'\n');
              cout<<"Error: argument is not a valid number."<<endl;
              }
              else
              {
                  cin>>right_strip;
                  if(cin.fail()||right_strip<0||(left_strip==right_strip&&right_strip<=10))
                  {
                      cin.clear();
                      cin.ignore(1000,'\n');
                      cout<<"Error: argument is not a valid number."<<endl;
                      }
                      else
                      {
                          cin>>res_name;
                                if(left_strip>right_strip)                        // If the left strip is larger then right strip swap the values.
                                   {
                                       temp=left_strip;
                                       left_strip=right_strip;
                                       right_strip=temp;
                                   }
                                 check_add=strlist.insert(value,res_name,left_strip,right_strip);// EVERYTHING IS ALRIGHT ADD THE RESISTOR
                                  if(check_add)
                                  {
                                    cout<<"insert: success."<<endl;
                                  }
                    }
            }
    }
}

void handle_print()
{
    char temp[100];
    cin>>temp;
    if(!strcmp(temp,"all"))
    {
      strlist.print();
    }
}
