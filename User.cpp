#include<bits/bits-stdc++.h>
#include "User.h"
#include<regex>
#include"assert.h"

using namespace std;

User::User() {

}
User::User(string User, string Pass, int id) {
    this->Username = User;
    this->Password = Pass;
    this->ID = id;
}

string User::GetUsername() {
    return this->Username;
}

string User::GetPassword() {
    return this->Password;
}

void User::addContact(int userID)
{
    
    for (auto i : Contacts){
        assert(userID!=i && " !!!! Contact You trying to add is already exist !!!!");
    }
    Contacts.push_back(userID);
}

void User::displayContacts(int userID,User data[])
{
    User user = data[userID];

    if (user.Contacts.empty())
        cout << "Contact List is Empty !! " << endl;
    else {
        cout << "---------------------\n";
        cout << "You have " << user.Contacts.size() << " Contacts." << endl;
        for (int i = 0; i < user.Contacts.size(); i++)
        {    
             cout << "Contact "<<i+1<< " Name : "<<data[user.Contacts.at(i)].GetUsername() << endl;  
        }
    }
}


void User::searchForContact(string name, User data[]) {
    
    transform(name.begin(), name.end(), name.begin(),::tolower);
    User user;
    bool found = true;

    string pattern = "(.)*";
    for (auto c : name) {
        pattern.push_back('[');
        pattern.push_back(c);
        pattern.push_back(']');
    }
    int userID;
    pattern += "(.)*";
    regex e(pattern);

    for (int i = 0; i < this->Contacts.size(); i++)
    {
        userID = this->Contacts.at(i);
        user = data[userID];
        bool match = regex_match(user.GetUsername(), e);
        if (match)
        {
            cout << "---------------------\n";
            cout <<"Contact name : "<< user.GetUsername() << endl;
            cout << "Contact ID : " << user.ID << endl;
            found = false;
        } 
    }
    if (found) {
        cout << "---------------------\n";
        cout << "Contact not Found !!" << endl;
    }
}


User::~User() {

    
}

