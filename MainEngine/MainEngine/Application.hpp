#ifndef Application_hpp
#define Application_hpp

namespace MainEngine {

class Application
{
public:
    Application();
    ~Application();
    
    void Run();
};

// to be defined in client
Application* CreateApplication();

}

#endif /* Application_hpp */
