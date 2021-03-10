#include <GL/glut.h>
#include <math.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0.6,0.3,0.3);
    glBegin(GL_POLYGON);
        for(int i=0;i<7;i++){
            float a=3.1415926*2/7*i;
            glVertex2f(0.5*cos(a),0.5*sin(a));
        }
    glEnd();
    glutSwapBuffers();
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week03");

    glutDisplayFunc(display);
    glutMainLoop();
}
