#ifndef DanhSachChuyenBay_hpp
#define DanhSachChuyenBay_hpp
#include <iostream>
#include"ChuyenBay.hpp"
class DanhSachChuyenBay{
public:
    vector<ChuyenBay> DS;
    int soluong;
public:
    DanhSachChuyenBay();
    void in();
    void Cout(int&,ChuyenBay);
    void InGD();
    void InEnd();
    bool TimKiemChuyenBay(string,string,string,string);
    void ThemChuyenBay(ChuyenBay);
    int XoaChuyenBay(string);
    friend class DatVe;
};







#endif
