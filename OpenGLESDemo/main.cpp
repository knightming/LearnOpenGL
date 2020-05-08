//
//  main.cpp
//  OpenGLESDemo
//
//  Created by Ming on 2020/4/28.
//  Copyright © 2020 Insta360. All rights reserved.
//

#include <iostream>
#include "glad.h"
#include "glfw3.h"

void windowSizeDidChangeCallback(GLFWwindow * window, int width, int height);

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    GLFWwindow *window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    glad_glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, windowSizeDidChangeCallback);
    
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    glfwTerminate();
    return 0;
}

void windowSizeDidChangeCallback(GLFWwindow * window, int width, int height) {
    glad_glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}
