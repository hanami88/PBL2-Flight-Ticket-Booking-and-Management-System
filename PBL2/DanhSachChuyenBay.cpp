#include "DanhSachChuyenBay.hpp"
#include<iostream>
#include<fstream>
#include<iomanip>
#include<iostream>
using namespace std;
void DanhSachChuyenBay::Cout(int& dem,ChuyenBay i){
    cout<<"│  "<<setw(3)<<left<<dem++<<setw(7)<<left<<"│"
     <<setw(9)<<left<<i.MaChuyenBay<<setw(4)<<left<<"│"
    <<setw(13)<<left<<i.GiaTien<<setw(4)<<left<<"│"
    <<setw(17)<<left<<i.HangHangKhong<<setw(4)<<left<<"│"
     <<setw(16)<<left<<i.NgayKhoiHanh<<setw(4)<<left<<"│"
    <<setw(16)<<left<<i.NgayVe<<setw(5)<<left<<"│"
     <<setw(13)<<left<<i.DiemDi<<setw(5)<<left<<"│"
    <<setw(14)<<left<<i.DiemDen<<setw(7)<<left<<"│"
    <<setw(8)<<left<<i.TrangThai<<setw(7)<<left<<"│"
    <<setw(6)<<left<<i.SoVeDaDat<<setw(8)<<left<<"│"
    <<setw(9)<<left<<i.SoLuongVe<<"│"<<endl;
}

void DanhSachChuyenBay::InGD(){
    cout<<left<<"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
    cout<<"│ STT │Ma Chuyen Bay│   Gia Tien   │  Hang Hang Khong │     Ngay Di     │     Ngay Ve     │    Diem Di    │    Diem Den    │ Trang Thai │Ve Con Lai│ So Luong Ve  │\n";
    cout<<left<<"│─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────│\n";
}

void DanhSachChuyenBay::InEnd(){
    cout<<left<<"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n";
}
DanhSachChuyenBay::DanhSachChuyenBay():soluong(12){
    ifstream k("DanhSachChuyenBay.txt",ios::in);
    if(!k.is_open()){
        return;
    }
    for(int i=0;i<this->soluong;i++){
        string HangHangKhong,MaChuyenBay,GiaTien,NgayKhoiHanh,NgayVe,DiemDi,DiemDen,TrangThai;
        int SoLuongVeDaDat,SoLuongVe;
        getline(k,HangHangKhong);getline(k,MaChuyenBay);getline(k,GiaTien);getline(k,NgayKhoiHanh);
        getline(k,NgayVe);getline(k,DiemDi);getline(k,DiemDen);getline(k,TrangThai);
        k>>SoLuongVeDaDat>>SoLuongVe;
        k.ignore();
        DS.push_back(ChuyenBay(HangHangKhong,MaChuyenBay,GiaTien,NgayKhoiHanh,NgayVe,DiemDi,DiemDen,TrangThai,SoLuongVeDaDat,SoLuongVe));
    }
    k.close();
}

void DanhSachChuyenBay::in(){
    int dem=1;
    cout<<setw(135)<<right<<"┌────────────────────┐\n";
    cout<<setw(95)<<right<<" │DANH SACH CHUYEN BAY│\n";
    cout<<setw(135)<<right<<"└────────────────────┘\n";
    InGD();
    for(int i=0;i<this->soluong;i++){
        Cout(dem,this->DS[i]);
    }
    InEnd();
}

bool DanhSachChuyenBay::TimKiemChuyenBay(string DiemKhoiHanh,string DiemDen,string NgayDi,string NgayVe){
    int dem=1;
    for(int i=0;i<this->soluong;i++){
        if(this->DS[i].DiemDi==DiemKhoiHanh&&this->DS[i].NgayKhoiHanh.substr(6)==NgayDi&&this->DS[i].NgayVe.substr(6)==NgayVe&&this->DS[i].DiemDen==DiemDen){
            if(dem==1){
                cout<<setw(135)<<right<<"┌────────────────────┐\n";
                cout<<setw(95)<<right<<" │DANH SACH CHUYEN BAY│\n";
                cout<<setw(135)<<right<<"└────────────────────┘\n";
                InGD();
            }
            Cout(dem,this->DS[i]);
        }
    }
    if(dem>1){
        InEnd();
    }
    else{
        cout<<setw(60)<<" ";cout<<"Khong Tim Thay Chuyen Bay Phu Hop !\n";
        return 0;
    }
    return 1;
}

void DanhSachChuyenBay::ThemChuyenBay(ChuyenBay a){
    DS.push_back(a);
    soluong++;
}

int DanhSachChuyenBay::XoaChuyenBay(string a){
    if(DS.empty()){
        return 2;
    }
    for(auto i=DS.begin();i!=DS.end();i++){
        if((*i).MaChuyenBay==a){
            DS.erase(i);
            soluong--;
            return 1;
        }
    }
    return 0;
}
