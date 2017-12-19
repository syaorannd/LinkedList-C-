/*
 * ThiSinh.h
 *
 *  Created on: Dec 19, 2017
 *      Author: susu
 */

#ifndef THISINH_H_
#define THISINH_H_

#include <iostream>
#include <string>
#include <map>
using namespace std;

class ThiSinh
{
public:
	void create(string, string, int, int);
	void display();
	ThiSinh();
	ThiSinh(string, string, int, int);
	virtual ~ThiSinh();
private:
	string m_MSSV;
	string m_name;
	int m_namsinh;
	int m_diem;
};

#endif /* THISINH_H_ */
