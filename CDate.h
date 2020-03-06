#ifndef CDATE _H
    #define CDATE _H

    #include <string>

class CDate
{
    private:
        int mDay;
        int mMonth;
        int mYear;

    public:
        CDate();
        CDate(int mDay, int mMonth, int mYear);

        void print();
        int getDay();
        int getMonth();
        int getYear();
};

#endif // CDATE _H

