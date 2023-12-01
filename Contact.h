#ifndef CONTACTS_CONTACT_H
#define CONTACTS_CONTACT_H
#include "Birth_Date.h"
#include "Tel_Numbers.h"
#include "Adress.h"
#include "Name.h"

struct Contact{

    string Full_Name;
    string Birth_Date;
    string Full_Adress;
    map<string,string> Telephone;
    string Email;

    Name name;
    Date birth_date;
    PhoneNumber telephone;
    Adress adress;



    void InitContact (Name name, Date birth_date, Adress adress, PhoneNumber telephone, string email){

        this -> Full_Name = name.GetFullName();
        this -> Birth_Date = birth_date.BirthdayDateToString();
        this -> Full_Adress = adress.AdressToString();
        this -> Telephone = telephone.Telephone;
        this -> Email = email;


    }

};





#endif //CONTACTS_CONTACT_H
