#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;

void readInput(vector<string> &nameVec, vector<string> &phoneNumberVec) {
    int numVals;
    cin >> numVals;
    string n;
    for (unsigned i = 0; i < numVals; ++i) {
        cin >> n; 
        nameVec.push_back(n); //adds name
        cin >> n;
        phoneNumberVec.push_back(n); //adds #
    }
}

string GetPhoneNumber(const vector<string> &nameVec, const vector<string> &phoneNumberVec, string contactName) {
    string contactNumber;
    cin >> contactName;
    for (unsigned int i = 0; i < nameVec.size(); ++i) {
        if (nameVec.at(i) == contactName) {
            contactNumber = phoneNumberVec.at(i);
        }
    }
    return contactNumber;
}

int main() {
    
   vector<string> nameVec; 
   vector<string> phoneNumberVec;
   
   readInput(nameVec, phoneNumberVec);
   string contactName;
   cout << GetPhoneNumber(nameVec, phoneNumberVec, contactName) << endl;
 
  return 0;
}