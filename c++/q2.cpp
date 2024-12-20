#include <iostream>
using namespace std;
    


    int main()
    {
        int num, sum, lastDigite;

        sum=0 ;

        cout << "enter any number:";
        cin >>num;


        while (num > 0)
        {
        
            sum=sum+lastDigite;
            num=num/10;
        }
        cout<<"total digite number:" << sum <<endl;



        return 0; 
    }