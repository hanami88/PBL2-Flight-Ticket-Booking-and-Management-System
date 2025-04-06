#ifndef DatVe_hpp
#define DatVe_hpp
#include <iostream>
#include<iomanip>
#include"DanhSachChuyenBay.hpp"
using namespace std;
#include"ChuyenBayDaDat.hpp"
class DatVe{
protected:
    vector<ChuyenBayDaDat> v;
    int n;
public:
    DatVe();
    void in(int);
    void them(DanhSachChuyenBay&,string,string,string,string);
    int xoa(DanhSachChuyenBay&,string);
    int kiemtraMCB(DanhSachChuyenBay&,string);
};





#endif
