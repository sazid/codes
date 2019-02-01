#include <GL/glut.h>
#include <iostream>

int main(int argc, char **argv) {
    // Startup freeglut
    glutInit(&argc, argv);

    // GLUT_DOUBLE - use double buffering
    // GLUT_RGB - use RGBA color channel
    // GLUT_DEPTH - depth information for 3d
    // Initialize display mode for OpenGL
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);

    // Set window size
    glutInitWindowSize(500, 500);

    // Set window position in screen
    glutInitWindowPosition(100, 100);

    // Create the window
    glutCreateWindow("First OpenGL app");



    return 0;
}
