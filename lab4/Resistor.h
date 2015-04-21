#define MAX_RESISTOR_NAME_LEN 50
#include<iostream>
#include<sstream>class Resistor {  private:      double          resistance; // resistance (in Ohms)      char*           name;       // a C-style string      int             leftStrip;      int             rightStrip;      public:      Resistor ();      ~Resistor ();      bool            set_name (char* _name);      bool            set_resistance (double _resistance);
      bool            setLStrip (int leftStrip);
      bool            setRStrip (int rightStrip);

      int             getRstrip () const  {return (rightStrip); }
      int             getLstrip () const { return (leftStrip); }
      double          getResistance () const { return (resistance); }
      char*           getName () const { return (name); }
      void            print ();};
