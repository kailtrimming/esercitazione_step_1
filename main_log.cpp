#include "CLogarithmic.h"

int main()
{
	Logarithmic log_a;
	Logarithmic log_b(2, 8);
	
	log_a.Dump();
	log_b.Dump();
	
	log_a = log_b;
	
	log_a.Dump();
	log_b.Dump();
	
	if(log_a == log_b)
	{
		cout << endl;
		cout << "OPERATORE == OK" << endl;
	}
	
	cout << endl;
	cout << "Log A, x = 2 : " << log_a.GetValue(0) << endl;
}