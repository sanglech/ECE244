#include"Strip.h"
#include"Resistor.h"
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<sstream>
using namespace std;
Strip::Strip ()
{
  number=0;
  next=NULL;
}

Strip::Strip (int _number, Strip*_next)
{
    number=_number;
    next=_next;
}

void Strip::print()
{


}

void Strip::set_Next (Strip *_next)
{
   next = _next;
}

int Strip::get_Number()
{
    return number;
}

Strip *Strip::get_Next()
{
  return(next);
}

Strip::~Strip()
{

}

