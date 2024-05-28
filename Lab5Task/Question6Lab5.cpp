# include <iostream>
# include <fstream>
# include <string>
# include <cctype> 

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (toupper(c) == 'A'|| toupper (c) == 'E' || toupper(c) =='I' || toupper(c) =='O' || toupper(c) =='U') {
            count++;
        }
    } // function for counting vowels in a string
    return count;
}
// function reverse a string
string Reverse(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}
// function to capitalise  the second word of each word
string capilalizedSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            c = toupper(c);
            capitalize = false;
        }else { 
            capitalize = true;
        }
    return result; }
}

int main( )
    string fileData;
    ifstream inputFile("your_file.txt"); // opening the file
    if (inputFile.is_open()){
        getline(inputFile, fileData); // Read the file content into fileData
        inputFile.close(); // close the file
    } else { 
        cerr << "unable to open file" << endl;
        return 1;
    }
  
// counting the number of vowels
int vowelCount = countVowels(fileData);
cout << "Number of vowels: " << vowelCount <<endl;

// now counting the number of words
int wordCount = 0;
for (size_t i = 0; i < fileData.size(); i++) {
    if(isalpha(fileData[i])) {
        wordCount++;
        while (isalpha(fileData[i])) {
            i++;
        }
    }
}   
cout << "Number of words: " << wordCount << endl;
//reverse the statement
string reversedStatement = Reverse(fileData);
cout << "Reversed statement: " << reversedStatement << endl;

// capitalizedStatement 
string capitalizedStatement = capitalizeSecondLetter(fileData);
cout << "capitalised second letter : " << capitalisedStatement << endl;
return 0;
}