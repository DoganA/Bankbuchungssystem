#ifndef TTIME_H
#define TTIME_H

#include <string>

class CTime
{
    private:
        int mHour;
        int mMinute;
        int mSecond;

    public:
        CTime();
        CTime(int, int, int);
        CTime(std::string time);

        void print();
        int getHour();
        int getMinute();
        int getSekunde();

        long getInSeconds();
};

#endif // TTIME_H
