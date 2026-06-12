#include<iostream>

// logger class
class Logger {

    public:
        int log_level_info = 0;
        int log_level_warning = 1;
        int log_level_error = 2;

    private:
        int m_log_level = 0;

    public:
        void setLogLevel(int log_level) {
            m_log_level = log_level;
        }

        void Info() {
            if(m_log_level <= log_level_info) {
                std::cout<<"[\033[36mINFO\033[0m]:"<<"This is some information"<<std::endl;
            }
        }

        void Warning() {
            if(m_log_level <= log_level_warning) {
                std::cout<<"[\033[33mWARNING\033[0m]: "<<"This is some warning"<<std::endl;
            }
        }

        void Error() {
            if(m_log_level <= log_level_error) {
                std::cout<<"[\033[31mERROR\033[0m]: "<<"This is some error"<<std::endl;
            }
        }
};

// main function
int main() {

    // instansiate logger
    Logger logger;

    logger.setLogLevel(logger.log_level_info);

    // call member funtions
    logger.Info();
    logger.Warning();
    logger.Error();

    return 0;
}