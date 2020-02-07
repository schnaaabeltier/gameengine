#pragma once

#include <memory>
#include <string>

#include "GLFW/glfw3.h"

void destroyGlfwWindow(GLFWwindow *window) {
    glfwDestroyWindow(window);
}

class Application {
public:
    Application(std::string name, unsigned int width, unsigned int height);
    ~Application();
    void run();

protected:
    void createWindow();

    std::string name;
    unsigned int width;
    unsigned int height;

    std::unique_ptr<GLFWwindow, void(*)(GLFWwindow*)> window;
};