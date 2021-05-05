// Toteuta funktio joka kysyy käyttäjältä 10 lukua ja sijoitaa ne taulukkoon

// Toteuta funktio joka kääntää int-tyyppisen taulukot toisinpäin (reverse),
// niin että alkion 0 arvo siirtyy alkioon n-1 ja vastaavasti n-1 alkioon 0, jne….

// Toteuta funktiot 16 x 12 kokoisen kaksiulotteisen taulukon käyttämiseen LED-näyttönä.
// Taulukko on bool -tyyppinen, bool arvo kertoo onko LED on vai off. Toteuta funktiot:

// aseta(bool tila), asettaa LEDin tilaan
// tulosta, tulostaa LED-matriisin nollina ja ykkösinä.
// tyhjenna, asettaa kaikki LEDit falseksi

# include <iostream>

using namespace std;

void fillArray();
void printArray();
void reverse();
void aseta(bool tila);
void tyhjenna();
void printLed();
string userIn(string question);

#define arr_len 10
int arr[arr_len];

#define ledWidth 16
#define ledHeight 12
bool led[ledHeight][ledWidth];

main() {
    fillArray();
    printArray();
    reverse();
    printArray();
    printLed();
    aseta(true);
    printLed();
    aseta(true);
    tyhjenna();
    printLed();
}

void fillArray() {
    for( int i = 0; i < arr_len; i++) {
        cout << "insert int to index " << i << ": ";
        cin >> arr[i];
    }
}

void printArray() {
    for( int i = 0; i < arr_len; i++) {
        cout << arr[i] << endl;
    }
}

void reverse() {
    int temp;
    for( int i = 0; i <= arr_len - i ; i++) {
        temp = arr[i];
        arr[i] = arr[(arr_len - 1) - i];
        arr[(arr_len - 1) - i] = temp;
    }
}
void aseta(bool tila) {
    int choice = 1;
    while(choice == 1) {
        int x = std::stoi(userIn("insert x: "));
        int y = std::stoi(userIn("insert y: "));
        int onOff = std::stoi(userIn("1 = on, 0 = off: "));
        if(onOff == 1) {
            led[y][x] = tila;
        }
        else {
            led[y][x] = !tila;
        }
        choice = std::stoi(userIn("1 to continue, anything else to end: "));
    }
}

void tyhjenna() {
    for (int y = 0; y < ledHeight; y ++) {
        for (int x = 0; x < ledWidth; x++) {
            led[y][x] = false;
        }
    }
}

void printLed() {
    for (int y = 0; y < ledHeight; y ++) {
        for (int x = 0; x < ledWidth; x++) {
            if(led[y][x]) {
                cout << 1;
            }
            else {
                cout << 0;
            }
            if(x == ledWidth - 1) {
                cout << endl;
            }
        }
    }
}

string userIn(string question) {
    string line;
    cout << question << endl;
    cin >> line;
    return line;
}