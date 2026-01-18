#include <string>
class Sms{
    private:
        std::string recipient;
        std::string message;
        std::string type;
    public:
        Sms(std::string, std::string, std::string);
        std::string sendMessage();
};