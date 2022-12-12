#ifndef SRC_REMINDER_H_
#define SRC_REMINDER_H_

#include <string>
#include <ctime>

class Reminder {
public:
    Reminder();
    Reminder(tm time, std::string header, std::string text);
    ~Reminder();
private:
    tm          time;
    std::string header;
    std::string text;
};

#endif  // SRC_REMINDER_H_