#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

void max (int n, int s);
void min (int n);

int main (){
    int n;
    cout<<"Potencia: ";
    cin >> n;
    //Sin signo
    cout<<"Entero sin signo de " << n << " bits"<<endl;
    max(n, 0);
    cout<< "Rango mínimo: 0"<<endl;
    //Con signo
    cout<<"Entero con signo de " << n << " bits"<<endl;
    max(n, 1);
    min(n);
}

void max(int n, int s){
    if(s == 1){
        uint64_t max = (uint64_t)pow(2, n-1) - 1;
        cout<< "Rango máximo: " << max <<endl;
    } else {
        uint64_t max = (uint64_t)pow(2, n)-1;
        cout<< "Rango máximo: " <<max<<endl;
    }
}

void min(int n){
    int64_t min = -(int64_t)pow(2, n - 1);
    cout<< "Rango mínimo: " <<min;
}