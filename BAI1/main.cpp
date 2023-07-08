#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class AccountBank
{ 
    private:
        long stk;
        string tenTK;
        double sotientrongTK;
        static const double LAISUAT;
        static const double PHI_RUT_TIEN;
    public:
        AccountBank() : stk(0), tenTK(""), sotientrongTK(0.0) {}
        AccountBank(long stk, string tenTK) : stk(stk), tenTK(tenTK), sotientrongTK(50.0) {}
        long getSTK() const {
            return stk;
        }
        void setSTK(long stk){
            this->stk = stk;
        }
        string getTenTK() const{
            return tenTK;
        }
        void setTenTK(string tenTK)
        {   
            this->tenTK = tenTK;
        }
        double getSotientrongTK() const{
            return  sotientrongTK;
        }
        void setSotientrongTK(double sotien){
            sotientrongTK = sotien;
        }
        string toString(){
            stringstream ss;
            ss << fixed << setprecision(2);
            ss << "So tai khoan: " << stk << endl;
            ss << "Ten tai khoan: " << tenTK << endl;
            ss << "So tien trong tai khoan: " << sotientrongTK << " VND" << endl;
        return ss.str();
        }
        void naptien(){
            double sotien;
            cout <<"Nhap so tien muon nap: " ;
            cin >> sotien;
            if(sotien >=0){
                sotientrongTK += sotien;
            }
            else{
                cout <<" so tien nap khong hop le " << endl;
            }
        }
        void ruttien(){
            double sotien;
            cout <<"Nhap so tien muon rut ";
            cin >> sotien;
            if(sotien <= sotientrongTK + PHI_RUT_TIEN){
                sotientrongTK -= (sotien + PHI_RUT_TIEN);
                cout <<" rut tienn thanh cong: " << endl;
            }
            else{
                cout <<"so tien vuot qua so du:" << endl;
            }
        }
        void daoHan(){
            sotientrongTK += sotientrongTK * LAISUAT;
            cout <<"Dao han thanh cong; " << endl;
        }


};
const double AccountBank :: LAISUAT = 0.035;
const double AccountBank ::PHI_RUT_TIEN = 0.05;
int main()
{
    long stk;
    string tenTK;
    cout << "Nhap so tai khoan: ";
    cin >> stk;

    cout << "Nhap ten tai khoan: ";
    cin >> tenTK;

    AccountBank taiKhoan(stk, tenTK);

    int luaChon;
    while (true) {
        cout << "\n=========== MENU ===========\n";
        cout << "1. Xem thong tin tai khoan\n";
        cout << "2. Nap tien\n";
        cout << "3. Rut tien\n";
        cout << "4. Dao han\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
            case 0:
                cout << "Thoat chuong trinh." << endl;
                return 0;
            case 1:
                cout << taiKhoan.toString() << endl;
                break;
            case 2:
                taiKhoan.naptien();
                break;
            case 3:
                taiKhoan.ruttien();
                break;
            case 4:
                taiKhoan.daoHan();
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    }
    return 0;
}
// chuong trinh quan ly tai khoan ngan hang