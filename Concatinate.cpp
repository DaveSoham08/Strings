#include "iostream"
#include "string"
using namespace std;

int main()
{
    string first;
    cout<<"Enter yout first name: ";
    cin>>first;
    first += " ";

    string last;
    cout<<"Enter your last name: ";
    cin>>last;
    first += last;
    

    cout<<"Hello "<<first<<" welcome to this example"<<endl;
    return 0;
}