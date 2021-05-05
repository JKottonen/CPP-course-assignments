/*
Toteuta ohjelma joka kysyy käyttäjältä kaksi lukua käyttäen cin-fuktiota,
vertaa lukuja jos luku a on kymmenen kertaa luku b, tulosta “Annoitpa ison luvun a”,
muussa tapauksessa tulosta “Aikalailla samansuuruiset luvut”
*/

#include <iostream>
using namespace std;

/* DECLARING THE FUNCTIONS */
bool isTenTimesLarger(int A, int B);
string userIn(string question);

/* main function */
main() {
    int number_A = std::stoi(userIn("Insert A: "));
    int number_B = std::stoi(userIn("Insert B: "));
    if(isTenTimesLarger(number_A, number_B)) {
        cout << "Annoitpa ison luvun a";
    }
    else {
        cout << "Aikalailla samansuuruiset luvut";
    }
}

/*  Compares A and B.
    Returns true if A is 10 times B
*/
bool isTenTimesLarger(int A, int B) {
    if(A == (10 * B)) {
        return true;
    }
    else {
        return false;
    }
}
/*  Asks for user input.
    Prints question to console first.
*/
string userIn(string question) {
    string line;
    cout << question << endl;
    cin >> line;
    return line;
}
