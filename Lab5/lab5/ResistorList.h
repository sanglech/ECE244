#ifndef RESISTORLIST_H
#define RESISTORLIST_H

#include <iostream>
#include "Resistor.h"
using namespace std;

class ResistorList {
private:
  Resistor *head;

public:
   ResistorList ();
   ~ResistorList ();
   void insert (double _resistance,char*_name,int LStrip,int RStrip);
   void print();
};

#endif

