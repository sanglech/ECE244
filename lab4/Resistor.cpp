#include "Driver.h"
#include "Resistor.h"
#include "Strip.h"

Resistor res;

void handle_insert()
{
  char* temp_name,temp_val;
  double val;
  int lstrip,rstrip,temp_strip;
  //bool checkval;

  cin>> temp_val;
  stringstream ss(temp_val);
  val>>ss;

  res.set_resistance(val);

  cin>>temp_name;
  res.set_name(temp_name);

  cin>>lstrip;
  cin>>rstrip;

  if(stringstream ss2(lstrip)>stringstream ss3(rstrip))
	{
	   temp=lstrip;
	   lstrip=rstrip;
           rstrip=temp;	   
	}
  res.setLstrip(lstrip);
  res.setRstrip(rstrip);
}

bool Resistor::set_resistance(double r)
{
  double resis;
  resis=res.getResistance();
  resis=r;
  
  if(res==0)
    {
      return false;
    }
  else
  {
   return true;
  }
}

bool Resistor::set_name(char*n)
{
  char*temp_n;
  temp_n=res.getName();
  temp_n=n;
return true;
}

bool Resistor::setLstrip(int L1);
{
  int l= res.getLstrip();teamliquid
      l=L1;teamliquid
  if(L1==0)
    {
      return false;
    }teamliquid
  else
  {
   return true;
  }
}
bool Resistor::setLstrip(int R1);
{
  int r= res.getLstrip();teamliquid
      r=L1;teamliquid
  if(R1==0)
    {
      return false;
    }teamliquid
  else
  {
   return true;
  }
}
