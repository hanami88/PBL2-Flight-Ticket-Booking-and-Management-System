#include<iostream>
#include "DanhSachMayBay.hpp"
#include "DanhSachChuyenBay.hpp"
#include "DatVe.hpp"

using namespace std;
DatVe DV;
DanhSachChuyenBay DSCB;
DanhSachMayBay DSMB;
void DatVe();
void HuyVe();
void DanhSachChuyenBay();
void ThongTinChuyenBay(int);
void DanhSachMayBay();
void ThemChuyenBay();
void ThemMayBay();
void XoaChuyenBay();
void XoaMayBay();
void QuanLy();
void NguoiDung();
void inKhungTren();
void inKhungDuoi();
void DangNhap();
bool KiemTraNgayDi(int &ngay,int &thang,int &nam);
bool KiemTraNgayVe(int &ngaydi,int &thangdi,int &namdi,int &ngayve,int &thangve,int &namve);
string To_upper(string s);
bool CheckCCCD(string CCCD);
bool NgayGio(int,int);
void GiaoDien();

int main(){
    DangNhap();
    return 0;
}

void DangNhap(){
    GiaoDien();
    inKhungTren();
    cout<<setw(63)<<right<<"│"<<setw(28)<<right<<"1. CHUC NANG QUAN LY"<<setw(17)<<right<<"│\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(63)<<right<<"│"<<setw(27)<<right<<"2. CHUC NANG DAT VE"<<setw(18)<<right<<"│\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(63)<<right<<"│"<<setw(29)<<right<<"0. THOAT CHUONG TRINH"<<setw(16)<<right<<"│\n";
    inKhungDuoi();
    cout<<"\n"<<setw(60)<<" ";cout<<"Chon Chuc Nang : ";
    int tuychon;cin>>tuychon;cin.ignore();
    while(tuychon){
        if(tuychon==1){
            string MatKhau="1";
            cout<<setw(60)<<" ";cout<<"Mat Khau : ";
            string MatKhauNhap;getline(cin,MatKhauNhap);
            while(MatKhauNhap!=MatKhau){
                cout<<"\n"<<setw(50)<<" ";cout<<"Ban Vua Nhap Sai Mat Khau!\nVui Long Nhap Lai : ";
                getline(cin,MatKhauNhap);
            }
            QuanLy();
        }
        else if(tuychon==2){
            string tendangnhap,matkhau;
            cout<<"\n"<<setw(60)<<" ";cout<<"Ten Dang Nhap :";
            getline(cin,tendangnhap);
            cout<<"\n"<<setw(60)<<" ";cout<<"Mat Khau : ";
            getline(cin,matkhau);
            NguoiDung();
        }
        else {
            cout<<"\n"<<setw(50)<<" ";cout<<"Tuy Chon Chuc Nang Khong Hop Le !\n";
            cout<<setw(50)<<" ";cout<<"Xin Vui Long Nhap Lai : ";
            cin>>tuychon;cin.ignore();
            continue;
        }
        inKhungTren();
        cout<<setw(63)<<right<<"│"<<setw(28)<<right<<"1. CHUC NANG QUAN LY"<<setw(17)<<right<<"│\n";
        inKhungDuoi();
        inKhungTren();
        cout<<setw(63)<<right<<"│"<<setw(27)<<right<<"2. CHUC NANG DAT VE"<<setw(18)<<right<<"│\n";
        inKhungDuoi();
        inKhungTren();
        cout<<setw(63)<<right<<"│"<<setw(29)<<right<<"0. THOAT CHUONG TRINH"<<setw(16)<<right<<"│\n";
        inKhungDuoi();
        cout<<"\n"<<setw(60)<<" ";cout<<"Chon Chuc Nang : ";
        cin>>tuychon;cin.ignore();
    }
}

void inKhungTren(){
    cout<<setw(190)<<right<<"┌─────────────────────────────────────────┐\n";
}
void inKhungDuoi(){
    cout<<setw(190)<<right<<"└─────────────────────────────────────────┘\n";
}

void QuanLy(){
    inKhungTren();
    cout<<setw(108)<<right<<"│1. HIEN THI DANH SACH CHUYEN BAY         │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│2. HIEN THI DANH SACH MAY BAY            │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│3. THEM CHUYEN BAY                       │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│4. XOA CHUYEN BAY                        │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│5. THEM MAY BAY                          │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│6. XOA MAY BAY                           │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│7. THONG TIN KHACH HANG                  │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│0. THOAT KHOI CHUC NANG QUAN LY          │\n";
    inKhungDuoi();
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Chuc Nang : ";
    string chucnang;getline(cin,chucnang);
    while(chucnang!="0"){
        if(chucnang=="1"){
            DanhSachChuyenBay();
        }
        else if(chucnang=="2"){
            DanhSachMayBay();
        }
        else if(chucnang=="3"){
            ThemChuyenBay();
        }
        else if(chucnang=="4"){
            XoaChuyenBay();
        }
        else if(chucnang=="5"){
            ThemMayBay();
        }
        else if(chucnang=="6"){
            XoaMayBay();
        }
        else if(chucnang=="7"){
            ThongTinChuyenBay(1);
        }
        else{
            cout<<"\n"<<setw(60)<<" ";cout<<"Chuc Nang Khong Hop Le !\n";
            cout<<"\n"<<setw(60)<<" ";cout<<"Xin Vui Long Nhap Lai : ";
            getline(cin,chucnang);
            continue;
        }
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Chuc Nang : ";
        getline(cin,chucnang);
    }
}
void NguoiDung(){
    inKhungTren();
    cout<<setw(108)<<right<<"│1. DAT VE MAY BAY                        │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│2. THONG TIN CHUYEN BAY                  │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│3. HUY VE MAY BAY                        │\n";
    inKhungDuoi();
    inKhungTren();
    cout<<setw(108)<<right<<"│0. THOAT KHOI CHUC NANG NGUOI DUNG       │\n";
    inKhungDuoi();

    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Chuc Nang : ";
    string chucnang;getline(cin,chucnang);
    while(chucnang!="0"){
        if(chucnang=="1"){
            DatVe();
        }
        else if(chucnang=="2"){
            ThongTinChuyenBay(2);
        }
        else if(chucnang=="3"){
            HuyVe();
        }
        else{
            cout<<"\n"<<setw(60)<<" ";cout<<"Chuc Nang Khong Hop Le !\n";
            cout<<"\n"<<setw(60)<<" ";cout<<"Xin Vui Long Nhap Lai : ";
            getline(cin,chucnang);
            continue;
        }
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Chuc Nang : ";
        getline(cin,chucnang);
    }
}


void ThemMayBay(){
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Hang Hang Khong Cua May Bay : ";
    string Hang;getline(cin,Hang);
    Hang=To_upper(Hang);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap So Hieu May Bay : ";
    string SoHieu;getline(cin,SoHieu);
    SoHieu=To_upper(SoHieu);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Loai May Bay : ";
    string Loai;getline(cin,Loai);
    Loai=To_upper(Loai);
    MayBay a(Hang,SoHieu,Loai);
    DSMB.Them(a);
    cout<<"\n"<<setw(60)<<" ";cout<<"Them Thanh Cong !\n";
}

void XoaMayBay(){
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap So Hieu May Bay Can Xoa : ";
    string Hieu;getline(cin,Hieu);
    Hieu=To_upper(Hieu);
    int check=DSMB.Xoa(Hieu);
    if(check==1){
        cout<<"\n"<<setw(60)<<" ";cout<<"Xoa May Bay Thanh Cong !\n";
        return;
    }
    else if(check==2){
        cout<<"\n"<<setw(60)<<" ";cout<<"Chua Co May Bay Nao!\n";
        return;
    }
    else{
        while(check==3){
            cout<<"\n"<<setw(60)<<right<<" "<<"Ban Da Nhap So Hieu May Bay Khong Co Trong Danh Sach !\n";
            cout<<setw(60)<<right<<" "<<"Vui Long Nhap Lai : ";getline(cin,Hieu);
            Hieu=To_upper(Hieu);
            check=DSMB.Xoa(Hieu);
        }
        if(check==1){
            cout<<"\n"<<setw(60)<<" "<<"Xoa May Bay Thanh Cong !\n";
            return;
        }
        else if(check==2){
            cout<<"\n"<<setw(60)<<" "<<"Chua Co May Bay Nao!\n";
            return;
        }
    }
}

void ThemChuyenBay(){
    int NgayDi,ThangDi,NamDi,NgayVe=0,ThangVe=0,NamVe=0,GioVe=0,PhutVe=0,GioDi,PhutDi;
    string NgayDii,NgayVee;
    cout<<"\n"<<setw(60)<<" ";cout<<"Them Chuyen Bay Khu Hoi";
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap(1.Dong Y | 0.Tu Choi) : ";
    string chucnang;getline(cin,chucnang);
    while(chucnang!="1"&&chucnang!="0"){
        cout<<"\n"<<setw(60)<<" ";cout<<"Chuc Nang Khong Hop Le!";
        cout<<"\n"<<setw(60)<<" ";cout<<"Vui Long Nhap Lai : ";
        getline(cin,chucnang);
    }
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Hang Hang Khong : ";
    string Hang;getline(cin,Hang);
    Hang=To_upper(Hang);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Ma Chuyen Bay : ";
    string MaChuyenBay;getline(cin,MaChuyenBay);
    MaChuyenBay=To_upper(MaChuyenBay);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Gia Tien : ";
    string GiaTien;getline(cin,GiaTien);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Thoi Gian Di";
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Gio : ";cin>>GioDi;
    cout<<setw(60)<<" ";cout<<"Nhap Phut : ";cin>>PhutDi;
    cout<<setw(60)<<" ";cout<<"Ngay : ";cin>>NgayDi;
    cout<<setw(60)<<" ";cout<<"Thang : ";cin>>ThangDi;
    cout<<setw(60)<<" ";cout<<"Nam : ";cin>>NamDi;cin.ignore();
    if(chucnang=="1"){
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Thoi Gian Ve";
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Gio : ";cin>>GioVe;
        cout<<setw(60)<<" ";cout<<"Nhap Phut : ";cin>>PhutVe;
        cout<<setw(60)<<" ";cout<<"Ngay : ";cin>>NgayVe;
        cout<<setw(60)<<" ";cout<<"Thang : ";cin>>ThangVe;
        cout<<setw(60)<<" ";cout<<"Nam : ";cin>>NamVe;cin.ignore();
    }
    while(!NgayGio(GioDi,PhutDi)){
        cout<<"\n"<<setw(60)<<" ";cout<<"Gio Di Khong Hop Le, Nhap Lai : ";
        cout<<"\n"<<setw(60)<<" ";cout<<"Gio : ";cin>>GioDi;
        cout<<setw(60)<<" ";cout<<"Phut : ";cin>>PhutDi;cin.ignore();
    }
    while(!KiemTraNgayDi(NgayDi,ThangDi,NamDi)){
        cout<<"\n"<<setw(60)<<" ";cout<<"Thoi Gian Di Khong Hop Le, Nhap Lai : ";
        cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";cin>>NgayDi;
        cout<<"\n"<<setw(60)<<" ";cout<<"Thang : ";cin>>ThangDi;
        cout<<"\n"<<setw(60)<<" ";cout<<"Nam : ";cin>>NamDi;cin.ignore();
    }
    if(chucnang=="1"){
        while(!NgayGio(GioVe,PhutVe)){
            cout<<"\n"<<setw(60)<<" ";cout<<"Gio Ve Khong Hop Le, Nhap Lai : ";
            cout<<"\n"<<setw(60)<<" ";cout<<"Gio : ";cin>>GioVe;
            cout<<setw(60)<<" ";cout<<"Phut : ";cin>>PhutVe;cin.ignore();
        }
        while(!KiemTraNgayVe(NgayDi,ThangDi,NamDi,NgayVe,ThangVe,NamVe)){
            cout<<"\n"<<setw(60)<<" ";cout<<"Thoi Gian Ve Khong Hop Le, Nhap Lai : ";
            cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";cin>>NgayVe;
            cout<<"\n"<<setw(60)<<" ";cout<<"Thang : ";cin>>ThangVe;
            cout<<"\n"<<setw(60)<<" ";cout<<"Nam : ";cin>>NamVe;cin.ignore();
        }
    }
    string GioDii,PhutDii;
    if(GioDi<10){
        GioDii="0"+to_string(GioDi);
    }
    else{
        GioDii=to_string(GioDi);
    }
    if(PhutDi<10){
        PhutDii="0"+to_string(PhutDi);
    }
    else{
        PhutDii=to_string(PhutDi);
    }
    NgayDii=GioDii+":"+PhutDii+" "+to_string(NgayDi)+"/"+to_string(ThangDi)+"/"+to_string(NamDi);
    if(chucnang=="1"){
        string GioVee,PhutVee;
        if(GioVe<10){
            GioVee="0"+to_string(GioVe);
        }
        else{
            GioVee=to_string(GioVe);
        }
        if(PhutVe<10){
            PhutVee="0"+to_string(PhutVe);
        }
        else{
            PhutVee=to_string(PhutVe);
        }
        NgayVee=GioVee+":"+PhutVee+" "+to_string(NgayVe)+"/"+to_string(ThangVe)+"/"+to_string(NamVe);
    }
    else{
        NgayVee="       ";
    }
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Diem Di : ";
    string DiemKhoiHanh;getline(cin,DiemKhoiHanh);
    DiemKhoiHanh=To_upper(DiemKhoiHanh);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Diem Den : ";
    string DiemDen;getline(cin,DiemDen);
    DiemDen=To_upper(DiemDen);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap So Luong Ve Ban : ";
    int SoLuongVeban ;cin>>SoLuongVeban;cin.ignore();
    DSCB.ThemChuyenBay(ChuyenBay(Hang,MaChuyenBay,GiaTien,NgayDii,NgayVee,DiemKhoiHanh,DiemDen,"CON",SoLuongVeban,SoLuongVeban));  
    cout<<"\n"<<setw(60)<<" ";cout<<"Them Chuyen Bay Thanh Cong !\n";
}

void XoaChuyenBay(){
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Ma Chuyen Bay Can Xoa : ";
    string MaChuyenBay;getline(cin,MaChuyenBay);
    MaChuyenBay=To_upper(MaChuyenBay);
    int check=DSCB.XoaChuyenBay(MaChuyenBay);
    if(check==1){
        cout<<"\n"<<setw(60)<<" ";cout<<"Xoa Chuyen Bay Thanh Cong !\n";
        return ;
    }
    else if(check==2){
        cout<<"\n"<<setw(60)<<" ";cout<<"Chua Co Chuyen Bay Nao !\n";
        return;
    }
    else{
        while(check==0){
            cout<<"\n"<<setw(60)<<right<<" ";cout<<"Ban Da Nhap Ma Chuyen Bay Khong Co Trong Danh Sach !";
            cout<<"\n"<<setw(60)<<right<<" "<<"Vui Long Nhap Lai : ";getline(cin,MaChuyenBay);
            MaChuyenBay=To_upper(MaChuyenBay);
            check=DSCB.XoaChuyenBay(MaChuyenBay);
        }
        if(check==1){
            cout<<"\n"<<setw(60)<<" ";cout<<"Xoa Chuyen Bay Thanh Cong !\n";
            return;
        }
        else if(check==2){
            cout<<"\n"<<setw(60)<<" ";cout<<"Chua Co Chuyen Bay Nao !\n";
            return;
        }
    }
}

void DanhSachChuyenBay(){
    DSCB.in();
}

void ThongTinChuyenBay(int k){
    DV.in(k);
}

void DanhSachMayBay(){
    DSMB.InDanhSach();
}

void HuyVe(){
    string MCB;
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Ma Chuyen Bay Muon Huy : ";
    getline(cin,MCB);
    MCB=To_upper(MCB);
    int check=DV.xoa(DSCB,MCB);
    if(check==1){
        cout<<"\n"<<setw(60)<<" ";cout<<"Huy Chuyen Bay Thanh Cong!\n";
        return;
    }
    else if(check==2){
        cout<<"\n"<<setw(60)<<" ";cout<<"Ban Chua Co Chuyen Bay Nao !\n";
        return;
    }
    else {
        cout<<"\n"<<setw(60)<<" ";cout<<"Ban Chua Dat Chuyen Bay Nay!\n";
        return;
    }
}


void DatVe(){
    string CCCD,ten,MCB,NoiDi,NoiDen,NgayDii,NgayVee,gioitinh;
    int NgayDi,ThangDi,NamDi,NgayVe=0,ThangVe=0,NamVe=0;
    cout<<"\n"<<setw(60)<<" ";cout<<"Quy Khach Co Muon Dat Chuyen Bay Khu Hoi Khong\n";
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap(1.Dong Y | 0.Tu Choi) : ";
    string chucnang;getline(cin,chucnang);
    while(chucnang!="1"&&chucnang!="0"){
        cout<<"\n"<<setw(60)<<" ";cout<<"Chuc Nang Khong Hop Le!";
        cout<<"\n"<<setw(60)<<" ";cout<<"Vui Long Nhap Lai : ";
        getline(cin,chucnang);
    }
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Noi Di : ";
    getline(cin,NoiDi);
    NoiDi=To_upper(NoiDi);
    cout<<setw(60)<<" ";cout<<"Nhap Noi Den : ";
    getline(cin,NoiDen);
    NoiDen=To_upper(NoiDen);
    cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Thoi Gian Di";
    cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";
    cin>>NgayDi;
    cout<<setw(60)<<" ";cout<<"Thang : ";
    cin>>ThangDi;
    cout<<setw(60)<<" ";cout<<"Nam : ";
    cin>>NamDi;cin.ignore();
    if(chucnang=="1"){
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Thoi Gian Ve";
        cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";
        cin>>NgayVe;
        cout<<setw(60)<<" ";cout<<"Thang : ";
        cin>>ThangVe;
        cout<<setw(60)<<" ";cout<<"Nam : ";
        cin>>NamVe;cin.ignore();
    }
    while(!KiemTraNgayDi(NgayDi,ThangDi,NamDi)){
        cout<<"\n"<<setw(60)<<" ";cout<<"Thoi Gian Di Khong Hop Le, Nhap Lai : ";
        cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";
        cin>>NgayDi;
        cout<<"\n"<<setw(60)<<" ";cout<<"Thang : ";
        cin>>ThangDi;
        cout<<"\n"<<setw(60)<<" ";cout<<"Nam : ";
        cin>>NamDi;cin.ignore();
    }
    if(chucnang=="1"){
        while(!KiemTraNgayVe(NgayDi,ThangDi,NamDi,NgayVe,ThangVe,NamVe)){
            cout<<"\n"<<setw(60)<<" ";cout<<"Thoi Gian Ve Khong Hop Le, Nhap Lai : ";
            cout<<"\n"<<setw(60)<<" ";cout<<"Ngay : ";
            cin>>NgayVe;
            cout<<"\n"<<setw(60)<<" ";cout<<"Thang : ";
            cin>>ThangVe;
            cout<<"\n"<<setw(60)<<" ";cout<<"Nam : ";
            cin>>NamVe;cin.ignore();
        }
    }
    NgayDii=to_string(NgayDi)+"/"+to_string(ThangDi)+"/"+to_string(NamDi);
    if(chucnang=="1"){
        NgayVee=to_string(NgayVe)+"/"+to_string(ThangVe)+"/"+to_string(NamVe);
    }
    else{
        NgayVee=" ";
    }
    if(DSCB.TimKiemChuyenBay(NoiDi,NoiDen,NgayDii,NgayVee)){
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Ma Chuyen Bay : ";
        getline(cin,MCB);
        MCB=To_upper(MCB);
        int temp=DV.kiemtraMCB(DSCB,MCB);
        while (temp) {
            if(temp==1){
                cout<<setw(60)<<" ";cout<<"Chuyen Bay Da Het Cho !\n";
                cout<<setw(60)<<" ";cout<<"Nhap 1 De Tiep Tuc Dat Chuyen Bay Khac !\n";
                cout<<setw(60)<<" ";cout<<"Nhap 2 De Thoat !\n";
                cout<<setw(60)<<" ";cout<<"Nhap : ";
                int k;cin>>k;cin.ignore();
                while(k!=1&&k!=2){
                    cout<<setw(60)<<" ";cout<<"Chuc Nang Khong Hop Le !\n";
                    cout<<setw(60)<<" ";cout<<"Nhap Lai : ";
                    cin>>k;cin.ignore();
                }
                if(k==1){
                    cout<<setw(60)<<" ";cout<<"Nhap Ma Chuyen Bay : ";
                    getline(cin,MCB);
                    MCB=To_upper(MCB);
                    temp=DV.kiemtraMCB(DSCB,MCB);
                    continue;
                }
                else if(k==2){
                    return;
                }
            }
            else if(temp==2){
                cout<<setw(60)<<" ";cout<<"Ma Chuyen Bay Khong Hop Le !\n";
                cout<<setw(60)<<" ";cout<<"Nhap Lai Ma Chuyen Bay : ";
                getline(cin,MCB);
                MCB=To_upper(MCB);
                temp=DV.kiemtraMCB(DSCB,MCB);
                continue;
            }
        }
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap CCCD : ";
        getline(cin,CCCD);
        while(!CheckCCCD(CCCD)){
            cout<<setw(60)<<" ";cout<<"CCCD Khong Hop Le !\n";
            cout<<setw(60)<<" ";cout<<"Nhap Lai CCCD : ";
            getline(cin,CCCD);
        }
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Ho Va Ten : ";
        getline(cin,ten);
        ten=To_upper(ten);
        cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Gioi Tinh (0.Nam | 1.Nu ) : ";
        getline(cin,gioitinh);
        while(gioitinh!="0"&&gioitinh!="1"){
            cout<<"\n"<<setw(60)<<" ";cout<<"Nhap Gioi Tinh Khong Hop Le !\n";
            cout<<"\n"<<setw(60)<<" ";cout<<"Xin Vui Long Nhap Lai : ";
            getline(cin,gioitinh);
        }
        DV.them(DSCB,MCB,CCCD,ten,gioitinh);
        cout<<"\n"<<setw(60)<<" ";cout<<"\n"<<setw(60)<<" ";cout<<"Dat Ve Thanh Cong !\n";
    }
    else{
        return;
    }
}

bool KiemTraNgayDi(int &ngay,int &thang,int &nam){
    if(nam<2025){
        return false;
    }
    if(thang<=12){
        if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
            if(ngay<=31) return true;
            else return false;
        }
        else if(thang==4||thang==6||thang==9||thang==11){
            if(ngay<=30) return true;
            else return false;
        }
        else{
            if((nam%4==0&&nam%100!=0)||nam%400==0){
                if(ngay<=29) return true;
                else return false;
            }
            else {
                if(ngay<=28) return true;
                else return false;
            }
        }
    }
    return false;
}

bool KiemTraNgayVe(int &ngaydi,int &thangdi,int &namdi,int &ngayve,int &thangve,int &namve){
    if(KiemTraNgayDi(ngayve,thangve,namve)){
        if(namve<namdi){
            return false;
        }
        else if(namve==namdi){
            if(thangve<thangdi){
                return false;
            }
            else if(thangve==thangdi){
                if(ngayve>=ngaydi){
                    return true;
                }
                else return false;
            }
            else{
                return true;
            }
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}

string To_upper(string s){
    for(int i=0;i<s.length();i++){
        if(islower(s[i])){
            s[i]-=32;
        }
    }
    return s;
}
bool CheckCCCD(string CCCD){
    if(CCCD.length()==12){
        return true;
    }
    return false;
}

bool NgayGio(int Gio,int Phut){
    if(Gio>=0&&Gio<=23&&Phut>0&&Phut<60){
        return true;
    }
    return false;
}


void GiaoDien(){
    cout<<setw(263)<<right<<"┌────────────────────────────────────────────────────────────────────┐\n";
    cout<<setw(127)<<right<<"│                         CHAO MUNG DEN VOI                          │\n";
    cout<<setw(127)<<right<<"│                      HE THONG DAT VE MAY BAY                       │\n";
    cout<<setw(127)<<right<<"│                                                                    │\n";
    cout<<setw(127)<<right<<"│ SINH VIEN THUC HIEN :                                              │\n";
    cout<<setw(127)<<right<<"│    NHOM : 23.99A                                                   │\n";
    cout<<setw(127)<<right<<"│    1. MAI ANH LUAN               MSSV:102230083  Lop:23T-Nhat2     │\n";
    cout<<setw(127)<<right<<"│    2. DOAN DUONG ANH KIET        MSSV:102230079  Lop:23T-Nhat2     │\n";
    cout<<setw(127)<<right<<"│                                                                    │\n";
    cout<<setw(127)<<right<<"│                                                                    │\n";
    cout<<setw(127)<<right<<"│                    GVC.ThS. Tran Ho Thuy Tien                      │\n";
    cout<<setw(127)<<right<<"│                                                                    │\n";
    cout<<setw(263)<<right<<"└────────────────────────────────────────────────────────────────────┘\n";
    string s;
    cout<<"ENTER DE TIEP TUC CHUONG TRINH...";
    getline(cin,s);
}
