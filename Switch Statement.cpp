#include <iostream>

using namespace std;

int main(){
    
    char grade = 'C';

    switch(grade){
         case 'A':
         cout<<"Excellent"<<endl;
         break;

         case 'B':
         cout<<"Well Done"<<endl;
         break;

         case 'C':
         cout<<"Keep pushing"<<endl;
         break;

         case 'D':
         cout<<"Try harder"<<endl;
         break;

         default:
         cout <<"Invalid Grade"<<endl;

    }

    return 0;
}        