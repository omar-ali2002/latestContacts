#include<bits/bits-stdc++.h>
#include "Message.h"
using namespace std;


class User {
private:
    int ID;
    string Username;
    string Password;
    vector<int> Contacts;
    /*----------------------------*/
    queue<Message> FavMsgs;
    vector<Message> RecMessages;
    stack<pair<int, Message>> SentMessages;

public:
    User();
    User(string User, string Pass, int id);
    string GetUsername();
    string GetPassword();
    /*----------------------------*/
    void addContact(int userID);
    void displayContacts(int userID, User data[]);
    void searchForContact(string name , User data[]);
    /*----------------------------*/
    ~User();
};





