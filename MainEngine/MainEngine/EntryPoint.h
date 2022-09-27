//
//  EntryPoint.h
//  GameEngine
//
//  Created by Wonbin Jeong on 2022-09-21.
//

#ifndef EntryPoint_h
#define EntryPoint_h

extern MainEngine::Application* MainEngine::CreateApplication();

int main(int argc, char** argv)
{
    MainEngine::Log::Init();
    ME_CORE_WARN("Initialized log!");
    ME_INFO("Hello!");
    
    auto app = MainEngine::CreateApplication();
    app->Run();
    delete app;
}

#endif /* EntryPoint_h */
