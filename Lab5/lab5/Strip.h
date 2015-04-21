#ifndef _Strip_H_
#	define _Strip_H_
#include "Resistor.h"
class Strip {
  private:
      int             number;
  public:
        Strip ();
        Strip(int _number,Strip *_next);
        ~Strip ();

        Strip        *next;
        Strip        *get_Next ();
        void         set_Next(Strip* _next);
        int          get_Number();
        void         print ();
};
#endif



