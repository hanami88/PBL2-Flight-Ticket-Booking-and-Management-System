#ifndef MayBay_hpp
#define MayBay_hpp
#include <iostream>
using namespace std;
class MayBay{
protected:
    string HangHangKhong,SoHieu,Loai;
public:
    MayBay(string,string,string);
    friend class DanhSachMayBay;
};


#endif
