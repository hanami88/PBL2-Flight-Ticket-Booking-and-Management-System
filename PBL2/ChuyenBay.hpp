#ifndef ChuyenBay_hpp
#define ChuyenBay_hpp
#include <iostream>
using namespace std;
class ChuyenBay{
public:
    string HangHangKhong,MaChuyenBay,GiaTien,NgayKhoiHanh,NgayVe,DiemDen,DiemDi,TrangThai;
    int SoVeDaDat,SoLuongVe;
public:
    ChuyenBay(string,string,string,string,string,string,string,string,int,int);
    friend class DanhSachChuyenBay;
    friend class DatVe;
};


#endif
