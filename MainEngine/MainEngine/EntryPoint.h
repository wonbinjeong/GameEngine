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
    auto app = MainEngine::CreateApplication();
    app->Run();
    delete app;
}

#endif /* EntryPoint_h */
