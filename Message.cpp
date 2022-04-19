#include "Message.h"
#include<iostream>
using namespace std;

Message::Message() {

}
Message::Message(string tx, int t) {
    this->Content = tx;
    this->Time = t;
}

string Message::GetContent() {
    return this->Content;
}

int Message::GetTime() {
    return this->Time;
}

