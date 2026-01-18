#include <string>
#include "Sms.h"
using namespace std;


Sms::Sms(std::string type, std::string recipient, std::string message)
{
    this->type = type;
    this->recipient = recipient;
    this->message = message;
}
std::string Sms::sendMessage()
{
    return "Sending " + type + " message to " + recipient + ": " + message;
}
