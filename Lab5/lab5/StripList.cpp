#include "StripList.h"
#include"Strip.h"
#include"ResistorList.h"

using namespace std;
ResistorList res;

StripList::StripList ()
{
   head = NULL;
}

bool StripList::insert (double _resistance,char*_name,int LStrip,int RStrip)
{
   Strip *curr, *prev, *new_strip;
   prev = NULL;
   curr = head;
   while (curr != NULL && LStrip > curr->get_Number () ) {
      prev = curr;
      curr = curr->get_Next ();
   }
      // Whether we hit the end of the list, or key < curr->key, we want to insert the node after prev
   // and before curr.
   new_strip = new Strip (LStrip,curr);
   if (prev != NULL)
      prev->set_Next (new_strip);
   else
      head = new_strip;
      res.insert(_resistance,_name,LStrip,RStrip);


      return true;
}
StripList::~StripList()
{

}

void StripList::print()
{
    cout<<"I made it!"<<endl;
    Strip *ptr;
    ptr=head;

    while(ptr!=NULL)
    {
       cout<<ptr->get_Number()<<endl;
       ptr=ptr->get_Next();
    }
    //res.print();
}
