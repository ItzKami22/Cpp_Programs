#include <ctime>
#include <random>
#include <iostream>
#include <cmath>
using namespace std;
bool check(int g[2]) {
    
    cout << g[0];
    cout << g[1];
    if (int(pow(g[0] - 2, 2)) + int(pow(g[1] - 1, 2)) <= 9 && float(g[1]) >= 0.5 * float(g[0]) + 3) return true;
    return false;
}

int* gen() {
    setlocale(LC_ALL, "RUSSIAN");
    srand(time(NULL));
    int x, y, a1 = -5, a2 = 7, b1 = -5, b2 = 8;
    x = int(rand() % (a2 - a1 + 1) + a1);
    y = int(rand() % (b2 - b1 + 1) + b1);
    int g[]={ x, y };
    return g;
}

int main()
{
    int m;
    while (true) {
        cin>> m;
        if (m == 0) break;
        cout << gen()[0];
        cout << gen()[1];
        if (check(gen())) {
            cout << "popal";
            break;
        }
        else {
            cout << "ne popal"<< endl;
        }
    }
}
