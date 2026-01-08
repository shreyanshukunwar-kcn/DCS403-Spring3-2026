#include <iostream>

using std::cout;
using std::endl;

int main() 
{
    int balance{1000};                      //Braced initializer
    int withdrawl{500};
    int final_balance{balance - withdrawl};

	cout << "Account balance is: Rs" << balance <<  endl;
    cout << "Withdrawl amount is: Rs" << withdrawl <<  endl;
    cout << "Final balance is Rs" << final_balance <<  endl;

	return 0;
}