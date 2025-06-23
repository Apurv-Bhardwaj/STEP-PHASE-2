#include <iostream>
using namespace std;
int main(){
    float X, Y, Z, W;
    cout << "Enter the price of a dozen mangoes:";
    cin >> X;
    cout << "Enter the price at which 1 mango is being sold";
    cin >> Y;
    W = 12 * Y;
    if (W > X){
        Z = W - X;
        cout << "Profit : " << W << endl;
    } else {
        Z = X - W;
        cout << "Loss: " << Z << endl;
}
}
