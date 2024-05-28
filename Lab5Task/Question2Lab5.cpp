// using switch statement 
# include <iostream>
using namespace std;
int main ( )
{
    int random = rand() % 10;
    int dayUntilExpiration = random;
    switch (dayUntilExpiration % 11 )
    {
        case 0: cout<<"Your subscription expires in value of daysUntilExpirationdays Renew now and save 10%! "<<endl;break;
        case 1:cout<<"Your subscription expires within a day! Renew now and save 20%!"<< endl; break;
        case 2:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;
        case 3:cout<<"Your subscription expires in value of daysUntilExpirationdays Renew now and save 10%! "<<endl;break;
        case 4:cout<<"Your subscription expires in value of daysUntilExpirationdays Renew now and save 10%! "<<endl;break;
        case 5:cout<<"Your subscription expires in value of daysUntilExpirationdays Renew now and save 10%! "<<endl;break;
        case 6:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;
        case 7:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;
        case 8:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;
        case 9:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;
        case 10:cout<<"Your subscription will expire soon. Renew now!"<< endl;break;

    }
return 0;
}