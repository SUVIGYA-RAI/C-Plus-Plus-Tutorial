#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number : " ;
    cin >> n;
    if(n % 2 == 0){
        cout << "The number is even.";
    }
    else{
        cout << "The number is odd.";
    }
}

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter number : " ;
//     cin >> n;
//     if(n % 2 == 0) cout << "The number is even.";
//     if(n % 2 != 0) cout << "The number is odd.";
// }