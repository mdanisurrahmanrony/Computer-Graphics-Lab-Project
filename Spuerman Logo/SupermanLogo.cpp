#include<stdio.h>
#include<GL/gl.h>
#include<GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4);

    //To design red part of logo
    glBegin(GL_POLYGON);
    glColor3f(1, 0, 0);
    glVertex2i(450, 200);
    glVertex2i(112.5, 500);
    glVertex2i(250, 600);
    glVertex2i(650, 600);
    glVertex2i(787.5, 500);
    glEnd();

    //To design yellow part of logo
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2i(450, 250);
    glVertex2i(350, 325);
    glVertex2i(450, 300);
    glVertex2i(550, 325);
    glEnd();

     //To design yellow part of logo
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 0);
    glVertex2i(325, 355);
    glVertex2i(275, 400);
    glVertex2i(625, 375);
    glVertex2i(575, 350);
    glVertex2i(475, 337.5);
    glVertex2i(420, 375);
    glEnd();

    glFlush ();

}

void init (void)
{
    glClearColor(0.0,0.0,0.5,0.0);      //Dark Blue
    glColor3f(0,0,0);
    glPointSize(4);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,900.0,0.0,700.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(900, 700);
    glutInitWindowPosition(250, 0);
    glutCreateWindow("Superman Logo");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}

//Comment highlighted code: Ctrl + Shift + C
//Uncomment highlighted code: Ctrl + Shift + X
