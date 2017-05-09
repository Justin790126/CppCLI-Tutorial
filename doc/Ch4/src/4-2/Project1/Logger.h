#pragma once

namespace Project1 {

    using namespace System;
    using namespace System::Diagnostics;

    ref class Logger
    {
    public:
        Logger();

        void Log(System::Object^ msg);
        void Debug(System::Object^ msg);
    };


}

