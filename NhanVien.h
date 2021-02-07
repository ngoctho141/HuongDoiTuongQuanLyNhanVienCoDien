//
// Created by MSI on 2/7/2021.
//

#ifndef UNTITLED1_NHANVIEN_H
#define UNTITLED1_NHANVIEN_H
#include "string"
using namespace std;
class NhanVien {
public:
    NhanVien(const string &ten, const string &so);

    const string & getTen() const;

    const string & getSo() const;

private:
    string ten;
    string so;
};


#endif //UNTITLED1_NHANVIEN_H
