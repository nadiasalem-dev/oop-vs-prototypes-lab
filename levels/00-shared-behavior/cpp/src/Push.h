#include <string>
class Push{
    private:
        std::string recipient;
        std::string message;
        std::string type;
    public:
        Push(std::string, std::string, std::string);
        std::string sendMessage();
};