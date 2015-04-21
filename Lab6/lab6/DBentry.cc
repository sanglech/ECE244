#include "DBentry.h"
#include<iostream>
#include<string>

DBentry::DBentry()
{
  _key=NULL;
  _data=NULL;
}

void DBentry::setKey(string *k)
{
    string* temp = new string;
    *temp = *k;
    _key = temp;
    temp = NULL;
}

void DBentry::setData(string *pdata)
{
    string* temp = new string;
    *temp = *pdata;
    _data = temp;
    temp = NULL;
}

string* DBentry::getKey()
{
    return _key;
}

string* DBentry::getData()
{
    return _data;
}

void DBentry::print()
{

}

DBentry::~DBentry()
{

}
