#include <ctime>
#include <iostream>
#include <stdio.h>

#include "CTime.h"

using namespace std;


CTime::CTime()
{
   time_t rawtime;                    // die fundementale zeit-erithmetik deklarieren
   struct tm * timeinfo;              // die  Zeit-Struktur deklarieren

   time (&rawtime);                   // die lokale zeit herausfinden
   timeinfo = localtime (&rawtime);   // lokale zeit ins timeinfo zuweisen

   mHour   =  timeinfo->tm_hour;
   mMinute =  timeinfo->tm_min;
}

CTime::CTime(int hour,int minute, int second)
{
    mHour    = hour;
    mMinute  = minute;
    mSecond  = second;
}

CTime::CTime(string timestring)
{
  struct tm tm;
  strptime(timestring.c_str(), "%H:%M", &tm);

  mHour = tm.tm_hour;
  mMinute = tm.tm_min;
}

void CTime::print()
{
    printf("%02d:%02d:%02d", mHour, mMinute, mSecond);
}

int CTime::getHour()
{
    return xmHour;
}

int CTime::getMinute()
{
    return mMinute;
}

int CTime::getSecond()
{
    return mSecond;
}

long CTime::getInSeconds() {
  return ((mHour * 3600) + (mMinute * 60) + mSecond);
}
