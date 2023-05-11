#include <GL/gl.h>

#include "draw.h"
#include "mainwindow.h"


void draw(void)
{
    drawTriangle();
}

void drawTriangle(void)
{
    glBegin(GL_TRIANGLES);
        glColor3ub(0xff, 0x00, 0x00);  glVertex3i(350, 50, 0);
        glColor3ub(0x00, 0xff, 0x00);  glVertex3i(350, 430, 0);
        glColor3ub(0x00, 0x00, 0xff);  glVertex3i(20, 240, 0);
    glEnd();
}
