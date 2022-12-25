#ifndef NGAYSINH_H
#define NGAYSINH_H
#include <iostream>
#pragma once
using namespace std;
class NgaySinh
{
	public:
		int ngay,thang,nam;
	public:

		NgaySinh();
		void nhap();
		int xuatngay();
		int xuatthang();
		int xuatnam();
};

#endif
