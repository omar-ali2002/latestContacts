#include<iostream>
using namespace std;
#pragma once

class Message {
private:
    string Content;
    int Time;

public:
    Message();
    Message(string tx, int t);

    string GetContent();
    int GetTime();
};