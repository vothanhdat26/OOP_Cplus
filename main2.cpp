#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout <<" Nhap vao 2 so n1 va n2: ";
    cin>> n1;
    cin >> n2;
    if(n1 == n2){
        cout << "N1=N2";
    }
    else if(n1<n2)
    {
        cout <<"n1<n2";
    }
    else {
        cout << " N1>n2";
    }
    return 0;
}