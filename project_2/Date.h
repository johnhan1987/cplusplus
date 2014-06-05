#ifndef DATE_H
#define DATE_H
 
#include <iostream>
using namespace std;

class Date
{
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;
 
    Date() { } // private default constructor
 
public:
    Date(int nMonth, int nDay, int nYear);
 
    void SetDate(int nMonth, int nDay, int nYear);
 
    //int GetMonth() { return m_nMonth; cout<<m_nMonth<<endl;}
    //int GetDay()  { return m_nDay; cout<<m_nDay<<endl;}
    //int GetYear() { return m_nYear; cout<<m_nYear<<endl;}

    int GetMonth() { return m_nMonth; cout<<"hello world!"<<endl;}
    int GetDay()  { return m_nDay;}
    int GetYear() { return m_nYear;}
};
 
#endif
