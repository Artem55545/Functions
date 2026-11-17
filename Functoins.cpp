/****************************
* Имя:     Мусаев Артём     *
* Задание: функции          *
* Вариант: 3                *
****************************/

#include <iostream>

using namespace std;

double sumLessThan(const double values[], int count, double limit) {
    double sum = 0.0;
    for (int i = 0; i < count; ++i) {
        if (values[i] < limit) {
            sum += values[i];
        }
    }
    return sum;
}

int main() {
    const int MAX_SIZE = 100;

    int n;
    int m;
    double b;

    cin >> b >> n;
    if (n < 1 || n > MAX_SIZE) {
        cout << "INVALID\n";
        return 0;
    }

    double g[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        cin >> g[i];
        if (g[i] > 1000 || g[i] < -1000) {
            cout << "INVALID\n";
            return 0;
        }
    }

    cin >> m;
    if (m < 1 || m > MAX_SIZE) {
        cout << "INVALID\n";
        return 0;
    }

    double v[MAX_SIZE];
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
        if (v[i] > 1000 || v[i] < -1000) {
            cout << "INVALID\n";
            return 0;
        }
    }

    cout << sumLessThan(g, n, b) << "\n";
    cout << sumLessThan(v, m, b) << "\n";
    return 0;
}
