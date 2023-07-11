// cong tru nhan chia
#include <iostream>
using namespace std;
int a = 90, b = 3;
void cong()
{

    int sum = 0;
    sum = a + b;
    cout << sum;
}
void tru()
{

    int tru = 0;
    tru = a - b;
    cout << tru << endl;
}
void nhan()
{
    int nhan = 0;
    nhan = a * b;
    cout << nhan;
}
void chia()
{
    int chia;
    chia = a / b;
    cout << chia;
}
int main()
{
    char luachon;
    cout << "nhap phep tinh\n";
    bool tieptuc = true;
    while(true)
    {
        cin >> luachon;
        switch (luachon)
        {
        case '+':

            cout << "tong 2 so a va b la:\t";
            cong();
            break;
        case '-':
            cout << "\nHieu 2 so a b: \t";
            tru();
            break;
        case '*':
            cout << "\nNhan 2 so  a b: \t";
            nhan();
            break;
        case '/':
            cout << "\nChia 2 so a b: \t ";
            chia();
            break;
        default:
            cout << "vui long nhap lai";
        }
    } 

    return 0;
}
