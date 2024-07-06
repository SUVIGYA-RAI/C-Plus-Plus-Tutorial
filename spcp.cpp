// #include <iostream>
// using namespace std;
// int main(){
//     int cp;
//     cout << "Enter cost price :";
//     cin >> cp;
//     int sp;
//     cout << "Enter selling price :";
//     cin >> sp;
//     if(cp>sp){
//         cout << "Loss";
//     }
//     if(cp<sp){
//         cout << "Profit";
//     }
//     if(cp==sp){
//         cout << "No Profit, No Loss";
//     }
// }



#include <iostream>
using namespace std;
int main(){
    int cp;
    cout << "Enter cost price :";
    cin >> cp;
    int sp;
    cout << "Enter selling price :";
    cin >> sp;
    if(cp>sp){
        cout << "Loss";
    }
    else if(cp<sp){
        cout << "Profit";
    }
    else{
        cout << "No Profit, No Loss";
    }
}