#include "logger.hpp"

int main()
{
    Logger *logger = NULL;

    logger = Logger::getLogger();
    logger->log("Hello 1\n");

    Logger *logger2 = Logger::getLogger() ;
    logger2->log("Hello 2\n");
}