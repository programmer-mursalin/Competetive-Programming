/*
     My Coding Snippet
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
    CodeMonsterShu
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
    using namespace std;
double orginalFunction(double x)
{
    return x * x * x - 4 * x + 1;
}
double DiffernentialFunction(double x)
{
    return 3 * x * x - 4;
}

int main()
{
    double x0 = 4.0;
    double x1;
    double er;
    double epsl = 0.0001;
    int mxitr = 100;
    cout << "Iter\t x0\t\t f(x0)\t\t x1\t\t Error\n";

    for (int i = 0; i < mxitr; i++)
    {
        double fx = orginalFunction(x0);
        double dfx = DiffernentialFunction(x0);

        if (dfx == 0)
        {
            cout << "Derivative is zero\n";
            break;
        }

        x1 = x0 - fx / dfx;
        er = fabs(x1 - x0);

        cout << i << "\t " << x0 << "\t " << fx << "\t " << x1 << "\t " << er << endl;

        if (er < epsl)
        {
            break;
        }

        x0 = x1;
    }

    cout << "Approximate solution:" << x1 << endl;
    return 0;

    /*===============================================
   :::::::::::::Author :Md.Mursalin:::::::::::::
   ===============================================*/
}
