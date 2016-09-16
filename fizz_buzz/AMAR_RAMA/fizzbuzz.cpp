#include<iostream>

using namespace std;

int main()
{
    for (int ii = 1; ii < 101; ii++)
    {
        if ((ii % 3 == 0) && (ii % 5 == 0))
            cout << "FizzBuzz" << endl;
        else if (ii % 3 == 0)
            cout << "Fizz" << endl;
        else if (ii % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << ii << endl;
    }
}
