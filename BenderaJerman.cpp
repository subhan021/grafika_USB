#include <iostream>
#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);

    
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 270.0);
    glVertex2f(360.0, 270.0);
    glVertex2f(360.0, 350.0);
    glVertex2f(100.0, 350.0);
    glEnd();

   
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 130.0);
    glVertex2f(360.0, 130.0);
    glVertex2f(360.0, 275.0);
    glVertex2f(100.0, 275.0);
    glEnd();

    
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    glVertex2f(100.0, 130.0);
    glVertex2f(360.0, 130.0);
    glVertex2f(360.0, 200.0);
    glVertex2f(100.0, 200.0);
    glEnd();

    glFlush();
}

void myinit() {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 499.0, 0.0, 499.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 500);
    glutInitWindowPosition(5, 10);
    glutCreateWindow("JERMAN");
    glutDisplayFunc(display);

    myinit();
    glutMainLoop();

    return 0;
}