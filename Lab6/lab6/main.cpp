//Christian Sangle
//ECE244 Lab 6: Trees
//998158425
//Trees they have leaves and have wood.

    #include "Driver.h"
    #include<iostream>
    #include<cstdlib>
    #include<string>
    #include"DBentry.h"
    #include"treeDB.h"
    #include"treeNode.h"

using namespace std;
DB test;
DBentry *node;
bool check;
int main ()
    {
        process_input();
        return(0);
    }

void handle_new()
{
    string key;
    string data;

    cin>>key;
    cin>>data;
    node=new DBentry();

    node->setKey(&key);
    node->setData(&data);

    //cout<<"THIS IS DATA!"<<*node->getData()<<endl;
    check=test.insert(node);

    if(check)
    {
        cout<<"Inserting is successful"<<endl;
    }
    else
    {
        cout<<"Inserting is not successful"<<endl;
    }

}
void handle_find()
{
    string lookUp;
    cin>>lookUp;
    bool isFound;
    isFound=test.find(&lookUp,*&node);
    if(isFound)
    {
        cout<<lookUp<<" has been found"<<endl;
    }
    else
    {
        cout<<lookUp<<" has not been found"<<endl;
    }
}

void handle_delete()
{
    string key;
    cin>>key;
    bool isDeleted;

    isDeleted=test.remove(&key);

    if(isDeleted)
    {
        cout<<key<<" has been deleted."<<endl;
    }

    else
    {
        cout<<key<<" could not be found."<<endl;
    }
}
void handle_printall()
{
    test.printall();

}
void handle_printprobes()
{
    string lookUp;
    cin>>lookUp;
    bool isFound;
    isFound=test.find(&lookUp,*&node);

    if(isFound)
    {
      test.printProbes();
    }
    else
    {
        cout<<"Could not be found"<<endl;
    }
}

void handle_clear()
{
    cout<<"For the breakpoint"<<endl;
    test.clear();
}
