#ifndef _Resistor_H_
#	define _Resistor_H_
#define MAX_RESISTOR_NAME_LEN 50
#define MAX_BUFF 100
#include<iostream>
#include<sstream>
#include<cstring>

class Resistor {
  private:
      double          resistance; // resistance (in Ohms)
      char*           name;       // a C-style string
      int             leftStrip;
      int             rightStrip;
      int             str_len;
      Resistor        *next;

  public:
      Resistor();
      Resistor(double _resistance, char*_name,int LStrip,int RStrip,Resistor*next);
      ~Resistor ();

      int             get_LStrip();
      int             get_RStrip();
      double          get_Resistance();
      Resistor        *get_Next ();

      void            set_next (Resistor *_next);
      void            set_name (char* _name);
      void            set_resistance (double _resistance);
      void            setLStrip (int leftStrip);
      void            setRStrip (int rightStrip);
};
#endif

