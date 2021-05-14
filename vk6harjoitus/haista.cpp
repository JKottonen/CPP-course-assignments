#include <string>

using namespace std;
class Auto {
    public:
        int autoId;
        string autoMerkki;
        int age;
        Auto(int x, string y, int z) {
            autoId = x;
            autoMerkki = y;
            age = z;
        }
        void printThingsOut();
    private:
        
};

void Auto::printThingsOut() {
    cout << "Autoid : " << autoId << endl;
    cout << "Automerkki : " << autoMerkki << endl;
    cout << "ikä: " << age << endl;
}