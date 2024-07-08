// Display 1,35,7,9,..........AP upto nth term.
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     //AP Formula -- an = a + (n-1)d;
//     for (int i = 1; i <= 2*n-1; i = i +2){
//         cout << i << " ";
//     }
// }


// Display 4,7,10,13.....
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = 4;
    for (int i = 1; i <= n; i++){
        cout << a << " ";
        a = a + 3;
    }
}