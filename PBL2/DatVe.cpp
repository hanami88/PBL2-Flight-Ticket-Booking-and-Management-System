#include "DatVe.hpp"

DatVe::DatVe():n(0){}

void DatVe::in(int k){
    if(n==0){
        if(k==1){
            cout<<setw(91)<<right<<"Chua Co Thong Tin Khach Hang !\n";
            return;
        }
        else{
            cout<<setw(60)<<right<<"Ban Chua Dat Chuyen Bay Nao !\n";
            return;
        }
    }
    int dem=1;
    cout<<setw(151)<<right<<"┌──────────────────────────┐\n";
    cout<<setw(99)<<right<<"  │   THONG TIN CHUYEN BAY   │\n";
    cout<<setw(151)<<right<<"└──────────────────────────┘\n";
    cout<<left<<"┌─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐\n";
    cout<<"│  STT  │ Ma Chuyen Bay │   Hang Hang Khong   │      CCCD      │     Ho Va Ten     │ Gioi Tinh │     Ngay Di     │     Ngay Ve     │    Diem Di   │   Diem Den    │\n";
    cout<<left<<"│─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────│\n";
    for(ChuyenBayDaDat &i:this->v){
        cout<<"│   "<<setw(4)<<left<<dem++<<setw(8)<<left<<"│"
         <<setw(10)<<left<<i.CB.MaChuyenBay<<setw(6)<<left<<"│"
         <<setw(18)<<left<<i.CB.HangHangKhong<<setw(5)<<left<<"│"
         <<setw(14)<<left<<i.CCCD<<setw(4)<<left<<"│"
         <<setw(18)<<left<<i.ten<<setw(6)<<left<<"│"
        <<setw(8)<<left<<i.gioitinh<<setw(4)<<left<<"│"
        <<setw(16)<<left<<i.CB.NgayKhoiHanh<<setw(4)<<left<<"│"
        <<setw(16)<<left<<i.CB.NgayVe<<setw(5)<<left<<"│"
        <<setw(12)<<left<<i.CB.DiemDi<<setw(6)<<left<<"│"
        <<setw(12)<<left<<i.CB.DiemDen<<"│"<<endl;
    }
    cout<<"└─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘\n";
    cout<<endl;
}

void DatVe::them(DanhSachChuyenBay& b,string a,string c,string e,string d){
    for(ChuyenBay &i:b.DS){
        if(i.MaChuyenBay==a){
            if(i.SoVeDaDat>0){
                string CCCD=c,ten=e;
                string gioitinh=d;
                string l="";
                if(gioitinh=="0"){
                    l="NAM";
                }
                else if(gioitinh=="1"){
                    l="NU";
                }
                ChuyenBayDaDat Q(i,CCCD,ten,l);
                this->v.push_back(Q);
                i.SoVeDaDat--;
                if(i.SoVeDaDat==0){
                    i.TrangThai="HET";
                }
                n++;
            }
            else{
            }
        }
    }
}

int DatVe::xoa(DanhSachChuyenBay& b,string a){
    if(n>0){
        for(auto i=this->v.begin();i!=v.end();i++){
            if((*i).CB.MaChuyenBay==a){
                for(ChuyenBay &p:b.DS){
                    if(p.MaChuyenBay==a){
                        if(p.SoVeDaDat==0){
                            p.SoVeDaDat++;
                            p.TrangThai="CON";
                        }
                        else p.SoVeDaDat++;
                        break;
                    }
                }
                this->v.erase(i);
                n--;
                return 1 ;
            }
        }
    }
    else{
        return 2;
    }
    return 3;
}
int DatVe::kiemtraMCB(DanhSachChuyenBay& b,string MCB){
    for(ChuyenBay &i:b.DS){
        if(i.MaChuyenBay==MCB){
            if(i.SoVeDaDat==0){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
    return 2;
}
