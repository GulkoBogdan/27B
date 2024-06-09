#include<iostream>

using namespace std;

int r(const int v, int f1 = 1, int f2 = 1, int i = 1) {
    return v == f1 ? i : r(v, f2, f1 + f2, i + 1);
}

int arg;
int F = 1;
int Factorial(int x) {

    if (x < 0)
        return 1;
    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
            F = F * i;

    }
    return F;
}

int main() {

    //1
    cin >> arg;
    cout << Factorial(arg) << endl;
    

    //2
    int fi = 0;
    cin >> fi;
    cout << "F" << r(fi) << " = " << fi << endl;
    system("pause");
    return 0;
}