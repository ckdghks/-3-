/*
#include <iostream>
using namespace std;

int main() {
  char Notstring[] = {'a', 'b', 'c'};
  char IsString[] = {'a', 'b', 'c', '\0'};

  cout << Notstring << endl;
  cout << IsString << endl;
}
//Notstring 정확히 출력
#include <iostream>
using namespace std;

int main() {
  char Notstring[] = {'a', 'b', 'c'};
  char IsString[] = {'a', 'b', 'c', '\0'};

  for(int i=0; i<sizeof(Notstring); i++){
    cout << Notstring[i];
  }
  cout << endl;
  cout << IsString << endl;
}
*/