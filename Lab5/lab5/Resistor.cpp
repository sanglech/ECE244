#include "Resistor.h"
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

Resistor::Resistor()
{
  resistance=0.0;
  leftStrip=0;
  rightStrip=0;
  next=NULL;
}

Resistor::Resistor(double _val,char*_name,int _leftStrip,int _rightStrip,Resistor*_next)
{
  resistance=_val;
  leftStrip=_leftStrip;
  rightStrip=_rightStrip;
  next=_next;

   str_len=strlen(_name)+1;                              //Length of str+ an extra character for null terminator.
   name=new char[str_len];
   strncpy(name,_name,str_len);
}


void Resistor::set_resistance(double r)               //Shallow copy okay for values.
{
    resistance=r;
}

void Resistor::set_name(char*n)                       //Needed to use a deep copy in order for it to copy properly
{
   str_len=strlen(n)+1;                              //Length of str+ an extra character for null terminator.
   name=new char[str_len];
   strncpy(name,n,str_len);
}

void Resistor::setLStrip(int L1)
{
  leftStrip=L1;
}

void Resistor::setRStrip(int R1)
{
  rightStrip=R1;
}

void Resistor::set_next (Resistor *_next)
{
   next = _next;
}

Resistor::~Resistor()
{
  delete name;                                      //Since  name's memory is created using new, need a delete
}

int Resistor::get_LStrip()
{
  return leftStrip;
}

int Resistor::get_RStrip()
{
  return rightStrip;
}

double Resistor::get_Resistance()
{
  return resistance;
}

Resistor *Resistor::get_Next()
{
  return(next);
}
