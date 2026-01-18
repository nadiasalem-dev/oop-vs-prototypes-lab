#include <string>
class Email{
    private:
        std::string recipient;
        std::string message;
        std::string type;
    public:
        Email(std::string, std::string, std::string);
        std::string sendMessage();
};