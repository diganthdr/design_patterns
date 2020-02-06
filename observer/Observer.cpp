#include "Subject.hpp"
#include "Observer.hpp"

int main()
{   
    //Professor
	Subject *Professor  = new CSubject;
	
	//Students who wants to observe
    Observer *Arpita = new CObserver;
    Observer *Suhas = new CObserver;
    Observer *Chetana = new CObserver;
    Observer *Chaitra = new CObserver;
    Observer *Naveen = new CObserver;

	
	Professor->attach(Arpita);
	Professor->attach(Suhas);
	Professor->attach(Chetana);
    Professor->attach(Chaitra);
    Professor->attach(Naveen);

	//Say professor wants to reschedule the his class to 14:00 hrs. ChangeValue is his interface.
    Professor->changeValue( 1400 );
    return 0;
}

