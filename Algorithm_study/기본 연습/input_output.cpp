#include <iostream>

using namespace std;

int main()
{
    //<B_10869>
    //int a, b;
    //cin >> a >> b;

    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;
    //cout.precision(20);    //소수점 출력범위 설정
    //cout << a / (double) b << endl;
    //cout << a % b << endl;
    
    //<B_10430>
    /*int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << endl;
    cout << ((a % c) + (b % c)) % c << endl;
    cout << (a * b) % c << endl;
    cout << ((a % c) * (b % c)) % c << endl;*/

    //<B_2588>
    int a, b, res1, res2, res3;
    cin >> a >> b;
    
    res1 = a * (b % 10);
    res2 = a * (b / 10 % 10);
    res3 = a * (b / 100);

    cout << res1 << endl << res2 << endl << res3 << endl << res1 + res2 * 10 + res3 * 100;
}       