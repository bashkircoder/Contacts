#ifndef CONTACTS_BIRTH_DATE_H
#define CONTACTS_BIRTH_DATE_H
#include <iostream>
#include <string>

using namespace std;

struct Date {
    int Day;
    int Month;
    int Year;

    void InitBirthdayDate(int Day, int Month, int Year){
        this -> Day = Day;
        this -> Month = Month;
        this -> Year = Year;
    }

    string BirthdayDateToString (){
        string Correct_Date;
        if (Day < 10) {
            Correct_Date = Correct_Date + "0" + to_string(Day) + ".";
        } else Correct_Date = Correct_Date + to_string(Day) + ".";
        if (Month < 10) {
            Correct_Date = Correct_Date + "0" + to_string(Month) + ".";
        } else Correct_Date = Correct_Date + to_string(Month) + ".";
        Correct_Date = Correct_Date + to_string(Year);

        return Correct_Date;
    }
};


#endif //CONTACTS_BIRTH_DATE_H
