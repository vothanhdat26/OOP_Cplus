// Viết chương trình in ra thông báo nếu người dùng nhập vào số âm.

// Với bài này ta phải sử dụng lệnh scanf để nhận dữ liệu từ bàn phím.
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Nhap so:";
    cin >> number;
    // kiem tra so am
    if(number <0)
    {
        cout <<"Number la so am";

    }
    else {
        cout << "Number la so duong ";
    }
    return 0;
    system("cls");
}