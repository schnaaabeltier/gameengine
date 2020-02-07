#include <iostream>

#include "application.h"

Application::Application(std::string name, unsigned int width, unsigned int height) : name(std::move(name)), width(width), height(height) {
    if (!glfwInit()) {
        std::cerr << "GLFW initialization failed!" << std::endl;
    }
    createWindow();
}

Application::~Application() {

}

void Application::createWindow() {
    window = std::make_unique<GLFWwindow, void(*)(GLFWwindow*)>(glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr), destroyGlfwWindow);
}

void Application::run() {

}

