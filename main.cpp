#include "CPower.h"

int main()
{
	Power pow_a;
	Power pow_b(2, 1);
	
	pow_a.Dump();
	pow_b.Dump();
	
	pow_a = pow_b;
	
	pow_a.Dump();
	pow_b.Dump();
	
	if(pow_a == pow_b)
	{
		cout << endl;
		cout << "OPERATORE == OK" << endl;
	}
	
	cout << endl;
	cout << "Pow A, x = 2 : " << pow_a.GetValue(2) << endl;
}