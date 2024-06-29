#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    if(a>0 && b>0){
        cout << "Number lies in 1st Quadrant.";
    }
    else if(a<0 && b>0){
        cout << "Number lies in 2nd Quadrant.";
    }
    else if(a<0 && b<0){
        cout << "Number lies in 3rd Quadrant.";
    }
    else if(a>0 && b<0){
        cout << "Number lies in 4th Quadrant.";
    }
    else if(a>0 || a<0 && b==0){
        cout << "Number lies on x-axis.";
    }
    else if(b>0 || b<0 && a==0){
        cout << "Number lies on y-axis.";
    }
    else{
        cout << "Origin.";
    }
}