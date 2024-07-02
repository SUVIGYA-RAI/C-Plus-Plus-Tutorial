#include <iostream>
using namespace std;
int main(){
    int r,s,a;
    cout << "Enter Ram's age : ";
    cin >> r;
    cout << "Enter Shyam's age : ";
    cin >> s;
    cout << "Enter Ajay's age : ";
    cin >> a;
    if(r<s){
        if(r<a){
            cout << r;
        }
        else{
            cout << a;
        }
    }
    else{
        if(s<a){
            cout << s;
        }
        else{
            cout << a;
        }
    }
}