#define MAX_RESISTOR_NAME_LEN 50
#include<iostream>
#include<sstream>
      bool            setLStrip (int leftStrip);
      bool            setRStrip (int rightStrip);

      int             getRstrip () const  {return (rightStrip); }
      int             getLstrip () const { return (leftStrip); }
      double          getResistance () const { return (resistance); }
      char*           getName () const { return (name); }
