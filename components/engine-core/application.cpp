#include <functional>
#include <iostream>

#include "application.h"

Application::Application(std::string name, int width, int height) : name(std::move(name)), width(width), height(height) {
    if (!glfwInit()) {
        std::cerr << "GLFW initialization failed!" << std::endl;
    }

    auto rawWindow = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    this->window = std::unique_ptr<GLFWwindow, std::function<void(GLFWwindow*)>>(rawWindow, [](GLFWwindow *pointer) {
        glfwDestroyWindow(pointer);
    });

    createWindow();
}

Application::~Application() {

}

void Application::createWindow() {
}

void Application::run() {

}

