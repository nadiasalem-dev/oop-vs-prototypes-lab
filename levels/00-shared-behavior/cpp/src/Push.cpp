#include <string>
#include "Push.h"
using namespace std;


Push::Push(string type, string recipient, string message)
{
    this->type = type;
    this->recipient = recipient;
    this->message = message;
}
string Push::sendMessage()
{
    return "Sending " + type + " message to " + recipient + ": " + message;
}
