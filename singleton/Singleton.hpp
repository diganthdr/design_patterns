/*
*Author : Diganth
*Purpose: Singleton class, Experimental
*Comment : Not thread safe
*/
#ifndef __SINGLETON_HPP__
#define __SINGLETON_HPP__


class Singleton
{
   //make ctr, cpy ctr, assmgt op and destructor private
   Singleton();
   Singleton(const Singleton&);
   Singleton& operator=(const Singleton&);
      
   //Optional if your process is not supposed to exit gracefully. Like deamons.
   ~Singleton()
   {
     std::cout << "DTOR" << std::endl;
   }
   public:
   //a handle must be static, because you need something which is already there before the object is instantiated
   static Singleton* getInstance();
   static Singleton *_sptr;
   static int tries;
   int data;

};



#endif
