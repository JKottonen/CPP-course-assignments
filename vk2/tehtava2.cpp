// Toteuta ohjelma joka kysyy käyttäjältä ikää.
// Riippuen iästä, tulosta:
// 0-3 vauva, 4-15 lapsi, 16-18 teini, 19-25 nuori aikuinen, yli 25 aikuinen

#include <iostream>
using namespace std;

string userIn(string question);
string ageCheck(int age);



main() {
int age = std::stoi(userIn("Insert age: "));
cout << ageCheck(age);

}

string ageCheck(int age) {
    if(age <= 3) {
        return "vauva";
    }
    else if(age >= 4 && age <= 15) {
        return "lapsi";
    }
    else if(age >= 16 && age <= 18) {
        return "teini";
    }
    else if(age >= 19 && age <= 25) {
        return "nuori aikuinen";
    }
    else {
        return "aikuinen";
    }
}

string userIn(string question) {
    string line;
    cout << question << endl;
    cin >> line;
    return line;
}