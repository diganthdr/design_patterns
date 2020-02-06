#include<iostream>
#include "Singleton.hpp"
#include <string>

using namespace std;

Singleton* Singleton:: _sptr = NULL;

int Singleton::tries = 0;
Singleton::Singleton()
{
     string name = "Default CTOR";
     data = 2013;
}


Singleton* Singleton::getInstance()
{
   if ( _sptr == NULL ) 
      _sptr = new Singleton;
   else
      cout << "Address of Singleton object : " <<  hex << _sptr << endl;
      //log if needed
   tries++;
   cout << "Tries: " << tries << endl;
   return _sptr;
}

int main()
{
   //Singleton s;
   Singleton *sptr1 = Singleton::getInstance();
   cout << "DATA: " <<  sptr->data << endl;
   // cout << "Address of Singleton object : " <<  hex << sptr << endl;
   Singleton *sptr2 = Singleton::getInstance();
   
}



//EX
//1. Implement "Thread safe" singleton pattern.
