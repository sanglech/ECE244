#define MAX_LEN 200
#define MAX_EMPLEN 5
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

// ONE BIG FUNCTIONS THAT CHECKS AL LERRORS WITH THE WHILE END OF FILE
// FUNCTION CALL BEFORE STUFF
void handle_new()
{
	char buf[100] ;
	int templen=0;
	while( !cin.eof()) 
          {
	    cin >> buf ;
	    bool check_neg();
            bool check_size();
	    bool check_noletters();

	if(check_neg== false||check_size==false||check_noletters==false)
	   {
		break;
           }
	else if(strlen(buf)<MAX_EMPLEN&&strlen(buf))
	       {
	         templen=MAX_EMPLEN-strlen(buf);
	         cout<<"New: ";
	         for(int i=0;i<templen;i++)
	              {
		        cout<<"0";
	              }
	         cout<<buf<<endl;
		 break;
	       }

	    else
	      {
	       cout<<"New: "<<buf<<endl;
	       break;                                            
	      }
          }
}	
void handle_locate()
{
/*char buf[100] ;
	bool check=false;
	int templen=0;
	while( !cin.eof()||check!=true ) 
          {
	    cin >> buf ;
	    if(strlen(buf)>MAX_EMPLEN)
	       {
	         cout<<"Error: "<<buf<<" is too large."<<endl;
               }
	    else if(strlen(buf)<MAX_EMPLEN)
	       {
	         templen=MAX_EMPLEN-strlen(buf);
	         cout<<"Locate: ";
	         for(int i=0;i<templen;i++)
	              {
		        cout<<"0";
	              }
	         cout<<buf<<endl;
	       }
	    else
	      {
	       cout<<"New: "<<buf<<endl;
	      }
	       check=true;
          }*/

}

void handle_updatename()
{

}
void handle_updatediv()
{

}
void handle_delete()
{

}
void handle_printall()
{

}
void handle_deleteall()
{

}

void driver(char *command)
{ 
	if (!strcmp(command, "new"))
	  handle_new();
	else if (!strcmp(command, "locate"))
	  handle_locate();
	else if(!strcmp(command,"updatename"))
	  handle_updatename();
	else if(!strcmp(command,"updatedivision"))
	  handle_updatediv();
	else if(!strcmp(command,"delete"))
	  handle_delete();
	else if(!strcmp(command,"printall"))
	  cout<<"Printall"<<endl;
	else if(!strcmp(command,"deleteall"))
	  cout<<"Deleteall"<<endl;
	else {
	  cout << "Error: unknown command." << endl;
	  cin.ignore(1000, '\n');
	     }

}
int process_input()
{
   char command[MAX_LEN];
   void driver (char *len);
     for (cin >> command; !cin.eof(); cin >> command) 
	{
	   driver(command);
	}
 return 0;
}

int check_neg()
{
	char *c;
	    if(c[0]=='-')
	       {
                 cout<<"Error: "<<c<<" is negative."<<endl;
	         return false;
	       }
	    else
		{
                  return true;
		}
}

int check_size()
{
	char *c;
  	
	    if(strlen(c)>MAX_EMPLEN)
	       {
	         cout<<"Error: "<<c<<" is too large."<<endl;
	         return false;
               }
  	    else
		{
                  return true;
		}
}

int check_noletters()
{
char *c;
    bool check=false;
    for(int i=0; i<strlen(c)&&check!=true;i++)
	{
    	  if(c[i]<'0'||c[i]>'9')
	       {
		  check=true;
               }
	}
    if(check==true)
	{
	  return false;
	}
    else
	{
          return true;
	}
}

int main (int argc, char * argv[])
{
	process_input();
	return(0);
}

