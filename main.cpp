#include <iostream>
using namespace std;

int main() {
  int i, j, k=0;
  for( i=0; i<2; i++ ) {
    for( j=1; j<3; j++ ) {
      if( k==0 ) break;
      cout << "안녕하세요?\n";
    } // for(j)
    cout << "i=" << i << "j=" << j << endl; 
  } // for(i)
}