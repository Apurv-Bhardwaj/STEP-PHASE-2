#include <iostream>
int main() {
    int weight, div;
    std::cin >> weight;
    div = weight / 2;
    if (weight > 0 && weight < 100){
        if (weight % 2 == 0){
            std::cout << "YES";
            std::cout << div << " " << div << std::endl;
        } else {
            std::cout << "NO";
        }
    } else {
        std::cout << "Invalid output";
    }
    return 0;
}
