#include <iostream>
using namespace std;

int main(){

    int i=0;
   int sum = 0;
    do{
        cout<<i<<" ";
        sum+=i;
        i++;
    }
    while(i<=10);
    cout<<"\n";
    cout<<"Sum = "<<sum;




    return 0;
}