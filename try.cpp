#include<iostream>
using namespace std;

int main(){
    int num1, num2, div;
    cout << "Enter the Dividend: ";
    cin >> num1;
    cout << "Enter the Divisor: ";
    cin >> num2;
    try{
        if(num2==0){
            throw num2;
        }
        div=num1/num2;
        cout << num1 << " / " << num2 << " is " << div << "\n";
    }
    catch(int ex){
        cout << "Since the divisor is " << ex <<" . It is undefined or Infinite\n";
    }
}
