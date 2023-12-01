#ifndef CONTACTS_NAME_H
#define CONTACTS_NAME_H
#include <string>

using namespace std;

struct Name{

    string First_Name;
    string Last_Name;
    string Surname;

    void InitName (string First_Name, string Last_Name, string Surname){
        this -> First_Name = First_Name;
        this -> Last_Name = Last_Name;
        this -> Surname = Surname;
    }

    string GetFullName (){
        string Full_name;
        Full_name = First_Name + " " + Last_Name + " " + Surname;
        return Full_name;
    }

};



#endif //CONTACTS_NAME_H
