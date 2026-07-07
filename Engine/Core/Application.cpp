#include "Application.h"
#include <iostream>

namespace GRaven{
    Application::Application()
    {
        std::cout<<"G-Raven Engine Initialized" << std:: endl;
        }

    void Application::Run(){
        std::cout<<"G-Raven Engine is running!" <<std::endl;
        }
}