#include "iostream"
#include "string"
using namespace std;

int main()
{
    string first;
    cout<<"Enter yout first name: ";
    getline(cin, first);    

    string insert = " Mayur ";
    first.insert(5, insert);
    

    //.append()
    first.append("Dave");
    cout<<first<<endl;
    cout<<"Length: "<<first.length()<<endl;
    cout<<"Size: "<<first.size()<<endl;
    cout<<"At: "<<first.at(0)<<endl;

    
    return 0;
}