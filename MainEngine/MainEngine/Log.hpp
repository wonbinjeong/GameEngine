//
//  Log.hpp
//  GameEngine
//
//  Created by Wonbin Jeong on 2022-09-26.
//

#ifndef Log_hpp
#define Log_hpp

#include <stdio.h>
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace MainEngine {

class Log
{
public:
    static void Init();
    
    inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
    inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
private:
    static std::shared_ptr<spdlog::logger> s_CoreLogger;
    static std::shared_ptr<spdlog::logger> s_ClientLogger;
};

}

#define ME_CORE_TRACE(...)   ::MainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_INFO(...)    ::MainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_WARN(...)    ::MainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_ERROR(...)   ::MainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define ME_CORE_FATAL(...)   ::MainEngine::Log::GetCoreLogger()->error(__VA_ARGS__)

#define ME_TRACE(...)   ::MainEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ME_INFO(...)    ::MainEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ME_WARN(...)    ::MainEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ME_ERROR(...)   ::MainEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define ME_FATAL(...)   ::MainEngine::Log::GetClientLogger()->error(__VA_ARGS__)

#endif /* Log_hpp */
