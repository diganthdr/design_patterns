#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include<iostream>
#include<list>
#include<string>
#include "Subject.hpp"

using namespace std;
class Subject;
// OBSERVER
class Observer
{
    public:
    virtual void update()=0; //INFORM ME!!!
    virtual void observe( Subject* s ) = 0;
};

class CObserver: public Observer
{
    public:
    CObserver()
    {
        //attachSelf( Subject *s );
	cout << "CObserver, CTOR" << endl;
    }
    
    void observe( Subject* s )
    {
	cout << "registering myself to observe" << endl;
    //    (*s).attach( this );
    }

    void update()
    {
        cout << "There is a change in Subject. UPDATING..." << endl;
    }

};
#endif
