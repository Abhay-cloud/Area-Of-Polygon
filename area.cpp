
// shoelace formula
#include <bits/stdc++.h>
using namespace std;

double polygonArea(double X[], double Y[], int n)
{

    double area = 0.0;

    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (X[j] + X[i]) * (Y[j] - Y[i]);
        j = i;
    }

    return abs(area / 2.0);
}

int main()
{
    int m;
    double X[] = {0, 2, 4};
    double Y[] = {1, 3, 7};
    double x[12], y[12];

    cout << "Enter the no. of sides: ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cout << "Enter the x" << i + 1 << ": ";
        cin >> x[i];
        cout << "Enter the y" << i + 1 << ": ";
        cin >> y[i];
    }

    int n = sizeof(X) / sizeof(X[0]);

    // cout << polygonArea(X, Y, n);
    cout << polygonArea(x, y, m);
}
