#include "iostream"
#include "string"
using namespace std;

int main()
{
    string input;
    cout<<"Enter yout first name: ";
    // cin>>input; 
    // CIN will scan until it reaches its first white space

    //GETLINE() is use to overcome the above problem
    getline(cin, input);

    cout<<"Hello "<<input<<" welcome to this example"<<endl;
    return 0;
}