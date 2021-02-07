//
// Created by MSI on 2/7/2021.
//

#include "NhanVien.h"

const string & NhanVien::getTen() const {
    return ten;
}

const string & NhanVien::getSo() const {
    return so;
}

NhanVien::NhanVien(const string &ten, const string &so) : ten(ten), so(so) {}

