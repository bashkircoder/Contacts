#include <iostream>
#include "Contact.h"

PhoneNumber WriteNumber(int choice);
void PrintContact(map<int, Contact*> contacts);

int main() {
    map<int, Contact*> contacts;

    string last_name;
    cout << "Enter last name of contact: "; cin >> last_name;

    string first_name;
    cout << "Enter first name of contact: "; cin >> first_name;

    string surname;
    cout << "Enter surname of contact: "; cin >> surname;

    Name name;
    name.InitName(last_name, first_name, surname);

    int day;
    cout << "Enter the day of birth: "; cin >> day;

    int month;
    cout << "Enter the month of birth: "; cin >> month;

    int year;
    cout << "Enter the year of birth: "; cin >> year;

    Date date;
    date.InitBirthdayDate(day, month, year);

    int index;
    cout << "Enter mail index: "; cin >> index;

    string region;
    cout << "Enter region: "; cin >> region;

    string city;
    cout << "Enter city: "; cin >> city;

    string street;
    cout << "Enter street: "; cin >> street;

    int house_number;
    cout << "Enter house number: "; cin >> house_number;

    int flat_number;
    cout << "Enter flat number: "; cin >> flat_number;

    Adress adress;
    adress.Init(index, region, city, street, house_number, flat_number);

    char status = 'n';
    PhoneNumber numbers;
    do{
    int choice;
    cout << "Choose type of telephone number: \n"
            "1. Home number\n"
            "2. Mobile number\n"
            "3. Work number" << endl;
    cin >> choice;
        numbers = WriteNumber(choice);
        cout << "Would you want to write another number? (y/n)" << endl;
        cin >> status;
    } while (status == 'y');

    string email;
    cout << "Enter e-mail: "; cin >> email;

    Contact contact;
    contact.InitContact(name, date, adress, numbers, email);

    contacts.emplace(1, &contact);

    PrintContact(contacts);


    return 0;
}

PhoneNumber WriteNumber(int choice){
    string phone_number;
    PhoneNumber Number;
    switch (choice) {
        case 1:{
            cout << "Enter the number:"; cin >> phone_number;
            Number.Init(Home, phone_number);
            return Number;
        }
        case 2:{
            cout << "Enter the number:"; cin >> phone_number;
            Number.Init(Mobile, phone_number);
            return Number;
        }
        case 3:{
            cout << "Enter the number:"; cin >> phone_number;
            Number.Init(Work, phone_number);
            return Number;
        }

    }
}

void PrintContact(map<int, Contact*> contacts){
    for(auto Person: contacts) {
        cout << "\n\nFull name: ";
        cout << Person.second->Full_Name << endl;
        cout << "Birthday: ";
        cout << Person.second->Birth_Date << endl;
        cout << "Adress: ";
        cout << Person.second->Full_Adress << endl;
        cout << "Telephone numbers: " << endl;
        for (auto item: Person.second->Telephone) {
            cout << item.first << ": " << item.second << endl;
        }
        cout << "e-mail: ";
        cout << Person.second->Email << endl;
    }

}