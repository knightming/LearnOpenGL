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

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    
    
    return 0;
}
