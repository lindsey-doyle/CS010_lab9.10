# CS010_lab9.10

9.10 CH9 LAB: Contact list
A contact list is a place where you can store a specific contact with other associated information such as a phone number, email address, birthday, etc. Write a program that first takes as input a list of N word pairs representing a name and a phone number (both strings). That list is followed by a name, and your program should output that name's phone number. If the input is: 3 Joe 123-5432 Linda 983-4123 Frank 867-5309 Frank the output is: 867-5309

For full credit, define and use a function: string GetPhoneNumber(const vector<string> &nameVec, const vector<string> &phoneNumberVec, string contactName). The return value of GetPhoneNumber is the phone number associated with the specific contact name.

Hint: Use two vectors: One for the string names, and the other for the string phone numbers.
