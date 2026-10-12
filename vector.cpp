/*vector_tarea*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Los numeros son: ";
    for(int n : numeros) cout << n << " ";
    cout << endl;
    return 0;
}
