/*decimal_tarea*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double numero = 12.3456789;
    cout << "Numero con 2 decimales: " << fixed << setprecision(2) << numero << endl;
    return 0;
}
