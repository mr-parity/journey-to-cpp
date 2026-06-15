#include <iostream>

// logger class
class Logger
{

public:
    enum LogLevel : unsigned char
    {
        LevelInfo,
        LevelWarning,
        LevelError
    };

private:
    LogLevel m_log_level = LevelInfo;

public:
    void setLogLevel(LogLevel new_level)
    {
        m_log_level = new_level;
    }

    void Info()
    {
        if (m_log_level <= LevelInfo)
        {
            std::cout << "[\033[36mINFO\033[0m]:" << "This is some information" << std::endl;
        }
    }

    void Warning()
    {
        if (m_log_level <= LevelWarning)
        {
            std::cout << "[\033[33mWARNING\033[0m]: " << "This is some warning" << std::endl;
        }
    }

    void Error()
    {
        if (m_log_level <= LevelError)
        {
            std::cout << "[\033[31mERROR\033[0m]: " << "This is some error" << std::endl;
        }
    }
};

// main function
int main()
{

    // instansiate logger
    Logger logger;

    logger.setLogLevel(Logger::LevelInfo);

    // call member funtions
    logger.Info();
    logger.Warning();
    logger.Error();

    return 0;
}