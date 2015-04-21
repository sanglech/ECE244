#include "Resistorlist.h"
#include"Resistor.h"
#include<iostream>

ResistorList::ResistorList ()
{
   head = NULL;
}

void ResistorList::insert (double _resistance,char*_name,int LStrip,int RStrip)
{
   Resistor *curr, *prev, *new_resistor;
   prev = NULL;
   curr = head;
   while (curr != NULL && LStrip > curr->get_LStrip () ) {
      prev = curr;
      curr = curr->get_Next ();
   }

   // Whether we hit the end of the list, or key < curr->key, we want to insert the node after prev
   // and before curr.
   new_resistor = new Resistor (_resistance,_name,LStrip,RStrip,curr);
   if (prev != NULL)
      prev->set_next (new_resistor);
   else
      head = new_resistor;
}

void ResistorList::print()
{
    cout<<"I made it!"<<endl;
    Resistor *ptr;
    ptr=head;

    while(ptr!=NULL)
    {
       cout<<ptr->get_Resistance()<<endl;
       ptr=ptr->get_Next();
    }
}

ResistorList::~ResistorList()
{

}
