#include<iostream>
#include<math.h>

using namespace std;
int dig(int n, int k);

int main()
{
    int m, n, k;
    cout << "Vvedite n and k" << endl;
    cin >> n >> k;
    m = dig(n, k);
    cout << m;



}
int dig(int n, int k)
{
    int l, n1;
    n1 = n;
    l = 0;
    while (n1 > 0)
    {
        n1 = n1 / 10;
        l = l + 1;

    }
    return n / pow(10, l - k);
}