#include <string>
#include "Email.h"
using namespace std;

Email::Email(string type, string recipient, string message)
{
    this->type = type;
    this->recipient = recipient;
    this->message = message;
}
string Email::sendMessage()
{
    return "Sending " + type + " message to " + recipient + ": " + message;
}
