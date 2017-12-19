/*
 * ThiSinh.cpp
 *
 *  Created on: Dec 19, 2017
 *      Author: susu
 */

#include "ThiSinh.h"
map <int, ThiSinh*> mymap;


ThiSinh::ThiSinh()
{
}


ThiSinh::~ThiSinh()
{
}
ThiSinh::ThiSinh(string mssv, string name, int namsinh, int diem)
{
	m_MSSV = mssv;
	m_name = name;
	m_namsinh = namsinh;
	m_diem = diem;
}
void ThiSinh::create(string mssv, string name, int namsinh, int diem)
{
	static int i;
	ThiSinh* pThiSinh = new ThiSinh();
	pThiSinh->m_MSSV = mssv;
	pThiSinh->m_name = name;
	pThiSinh->m_namsinh = namsinh;
	pThiSinh->m_diem = diem;
	mymap.insert(std::pair<int, ThiSinh*>(i, pThiSinh));
	i++;
}
void ThiSinh::display()
{
	for (map <int, ThiSinh*>::iterator it = mymap.begin(); it != mymap.end(); ++it)
	{
		static int i = 1;
		cout << "Sinh vien " << i << " :" << endl;
		cout << it->second->m_MSSV << "     ";
		cout << it->second->m_name << "     ";
		cout << it->second->m_namsinh << "     ";
		cout << it->second->m_diem << endl << endl;
		i++;
	}

}
