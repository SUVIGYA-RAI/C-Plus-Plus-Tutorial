// Check divisibility by 5 and 3

// #include <iostream>
// using namespace std;
// int main(){
//     int s;
//     cout << "Enter number : ";
//     cin >> s;
//     if (s%5 == 0 && s%3 == 0){
//         cout << "yes, number is divisible";
//     }
//     else{
//         cout << "no, number is not divisible";
//     }
// }


// Check divisibility by 5 or 3

#include <iostream>
using namespace std;
int main(){
    int s;
    cout << "Enter number : ";
    cin >> s;
    if (s%5 == 0 || s%3 == 0){
        cout << "yes, number is divisible by 5 or 3";
    }
    else{
        cout << "no, number is not divisible by 5 or 3";
    }
}