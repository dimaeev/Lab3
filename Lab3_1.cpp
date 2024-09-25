/************************************************
* Автор: Алексеев Д.К.                          *
* Дата: 24.09.2024                              *
* Название: Лаба 3 Циклы с пред- и постусловием *
************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    
    double m = 75.0 ;
    double k = 8.0 ;
    double g = 9.81 ;
    
    double rt1 = sqrt(g * m / k) ;
    double rt2 = sqrt(g * k / m) ;
    
    double times[] = {0.0, 0.25, 0.75, 1.0, 2.0, 3.0, 4.0, 5.0} ;
    
    cout << fixed << setprecision(3) ;
    
    for (double t : times) {
        double v = rt1 * tanh(rt2 * t);
        cout << "Время: " << t << ", Скорость: " << v << endl ;
    }
    
    return 0 ;
}
 