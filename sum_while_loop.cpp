#include <iostream>
using namespace std;

int main(){

    int sum=0;
    int i=1;
    cout<<"A c++ program to find th sum of number from 1~10 using a loop"<<endl;

    while(i<=10){
        cout<<" "<<i;
        sum +=i;
        i++;
    }
    cout<<"The sum of the range between 1~10 is "<<sum;

    return 0;
}