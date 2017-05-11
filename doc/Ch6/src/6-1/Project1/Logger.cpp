#include "Logger.h"

namespace Project1 {

    Logger::Logger()
    {

    }

    void Logger::Log(System::Object^ msg) 
    {
        Console::WriteLine(msg);
    }

    void Logger::Debug(System::Object^ msg)
    {
        Debug::WriteLine(msg);
    }

}
