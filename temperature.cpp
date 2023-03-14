#include <iostream.h>
using namespace std;
int main(){
    int temperature;
    float celcius;
    float fahreniet;
    float output;
    string pinch;
    cout<<"hello user press 1 to to convert C to F press 2 to convert F to C ";
    cin>>temperature;
    switch (temperature)
    {
    case 1/* constant-expression */:

        /* code */
        cout<<"Enter the Celcius:";
        cin>>celcius;
        output=(1.8*celcius+32);
        cout<<"The fahreniet is:"<<output <<"F";

        break;
    case 2 :
      cout<<"Enter the Farheniet:";
        cin>>fahreniet;
        output=(0.55*(fahreniet-32));
        cout<<"The celcius is:"<<output <<"C";
        break;

    
    default:
    cout<<"wrong input, try again";
        break;
    }
}