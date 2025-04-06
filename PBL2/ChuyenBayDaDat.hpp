#ifndef ChuyenBayDaDat_hpp
#define ChuyenBayDaDat_hpp
#include <iostream>
#include<iomanip>
#include"ChuyenBay.hpp"
using namespace std;

class ChuyenBayDaDat{
protected:
    ChuyenBay CB;
    string CCCD,ten;
    string gioitinh;
public:
    ChuyenBayDaDat(ChuyenBay,string,string,string);
    friend class DatVe;
};





#endif
