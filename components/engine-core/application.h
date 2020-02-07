#pragma once

#include <memory>
#include <string>

#include "GLFW/glfw3.h"


class Application {
public:
    Application(std::string name, int width, int height);
    ~Application();
    void run();

protected:
    void createWindow();

    std::string name;
    int width;
    int height;

    std::unique_ptr<GLFWwindow, std::function<void(GLFWwindow*)>> window;
};