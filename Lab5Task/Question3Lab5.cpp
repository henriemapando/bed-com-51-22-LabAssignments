# include <iostream>
# include <string>
using namespace std;
int main ()
{
    string Mylength [8]; // decraring an array
    Mylength[0] = "B123";
    Mylength[1] = "C234";
    Mylength[2] = "A345";
    Mylength[3] = "C15";
    Mylength[4] = "B177";
    Mylength[5] = "G3003";
    Mylength[6] = "C235";
    Mylength[7] = "B179";

int henrie = sizeof(Mylength) / sizeof(Mylength[0]);
for (int i = 0; i < henrie; ++i) {
    // for loop to iterate through each of array
    if (Mylength[i][0] == 'B') {
        // checking if the the element start with the letter "B"
        cout << Mylength[i]<< endl; // output of elements that start with letter "B"
    }
}
return 0;

}
