#include <iostream>
#include <iomanip>
#include <ctime>
#include <time.h>
#include <stdio.h>

#include "CDate.h"

using namespace std;



CDate::CDate()
{

   time_t rawtime;                    // die fundementale zeit-erithmetik deklarieren
   struct tm * timeinfo;              // die  Zeit-Struktur deklarieren  mit den zeit-variablen

   time (&rawtime);                   // die lokale zeit herausfinden
   timeinfo = localtime (&rawtime);   // lokale zeit ins timeinfo zuweisen

    mDay   = timeinfo->tm_mday;
    mMonth = timeinfo->tm_mon + 1;
    mYear  = timeinfo->tm_year + 1900;
}

CDate::CDate(int mDay, int mMonth, int mYear)
{
    this->mDay   = mDay;
    this->mMonth = mMonth;
    this->mYear  = mYear;
}

void CDate::print(){
  cout << setw(2) << setfill('0') << right << mDay << "." << setw(2) << right
       << mMonth << "." << setw(2) << right << mYear << setfill(' ');
}

int CDate::getDay(){
    return mDay;
}
int CDate::getMonth(){
    return mMonth;
}
int CDate::getYear(){
    return mYear;
}
