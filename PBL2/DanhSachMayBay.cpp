#include "DanhSachMayBay.hpp"
#include<fstream>
#include<iomanip>
#include<iostream>
using namespace std;
DanhSachMayBay::DanhSachMayBay(){
    ifstream f("DanhSachMayBay.txt",ios::in);
    if(!f.is_open()){
        return;
    }
    for(int i=0;i<5;i++){
        string a,b,c;
        getline(f,a);
        getline(f,b);
        getline(f,c);
        DanhSach.push_back(MayBay(a,b,c));
    }
    f.close();
}

void DanhSachMayBay::InDanhSach(){
    int k=1;
    cout<<setw(133)<<right<<"┌─────────────────┐\n";
    cout<<setw(99) <<"│DANH SACH MAY BAY│\n";
    cout<<setw(133)<<right<<"└─────────────────┘\n";
    cout<<setw(328)<<"┌──────────────────────────────────────────────────────────────────────────────────────────────┐\n";
    cout<<setw(146)<<"│  STT    │       Hang May Bay       │        So Hieu May Bay        │       Loai May Bay      │\n";
    cout<<setw(328)<<"│──────────────────────────────────────────────────────────────────────────────────────────────│\n";
    for(MayBay &i:DanhSach){
        cout<<setw(45)<<right<<"│   "<<setw(6)<<left<<k++<<setw(8)<<left<<"│"
        <<setw(21)<<left<<i.HangHangKhong<<setw(14)<<left<<"│"
        <<setw(20)<<left<<i.SoHieu<<setw(10)<<left<<"│"
        <<setw(18)<<left<<i.Loai<<"│"<<endl;
    }
    cout<<setw(328)<<right<<"└──────────────────────────────────────────────────────────────────────────────────────────────┘\n";
}

void DanhSachMayBay::Them(const MayBay& a){
    DanhSach.push_back(a);
}

int DanhSachMayBay::Xoa(string a){
    if(DanhSach.empty()){
        return 2;
    }
    for(auto i=DanhSach.begin();i!=DanhSach.end();i++){
        if((*i).SoHieu==a){
            DanhSach.erase(i);
            return 1;
        }
    }
    return 3;
}
