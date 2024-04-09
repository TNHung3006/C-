#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

class Point
{
private:
    float x, y;
public:
    Point(float, float);
    void Printf();
    float KhoangCach(const Point&);
};
Point::Point(float x = 0, float y = 0)
{
    this->x = x;
    this->y = y;
}
void Point::Printf()
{
    cout << "(" << x << "," << y << ")" << endl;
}
float Point::KhoangCach(const Point& Other)
{
    return sqrt(pow((this->x - Other.x), 2) + pow((this->y - Other.y), 2));
}

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}



class PhanSo
{
private:
    int TuSo;
    int MauSo;
public:
    PhanSo(int);
    PhanSo(int, int);
    PhanSo(const PhanSo&);
    PhanSo Cong(const PhanSo&);
    PhanSo Tru(const PhanSo&);
    PhanSo Nhan(const PhanSo&);
    PhanSo Chia(const PhanSo&);
    PhanSo operator + (const PhanSo&);
    PhanSo operator - (const PhanSo&);
    PhanSo operator * (const PhanSo&);
    PhanSo operator / (const PhanSo&);
    PhanSo Cong(int);
    PhanSo Tru(int);
    PhanSo Nhan(int);
    PhanSo Chia(int);
    PhanSo operator + (int);
    PhanSo operator - (int);
    PhanSo operator * (int);
    PhanSo operator / (int);
    void SetPhanSo(int);
    void RutGon();
    void Prinf();
};
void PhanSo::SetPhanSo(int TuSo)
{
    this->TuSo = TuSo;
    this->MauSo = 1;
}
PhanSo::PhanSo(int  TuSo)
{
    this->TuSo = TuSo;
    this->MauSo = 1;
}
PhanSo::PhanSo(int TuSo = 0, int MauSo = 1)
{
    this->TuSo = TuSo;
    this->MauSo = MauSo;
}
PhanSo::PhanSo(const PhanSo& Other)
{
    this->TuSo = Other.TuSo;
    this->MauSo = Other.MauSo;
}
void PhanSo::RutGon()
{
    int c;
    c = UCLN(this->TuSo, this->MauSo);
    this->TuSo = this->TuSo / c;
    this->MauSo = this->MauSo / c;
}
PhanSo PhanSo::Cong(const PhanSo& Other)
{
    PhanSo Tong;
    Tong.TuSo = this->TuSo * Other.MauSo + this->MauSo * Other.TuSo;
    Tong.MauSo = this->MauSo * Other.MauSo;
    Tong.RutGon();
    return Tong;
}
PhanSo PhanSo::Tru(const PhanSo& Other)
{
    PhanSo Hieu;
    Hieu.TuSo = this->TuSo * Other.MauSo - this->MauSo * Other.TuSo;
    Hieu.MauSo = this->MauSo * Other.MauSo;
    Hieu.RutGon();
    return Hieu;
}
PhanSo PhanSo::Nhan(const PhanSo& Other)
{
    PhanSo Tich;
    Tich.TuSo = this->TuSo * Other.TuSo;
    Tich.MauSo = this->MauSo * Other.MauSo;
    return Tich;
}
PhanSo PhanSo::Chia(const PhanSo& Other)
{
    PhanSo Thuong;
    Thuong.TuSo = this->TuSo * Other.MauSo;
    Thuong.MauSo = this->MauSo * Other.TuSo;
    return Thuong;
}
PhanSo PhanSo::operator + (const PhanSo& Other)
{
    PhanSo Tong;
    Tong.TuSo = this->TuSo * Other.MauSo + this->MauSo * Other.TuSo;
    Tong.MauSo = this->MauSo * Other.MauSo;
    Tong.RutGon();
    return Tong;
}
PhanSo PhanSo::operator - (const PhanSo& Other)
{
    PhanSo Hieu;
    Hieu.TuSo = this->TuSo * Other.MauSo - this->MauSo * Other.TuSo;
    Hieu.MauSo = this->MauSo * Other.MauSo;
    Hieu.RutGon();
    return Hieu;
}
PhanSo PhanSo::operator * (const PhanSo& Other)
{
    PhanSo Tich;
    Tich.TuSo = this->TuSo * Other.TuSo;
    Tich.MauSo = this->MauSo * Other.MauSo;
    return Tich;
}
PhanSo PhanSo::operator / (const PhanSo& Other)
{
    PhanSo Thuong;
    Thuong.TuSo = this->TuSo * Other.MauSo;
    Thuong.MauSo = this->MauSo * Other.TuSo;
    return Thuong;
}
PhanSo PhanSo::Cong(int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Tong;
    Tong.TuSo = this->TuSo * Other.MauSo + this->MauSo * Other.TuSo;
    Tong.MauSo = this->MauSo * Other.MauSo;
    Tong.RutGon();
    return Tong;
}
PhanSo PhanSo::Tru(int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Hieu;
    Hieu.TuSo = this->TuSo * Other.MauSo - this->MauSo * Other.TuSo;
    Hieu.MauSo = this->MauSo * Other.MauSo;
    Hieu.RutGon();
    return Hieu;
}
PhanSo PhanSo::Nhan(int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Tich;
    Tich.TuSo = this->TuSo * Other.TuSo;
    Tich.MauSo = this->MauSo * Other.MauSo;
    return Tich;
}
PhanSo PhanSo::Chia(int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Thuong;
    Thuong.TuSo = this->TuSo * Other.MauSo;
    Thuong.MauSo = this->MauSo * Other.TuSo;
    return Thuong;
}
PhanSo PhanSo::operator + (int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Tong;
    Tong.TuSo = this->TuSo * Other.MauSo + this->MauSo * Other.TuSo;
    Tong.MauSo = this->MauSo * Other.MauSo;
    Tong.RutGon();
    return Tong;
}
PhanSo PhanSo::operator - (int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Hieu;
    Hieu.TuSo = this->TuSo * Other.MauSo - this->MauSo * Other.TuSo;
    Hieu.MauSo = this->MauSo * Other.MauSo;
    Hieu.RutGon();
    return Hieu;
}
PhanSo PhanSo::operator * (int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Tich;
    Tich.TuSo = this->TuSo * Other.TuSo;
    Tich.MauSo = this->MauSo * Other.MauSo;
    return Tich;
}
PhanSo PhanSo::operator / (int TuSo)
{
    PhanSo Other;
    Other.SetPhanSo(TuSo);
    PhanSo Thuong;
    Thuong.TuSo = this->TuSo * Other.MauSo;
    Thuong.MauSo = this->MauSo * Other.TuSo;
    return Thuong;
}
void PhanSo::Prinf()
{
    this->RutGon();
    if (this->MauSo > 0) cout << this->TuSo << "/" << this->MauSo << endl;
    else cout << "-" << this->TuSo << "/" << abs(this->MauSo) << endl;
}


class Adult
{
private:
    string HoTen;
    float CanNang;
    float ChieuCao;
public:
    Adult(string HoTen, float, float);
    Adult(const Adult&);
    float BMI();
    void Printf();
    float TinhSoCan();
    void Nhap();
};
Adult::Adult(string HoTen = "", float CanNang = 0, float ChieuCao = 0)
{
    this->HoTen = HoTen;
    this->CanNang = CanNang;
    this->ChieuCao = ChieuCao;
}
Adult::Adult(const Adult& Other)
{
    this->HoTen = Other.HoTen;
    this->CanNang = Other.CanNang;
    this->ChieuCao = Other.ChieuCao;
}
float Adult::BMI()
{
    return this->CanNang / pow(this->ChieuCao, 2);
}
float Adult::TinhSoCan()
{
    int BMI = this->BMI();
    if (BMI < 18.5)
    {
        float BMIChenhLech = 18.5 - BMI;
        return BMIChenhLech * pow(this->ChieuCao, 2);
    }
    else if (BMI > 25)
    {
        float BMIChenhLech = BMI - 25;
        return BMIChenhLech * pow(this->ChieuCao, 2);
    }
    return 0;
}
void Adult::Printf()
{
    cout << "Ho Ten : " << this->HoTen << endl;
    cout << "Can Nang : " << this->CanNang << " Kg" << endl;
    cout << "Chieu Cao : " << this->ChieuCao << " M" << endl;
    cout << "Tinh Trang Suc Khoe : ";
    float BMI = this->BMI();
    if (BMI < 18.5) cout << "Thieu Can" << endl;
    else if (BMI >= 18.5 && BMI <= 25) cout << "Binh Thuong" << endl;
    else if (BMI > 25 && BMI < 30) cout << "Thua Can" << endl;
    else cout << "Beo Phi" << endl;
    if (!(BMI >= 18.5 && BMI <= 25)) cout << "Loi Khuyen : ";
    if (BMI < 18.5) cout << "Can Tang Them " << this->TinhSoCan() << " Kg" << endl;
    else if (BMI > 25) cout << "Can Giam " << this->TinhSoCan() << " Kg" << endl;
    cout << endl;
}
void Adult::Nhap()
{
    cout << "Nhap Ho Ten : "; getline(cin, this->HoTen);
    cout << "Nhap Can Nang : "; cin >> this->CanNang;
    cout << "Nhap Chieu Cao : "; cin >> this->ChieuCao;
}


int main()
{
    cout << "Bai 1 :" << endl;
    Point A;
    Point B(3, 4);
    cout << "Khoang Cach Tu A Den B : " << A.KhoangCach(B) << endl;
    cout << endl;


    cout << "Bai 3 :" << endl;
    PhanSo Ps1(3, 4);
    PhanSo Ps2(5, 9);
    PhanSo Ps3(Ps2);
    PhanSo Ps4 = Ps1 + 3;
    PhanSo Ps5 = Ps2 / Ps4;
    cout << "Phan So 1 : "; Ps1.Prinf();
    cout << "Phan So 3 : "; Ps3.Prinf();
    cout << "Tong Phan So 1 Va 3 : "; Ps4.Prinf();
    cout << "Thuong Phan So 2 Va Phan So 4 : "; Ps5.Prinf();
    cout << "Hieu Phan So 5 Va Phan So 1 : "; Ps5.Tru(Ps1).Prinf();
    cout << "Tich Phan So 4 Va 3 : "; (Ps4 * 3).Prinf();
    cout << endl;


    cout << "Bai 4 :" << endl;
    Adult Obj("Vo Xuan Truong", 65.6, 1.78);
    Adult Obj1("Vo Thi Truong", 45.8, 1.7);
    Adult Obj2(Obj);
    Obj.Printf();
    Obj1.Printf();
    Obj2.Printf();
}