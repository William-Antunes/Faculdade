#include <iostream>
using namespace std;
void simula(int n) {
    cout << "Inicio: " << n << endl;
    if (n <= 1) {
        cout << "Caso base: " << n << endl;
        return;
    }
    simula(n - 1);
    cout << "Meio: " << n << endl;
    simula(n - 2);
    cout << "Fim: " << n << endl;
}
int main() {
    simula(3);
    return 0;
}