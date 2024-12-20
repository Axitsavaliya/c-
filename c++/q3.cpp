#include <iostream>
using namespace std;
    

    int main()
    {
        int num, sum, firstdigite, lastdigite;

        cout<< "enter any number  :";
        cin >> num;


        lastdigite=num%10;

        while(num >= 10)
        {
            num = num/10;
        } 

        firstdigite=num;

        sum = firstdigite+lastdigite;


        cout<< "sum is number:" << sum << endl;


        return 0;
    }
