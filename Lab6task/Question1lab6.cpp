# include <iostream>
using namespace std;

int main ()
{
    int * h = new int;
    string * x = new string;
    // prompting the user iinput

    cout <<"Enter an integer value: ";
    cin >> * h;

    cout << " Enter a string value: ";
    cin.ignore( );
    getline(cin, *x);

    cout << "The value of the dynamically allocated integer: "<< h << endl;
    cout << "The value of the dynamically allocated string: " << x << endl;

    return 0;
    
}