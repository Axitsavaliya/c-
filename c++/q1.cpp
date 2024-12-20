#include <iostream>
using namespace std;

int main() {
     int number = 4; 

    for (char i = 'a'; i <= 'z'; i += number) {
        cout << i; 
        
        if (i + number <= 'z') { 
            cout << ", ";
        }
    }

    cout << endl;
   return 0;
}
