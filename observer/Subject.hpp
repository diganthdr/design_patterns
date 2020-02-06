#ifndef SUBJECT_HPP
#define SUBJECT_HPP
#include "Observer.hpp"
//SUBJECT
class Subject
{
    public:
    virtual void attach( Observer* obs)=0; //Make this template?? to accomodate different types?
    virtual void dettach( Observer* obs)=0;
    virtual void notify()=0;
    virtual void changeValue( int v)=0;
};

class CSubject: public Subject
{
    public:
    CSubject()
    {
        val_ = 1000;
        cout << "CSubject's CTR, Value: " << val_ << endl;
    }


    void attach( Observer* obs )
    {
       obs_list.push_back( obs );
    }

    void dettach( Observer *obs)
    { 
	//Write a function. Remove the obj from the list.
    }
    void notify()
    {
       for(  list< Observer* >::iterator iter = obs_list.begin() ; iter != obs_list.end() ; iter++ )
       {
            (*iter )->update();
       }
    }

    void changeValue( int v)
    {
       val_ = v;
       notify();
    }


    private:
    int val_;
    list<Observer*> obs_list;
};

#endif
