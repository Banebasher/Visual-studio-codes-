#include "SpStudent.h"

void main()
{
	SpStudent She("Betty","p0123456", 3.5), He("Paul", "p1312345", 3.4);


	She.setName("Betty Chan");
	She.setGPA(3.6);
	He.setGPA(3.2);

	He.setName("Paul Lee Wei Lin");
	He.setGPA(4.0);
	cout << "Student " << He.getName() << " GPA is " << He.getGPA() << endl;

	cout << endl << endl <<"She : " <<endl;
	She.studentPrint();

	She.compareGPAwith(He) ? cout << "Betty GPA is higher" : cout << "Paul GPA is higher";
	return ;

}

