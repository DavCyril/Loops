#include <iostream>
using namespace std;


int main(){

    string name,location,delivery_type,tel;
    double distance,amt;

        cout<<"Full name: ";
        getline(cin,name);
        cout<<"Location: ";
        getline(cin,location);
        cout<<"Telephone: ";
        getline(cin,tel);
        cout<<"Delivery type(Express,Normal): ";
        getline(cin,delivery_type);
        cout<<"Distance (m): ";
        cin>>distance;

        amt= (distance*0.03);

        cout<<"Delivery to "<<location<<" is "<<" using "<<delivery_type<<" delivery service is "<<amt;

    return 0;

}