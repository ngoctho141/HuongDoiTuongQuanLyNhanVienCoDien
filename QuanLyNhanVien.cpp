//
// Created by MSI on 2/7/2021.
//

#include <fstream>
#include "iostream"
#include "QuanLyNhanVien.h"
using namespace std;
void QuanLyNhanVien::hoithoai() const {
    string sotim;
    while(true){
        cout << "Tim nhan vien theo ten (x = ket thuc)" << endl;
        cin >> sotim;
        if(sotim == "X" || sotim == "x"){
            break;
        }
        bool timthay = false;
        for (auto & ng : nhansu){
            if(ng.getSo() == sotim){
                timthay = true;
                cout << ng.getTen() << " duoc tim thay." << endl;
                timthay = true;
                break;
            }
        }
        if(!timthay){
            cout << "Khong tim thay." << endl;
        }
    }
}

void QuanLyNhanVien::ketquatimkiem() const {
    if(nhansu.empty()){
        cout << "Khong co du lieu" << endl;
    } else {
        for (const auto& ng : nhansu){
            cout << ng.getTen() << " " << ng.getSo() << endl;
        }
    }

}

QuanLyNhanVien::QuanLyNhanVien(string tentep) {
    ifstream dulieu(tentep);
    if(!dulieu.good()){
        cerr << tentep << " khong mo duoc" ;
        exit(-1);
    }
    while(dulieu){
        string dong;
        getline(dulieu, dong);
        if(dong=="#"){
            break;
        }
        string ten = dong;
        getline(dulieu, dong);
        string so = dong;
        nhansu.push_back(NhanVien(ten,so));
    }
    dulieu.close();
}
