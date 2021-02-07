//
// Created by MSI on 2/7/2021.
//

#ifndef UNTITLED1_QUANLYNHANVIEN_H
#define UNTITLED1_QUANLYNHANVIEN_H

#include <vector>
#include "string"
#include "NhanVien.h"

using namespace std;

class QuanLyNhanVien {
public:
    explicit QuanLyNhanVien(string tentep);
    void ketquatimkiem() const;
    void hoithoai() const;

private:
    vector<NhanVien> nhansu;
};


#endif //UNTITLED1_QUANLYNHANVIEN_H
