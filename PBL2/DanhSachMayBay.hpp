#ifndef DanhSachMayBay_hpp
#define DanhSachMayBay_hpp
#include <iostream>
#include"MayBay.hpp"
class DanhSachMayBay{
protected:
    vector<MayBay> DanhSach;
public:
    DanhSachMayBay();
    void InDanhSach();
    void Them(const MayBay&);
    int Xoa(string);
};



#endif
