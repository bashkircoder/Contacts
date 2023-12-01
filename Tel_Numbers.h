#ifndef CONTACTS_TEL_NUMBERS_H
#define CONTACTS_TEL_NUMBERS_H
#include <string>
#include <iostream>
#include <map>

using namespace std;

enum TypeOfPhoneNumber {
    Home, Mobile, Work
};

struct PhoneNumber {

    map <string, string> Telephone;
    string phone_number;

    map<string, string> Init (TypeOfPhoneNumber type_of_phone, string phone_number){

        switch (type_of_phone) {
            case Home:{
                Telephone.emplace("Home", phone_number);
                break;
            }
            case Mobile:{
                Telephone.emplace("Mobile", phone_number);
                break;
            }
            case Work: {
                Telephone.emplace("Work", phone_number);
                break;
            }
        }
        return Telephone;
    }
};


#endif //CONTACTS_TEL_NUMBERS_H
