#include <iostream>
using namespace std;
int main(){
    int p, q, r, num1, num2, num3;
    cin >> p;
    cin >> q;
    cin >> r;
    
    num1 = p + q + r;
    num3 = 0.8 * num1;
    num2 = min(p , (min ( q, r)));
    if (num3 > num2){ 
        cout << "FREE ITME";
    } else {
        cout << "DISCOUNT";
    }
}
