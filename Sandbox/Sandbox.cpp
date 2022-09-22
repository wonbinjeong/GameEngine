#include <iostream>
#include "MainEngine.h"

class Sandbox : public MainEngine::Application
{
    
public:
    Sandbox()
    {
        
    }
    
    ~Sandbox()
    {
        
    }
};

MainEngine::Application* MainEngine::CreateApplication()
{
    return new Sandbox();
}
