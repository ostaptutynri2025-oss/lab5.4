#include <iostream>
using namespace std;

// 1) Рекурсивний спуск, параметр спадає
double P1(const int N, const int k)
{
    if (k < N) // база рекурсії
        return 1;
    else
        return P1(N, k - 1) * ((double)(k - N) / (k + N) + 1);
}

// 2) Рекурсивний спуск, параметр зростає
double P2(const int N, const int k)
{
    if (k > 19) // база рекурсії
        return 1;
    else
        return P2(N, k + 1) * ((double)(k - N) / (k + N) + 1);
}

// 3) Рекурсивний підйом, параметр спадає
double P3(const int N, const int k, double t)
{
    t = t * ((double)(k - N) / (k + N) + 1);
    if (k <= N)
        return t;
    else
        return P3(N, k - 1, t);
}

// 4) Рекурсивний підйом, параметр зростає
double P4(const int N, const int k, double t)
{
    t = t * ((double)(k - N) / (k + N) + 1);
    if (k >= 19)
        return t;
    else
        return P4(N, k + 1, t);
}

// 5) Ітераційний спосіб
double P0(const int N)
{
    double p = 1;
    for (int k = N; k <= 19; k++)
        p *= ((double)(k - N) / (k + N) + 1);
    return p;
}

int main()
{
    int N;
    cout << "N = ";
    cin >> N;

    cout << "(iter)        P0 = " << P0(N) << endl;
    cout << "(rec down --) P1 = " << P1(N, 19) << endl;
    cout << "(rec down ++) P2 = " << P2(N, N) << endl;
    cout << "(rec up --)   P3 = " << P3(N, 19, 1) << endl;
    cout << "(rec up ++)   P4 = " << P4(N, N, 1) << endl;

    return 0;
}
