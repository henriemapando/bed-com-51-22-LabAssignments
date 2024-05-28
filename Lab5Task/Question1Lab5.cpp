// this program aims at checking user subscription using random values.
# include <iostream>
using namespace std;
int main () {
    int random = rand() % 10;
    int daysUntilExpiration = random;
    if (daysUntilExpiration <= 10)
    cout <<"Your subscription will expire soon. Renew now!"<< endl;
    else if (daysUntilExpiration <= 5)
    cout<<"Your subscription expires in value of daysUntilExpirationdays Renew now and save 10%! "<<endl;
    else if (daysUntilExpiration == 1)
    cout<<"Your subscription expires within a day! Renew now and save 20%!"<< endl; 
else if (daysUntilExpiration == 0)
cout<<"Your subscription has expired. "<<endl;
else // meaning the value is exceeding 10
cout<<"You have an active subscription."<<endl;

  return 0;
}