#ifndef CONTACTS_ADRESS_H
#define CONTACTS_ADRESS_H
#include <string>

using namespace std;

struct Adress {
    int Index;
    string Region;
    string City;
    string Street;
    int House_Number;
    int Flat_Number;

    void Init ( int Index, string Region, string City, string Street, int House_Number, int Flat_Number){
        this -> Index = Index;
        this -> Region = Region;
        this -> City = City;
        this -> Street = Street;
        this -> House_Number = House_Number;
        this -> Flat_Number = Flat_Number;
    }

    string AdressToString (){
        string Full_Adress;
        Full_Adress = to_string(Index) + ", " + Region + ", " + City + ",\n" + Street + ", " + to_string(House_Number) + "-" + to_string(Flat_Number);
        return Full_Adress;
    }


};



#endif //CONTACTS_ADRESS_H
