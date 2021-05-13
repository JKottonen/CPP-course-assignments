#include <iostream>

using namespace std;

int  main()
{
  int muuttuja = 2;	      // muuttuja
  int& rViittaus = muuttuja;  // viittaus
  

  cout << "muuttuja on " << muuttuja << endl;
  cout << "rViittaus on " << rViittaus << endl;

  muuttuja = 5;

  cout << "muuttuja on " << muuttuja << endl;
  cout << "rViittaus on " << rViittaus << endl;

  rViittaus = 2;

  cout << "muuttuja on " << muuttuja << endl;
  cout << "rViittaus on " << rViittaus << endl;
  
  cout << &rViittaus << endl;

  return EXIT_SUCCESS;
}