// using while loop statement
# include <iostream>
using namespace std;
int main ( )
{
    int h;
    cout<<" Enter a value between 5 and 10: "; //prompting user to rnter a value between 5 and 10
    cin>> h;
    while (h < 5 || h > 10) { 
    cout<<"sorry, you entered invalid number, please try again you entered  "<<h;
    cout<<"please enter an integer value between 5 and 10: ";
    cin>>h;
    }
        cout<<" Your input" << h<<"has been accepted."<< endl;
          
return 0;
}
