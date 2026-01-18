#include <iostream>
#include <string>
#include "Push.h"
#include "Email.h"
#include "Sms.h"
using namespace std;
int main()
{
    string recipient;
    string message;
    int num;
    cout << "Enter 1 if you want to send a push message. Enter 2 if you want to send a sms message 3 if you want to email " << endl;
            cin >>
        num;
    cin.ignore();
    if (num == 1)
    {
        cout << "What is the recipient's name?" << endl;
        getline(cin, recipient);
        cout << "What message do you want to send them?" << endl;
        getline(cin, message);
        Push put("push", recipient, message);
        cout << put.sendMessage() << endl;
    }
    else if (num == 2)
    {
        cout << "What is the recipient's name?" << endl;
        getline(cin, recipient);
        cout << "What message do you want to send them?" << endl;
        getline(cin, message);
        Sms put("sms", recipient, message);
        cout << put.sendMessage() << endl;
    }
    else if (num == 3)
    {
        cout << "What is the recipient's name?" << endl;
        getline(cin, recipient);
        cout << "What message do you want to send them?" << endl;
        getline(cin, message);
        Email put("email", recipient, message);
        cout << put.sendMessage() << endl;
    }
    return 0;
}