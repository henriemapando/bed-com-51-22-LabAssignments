# include <iostream>
using namespace std;

int main ()
{
    int r; // r for rows
    int c; // c for columns 
    // prompting the user for dimensions
    cout << "Enter the number of rows (max 3): ";
    cin >> r;
    if (r > 3)
    {
        cout << " Number of rows cannot exceed 3. Exiting program."<<endl;
        return 1;
    
    }
    cout <<" Enter the number of columns (max 3): ";
    cin >> c;
    if (c > 3) {
        cout << "Number of columns cannot exceed 3. Exiting program." << endl;
        return 1;
    }
//dynamically allocate 2d array
double* * Array = new double*[r];
for (int i = 0; i < r; ++i) {
    Array[i] = new double[c];
}
for (int i = 0; i<r; ++i) {
    for (int h = 0; h < c; ++h){
        cout <<Array[i][h] << " "<<endl;
    }
    // deallocate memory to prevent memory leaks
    for ( int i = 0; i < r; ++i) {
        delete [] Array[i];
    }
    delete [] Array;
    return 0;
    }
}