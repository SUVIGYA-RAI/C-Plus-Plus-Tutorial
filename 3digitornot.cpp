#include <iostream>
using namespace std;
int main(){
    int s;
    cout << "Enter number : ";
    cin >> s;
    if(s > 99 && s < 1000){
        cout  << "Three digit number";
    }
    else{
        cout << "Not a three digit number";
    }
    return 0;
}
