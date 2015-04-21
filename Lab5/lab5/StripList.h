#ifndef _STRIPLIST_H_
#	define _STRIPLIST_H_
#include <iostream>
#include "Resistor.h"
#include"Strip.h"
using namespace std;

class StripList {
private:
  Strip *head;

public:
   StripList ();
   ~StripList ();
   bool insert (double _resistance,char*_name,int LStrip,int RStrip);
   void print();
};

#endif
