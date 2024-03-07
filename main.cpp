#include <GL/glut.h>
#include <cmath>
#include <stdlib.h>

void init()
{
   glClearColor(0.525, 0.753, 0.968, 0.0);
   gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}

void drawSun()
{
   float t = 0;
   int i;
   float R = 60.0;
   float X = 500.0;
   float Y = 500.0;
   int numVertices = 100;

   glColor3f(0.9647, 0.8980, 0.4275);

   glBegin(GL_POLYGON);

   for (i = 0; i < numVertices; ++i)
   {
      glVertex3f(X + R * cos(t), Y + R * sin(t), 0.0);
      t += 2 * M_PI / numVertices;
   }
   glEnd();

   glFlush();
}

void drawClouds1()
{
   float t = 0;
   float y = 420;
   int i;

   // nuvem de tras
   glColor3f(1.0, 1.0, 1.0);
   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(350 + 40 * cos(t), y + 15 + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(400 + 50 * cos(t), y + 15 + 50 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(450 + 40 * cos(t), y + 15 + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   // nuvem da frente
   glColor3f(0.3961, 0.5647, 0.7255);
   glBegin(GL_POLYGON);
   t = 0;
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(400 + 40 * cos(t), y + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(450 + 50 * cos(t), y + 50 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(500 + 40 * cos(t), y + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glFlush();
}

void drawClouds2()
{
   float t = 0;
   float y = 500;
   int i;

   // nuvem de tras
   glColor3f(1.0, 1.0, 1.0);

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(50 + 40 * cos(t), y + 15 + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(100 + 50 * cos(t), y + 15 + 50 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(150 + 40 * cos(t), y + 15 + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(200 + 30 * cos(t), y + 15 + 30 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   // nuvem da frente
   glColor3f(0.3961, 0.5647, 0.7255);
   glBegin(GL_POLYGON);
   t = 0;
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(100 + 40 * cos(t), y + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(150 + 50 * cos(t), y + 50 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(200 + 40 * cos(t), y + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);
   for (i = 0; i < 100; ++i)
   {
      glVertex3f(250 + 30 * cos(t), y + 30 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glFlush();
}

void background()
{

   float y = 200;
   float t = 0;
   float r = 80;
   float x = 50;

   for (int i = 0; i <= 6; i++)
   {
      glBegin(GL_POLYGON);
      glColor3f(0.2196, 0.3800, 0.1800);
      for (int i = 0; i < 100; ++i)
      {
         glVertex3f(x + r * cos(t), y + r * sin(t), 0.0);
         t += 2 * M_PI / 100;
      }
      glEnd();

      x += 2 * 80;
   }

   glColor3f(0.3412, 0.2000, 0.1137);
   glBegin(GL_POLYGON);
   glVertex3f(0.0, 220.0, 0.0);
   glVertex3f(800.0, 220.0, 0.0);
   glVertex3f(800.0, 225.0, 0.0);
   glVertex3f(0.0, 225.0, 0.0);
   glEnd();

   float x2 = 10;
   float x3 = 20;
   for (int i = 0; i < 30; i++)
   {
      glColor3f(0.3412, 0.2000, 0.1137);
      glBegin(GL_POLYGON);
      glVertex3f(x2, 200.0, 0.0);
      glVertex3f(x3, 200.0, 0.0);
      glVertex3f(x3, 240.0, 0.0);
      glVertex3f(x2, 240.0, 0.0);
      glEnd();
      x2 += 30;
      x3 += 30;
   }

   glColor3f(0.3412, 0.2000, 0.1137);
      glBegin(GL_POLYGON);
      glVertex3f(x2, 200.0, 0.0);
      glVertex3f(x3, 200.0, 0.0);
      glVertex3f(x3, 240.0, 0.0);
      glVertex3f(x2, 240.0, 0.0);
      glEnd();

   glColor3f(0.349, 0.6, 0.3);
   glBegin(GL_POLYGON);
   glVertex3f(0.0, 0.0, 0.0);
   glVertex3f(0.0, 200.0, 0.0);
   glVertex3f(800.0, 200.0, 0.0);
   glVertex3f(800.0, 0.0, 0.0);
   glEnd();

   glFlush();
}

void tree1()
{
   float t = 0;

   glColor3f(0.1922, 0.3804, 0.2000);
   glBegin(GL_TRIANGLE_STRIP);
   glVertex3f(20.0, 150.0, 0.0);
   glVertex3f(100.0, 250.0, 0.0);
   glVertex3f(180.0, 150.0, 0.0);
   glEnd();

   glColor3f(0.2196, 0.4345, 0.2267);
   glBegin(GL_TRIANGLE_STRIP);
   glVertex3f(20.0, 180.0, 0.0);
   glVertex3f(100.0, 300.0, 0.0);
   glVertex3f(180.0, 180.0, 0.0);
   glEnd();

   glColor3f(0.2627, 0.4510, 0.2275);
   glBegin(GL_POLYGON);
   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(100 + 70 * cos(t), 50 + 20 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glColor3f(0.3725, 0.1569, 0.1059);
   glBegin(GL_POLYGON);
   glVertex3f(90.0, 150.0, 0.0);
   glVertex3f(110.0, 150.0, 0.0);
   glVertex3f(110.0, 50.0, 0.0);
   glVertex3f(90.0, 50.0, 0.0);
   glEnd();

   glFlush();
}

void tree2()
{
   float t = 0;

   glColor3f(0.1922, 0.3804, 0.2000);
   glBegin(GL_TRIANGLE_STRIP);
   glVertex3f(620.0, 150.0, 0.0);
   glVertex3f(700.0, 250.0, 0.0);
   glVertex3f(780.0, 150.0, 0.0);
   glEnd();

   glColor3f(0.2196, 0.4345, 0.2267);
   glBegin(GL_TRIANGLE_STRIP);
   glVertex3f(620.0, 180.0, 0.0);
   glVertex3f(700.0, 300.0, 0.0);
   glVertex3f(780.0, 180.0, 0.0);
   glEnd();

   glColor3f(0.2627, 0.4510, 0.2275);
   glBegin(GL_POLYGON);
   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(700 + 70 * cos(t), 50 + 20 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glColor3f(0.3725, 0.1569, 0.1059);
   glBegin(GL_POLYGON);
   glVertex3f(690.0, 150.0, 0.0);
   glVertex3f(710.0, 150.0, 0.0);
   glVertex3f(710.0, 50.0, 0.0);
   glVertex3f(690.0, 50.0, 0.0);
   glEnd();

   glFlush();
}

void house()
{
   float t = 0;

   // estrutura ---------------------
   glColor3f(0.2627, 0.4510, 0.2275);
   glBegin(GL_POLYGON);
   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(480 + 160 * cos(t), 50 + 40 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glColor3f(0.9843, 0.8039, 0.6588);
   glBegin(GL_POLYGON);
   glVertex3f(350.0, 50.0, 0.0);
   glVertex3f(350.0, 200.0, 0.0);
   glVertex3f(480.0, 300.0, 0.0);
   glVertex3f(600.0, 200.0, 0.0);
   glVertex3f(600.0, 50.0, 0.0);
   glEnd();

   glColor3f(0.8706, 0.7020, 0.5882);
   glBegin(GL_POLYGON);
   glVertex3f(480.0, 280.0, 0.0);
   glVertex3f(465.0, 275.0, 0.0);
   glVertex3f(600.0, 180.0, 0.0);
   glVertex3f(600.0, 200.0, 0.0);
   glEnd();
   // -------------------------------

   // chamine -----------------------
   glColor3f(0.9647, 0.6941, 0.7059);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 250.0, 0.0);
   glVertex3f(410.0, 250.0, 0.0);
   glVertex3f(410.0, 290.0, 0.0);
   glVertex3f(380.0, 290.0, 0.0);
   glEnd();

   glColor3f(0.8275, 0.6078, 0.6275);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 250.0, 0.0);
   glVertex3f(383.0, 250.0, 0.0);
   glVertex3f(383.0, 290.0, 0.0);
   glVertex3f(380.0, 290.0, 0.0);
   glEnd();
   // -------------------------------

   // fumaca da chamine ------------------------------------
   glColor3f(0.8588, 0.8588, 0.8588);
   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(395 + 15 * cos(t), 300 + 15 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(400 + 15 * cos(t), 315 + 15 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(405 + 12 * cos(t), 330 + 12 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(400 + 10 * cos(t), 345 + 10 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();
   // ------------------------------------------------------

   // borda da chamine --------------
   glColor3f(0.9294, 0.4039, 0.4980);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 280.0, 0.0);
   glVertex3f(410.0, 280.0, 0.0);
   glVertex3f(410.0, 290.0, 0.0);
   glVertex3f(380.0, 290.0, 0.0);
   glEnd();

   glColor3f(0.8300, 0.4100, 0.4400);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 280.0, 0.0);
   glVertex3f(385.0, 280.0, 0.0);
   glVertex3f(385.0, 290.0, 0.0);
   glVertex3f(380.0, 290.0, 0.0);
   glEnd();
   // -------------------------------

   // telhado------------------------
   glColor3f(0.9294, 0.4039, 0.4980);
   glLineWidth(40);
   glBegin(GL_LINE_STRIP);
   glVertex3f(330.0, 200.0, 0.0);
   glVertex3f(480.0, 300.0, 0.0);
   glVertex3f(620.0, 200.0, 0.0);
   glEnd();
   // -------------------------------

   // porta -------------------------
   glColor3f(0.8196, 0.6078, 0.4824);
   glBegin(GL_POLYGON);
   glVertex3f(500.0, 150.0, 0.0);
   glVertex3f(550.0, 150.0, 0.0);
   glVertex3f(550.0, 50.0, 0.0);
   glVertex3f(500.0, 50.0, 0.0);
   glEnd();

   glColor3f(0.7176, 0.5137, 0.4392);
   glBegin(GL_POLYGON);
   glVertex3f(546.0, 150.0, 0.0);
   glVertex3f(550.0, 150.0, 0.0);
   glVertex3f(550.0, 50.0, 0.0);
   glVertex3f(546.0, 50.0, 0.0);
   glEnd();

   glColor3f(0.7176, 0.5137, 0.4392);
   glBegin(GL_POLYGON);
   glVertex3f(500.0, 150.0, 0.0);
   glVertex3f(550.0, 150.0, 0.0);
   glVertex3f(550.0, 146.0, 0.0);
   glVertex3f(500.0, 146.0, 0.0);
   glEnd();
   // -------------------------------

   // maçaneta -------------------------------------------
   glColor3f(0.4824, 0.3020, 0.2549);
   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(510 + 3 * cos(t), 100 + 3 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();
   // ---------------------------------------------------

   // janela retangular -------------
   glColor3f(0.9333, 0.4471, 0.4588);
   glBegin(GL_POLYGON);
   glVertex3f(377.0, 95.0, 0.0);
   glVertex3f(473.0, 95.0, 0.0);
   glVertex3f(473.0, 155.0, 0.0);
   glVertex3f(377.0, 155.0, 0.0);
   glEnd();

   glColor3f(0.3216, 0.7569, 0.8235);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 100.0, 0.0);
   glVertex3f(470.0, 100.0, 0.0);
   glVertex3f(470.0, 150.0, 0.0);
   glVertex3f(380.0, 150.0, 0.0);
   glEnd();

   glColor3f(0.9333, 0.4471, 0.4588);
   glLineWidth(2);
   glBegin(GL_LINES);
   glVertex3f(400.0, 100.0, 0.0);
   glVertex3f(400.0, 150.0, 0.0);
   glVertex3f(450.0, 100.0, 0.0);
   glVertex3f(450.0, 150.0, 0.0);
   glVertex3f(380.0, 125.0, 0.0);
   glVertex3f(470.0, 125.0, 0.0);
   glEnd();
   // ------------------------------

   // plantas do apoio da janela --------------------------
   glColor3f(0.3922, 0.6314, 0.4784);
   int x = 393;
   for (int i = 0; i < 5; i++)
   {
      glBegin(GL_POLYGON);
      for (int i = 0; i < 100; ++i)
      {
         glVertex3f(x + 8 * cos(t), 100 + 8 * sin(t), 0.0);
         t += 2 * M_PI / 100;
      }
      x += 16;
      glEnd();
   }
   // -----------------------------------------------------

   // apoio janela retangular -------
   glColor3f(0.9333, 0.4471, 0.4588);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 80.0, 0.0);
   glVertex3f(470.0, 80.0, 0.0);
   glVertex3f(470.0, 100.0, 0.0);
   glVertex3f(380.0, 100.0, 0.0);
   glEnd();

   glColor3f(0.8235, 0.4078, 0.4392);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 80.0, 0.0);
   glVertex3f(383.0, 80.0, 0.0);
   glVertex3f(383.0, 100.0, 0.0);
   glVertex3f(380.0, 100.0, 0.0);
   glEnd();

   glColor3f(0.8235, 0.4078, 0.4392);
   glBegin(GL_POLYGON);
   glVertex3f(380.0, 80.0, 0.0);
   glVertex3f(470.0, 80.0, 0.0);
   glVertex3f(470.0, 83.0, 0.0);
   glVertex3f(380.0, 83.0, 0.0);
   glEnd();
   // -------------------------------

   // janela circular --------------------------------------
   glColor3f(0.2235, 0.3412, 0.5412);
   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(480 + 32 * cos(t), 210 + 32 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glColor3f(0.3216, 0.7569, 0.8235);
   glBegin(GL_POLYGON);

   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(480 + 30 * cos(t), 210 + 30 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   glColor3f(0.2235, 0.3412, 0.5412);
   glLineWidth(2);
   glBegin(GL_LINES);
   glVertex3f(480.0, 240.0, 0.0);
   glVertex3f(480.0, 180.0, 0.0);
   glVertex3f(450.0, 210.0, 0.0);
   glVertex3f(510.0, 210.0, 0.0);
   glEnd();
   // ------------------------------------------------------

   glFlush();
}

void car()
{
   float t = 0;
   glColor3f(0.2627, 0.4510, 0.2275);
   glBegin(GL_POLYGON);
   for (int i = 0; i < 100; ++i)
   {
      glVertex3f(250 + 70 * cos(t), 50 + 20 * sin(t), 0.0);
      t += 2 * M_PI / 100;
   }
   glEnd();

   // parte da frente
   glColor3f(0.8588, 0.8588, 0.8588);
   glBegin(GL_POLYGON);
   glVertex3f(200.0, 70.0, 0.0);
   glVertex3f(300.0, 70.0, 0.0);
   glVertex3f(300.0, 100.0, 0.0);
   glVertex3f(200.0, 100.0, 0.0);
   glEnd();

   // placa
   glColor3f(0.6824, 0.6824, 0.6824);
   glBegin(GL_POLYGON);
   glVertex3f(230.0, 75.0, 0.0);
   glVertex3f(270.0, 75.0, 0.0);
   glVertex3f(270.0, 90.0, 0.0);
   glVertex3f(230.0, 90.0, 0.0);
   glEnd();

   // pneu esquerdo
   glColor3f(0.15, 0.15, 0.15);
   glBegin(GL_POLYGON);
   glVertex3f(210.0, 50.0, 0.0);
   glVertex3f(230.0, 50.0, 0.0);
   glVertex3f(230.0, 70.0, 0.0);
   glVertex3f(210.0, 70.0, 0.0);
   glEnd();

   // pneu direito
   glColor3f(0.15, 0.15, 0.15);
   glBegin(GL_POLYGON);
   glVertex3f(270.0, 50.0, 0.0);
   glVertex3f(290.0, 50.0, 0.0);
   glVertex3f(290.0, 70.0, 0.0);
   glVertex3f(270.0, 70.0, 0.0);
   glEnd();

   // parte de cima
   glColor3f(0.8588, 0.8588, 0.8588);
   glBegin(GL_POLYGON);
   glVertex3f(205.0, 100.0, 0.0);
   glVertex3f(295.0, 100.0, 0.0);
   glVertex3f(295.0, 150.0, 0.0);
   glVertex3f(205.0, 150.0, 0.0);
   glEnd();

   // vidro
   glColor3f(0.3216, 0.7569, 0.8235);
   glBegin(GL_POLYGON);
   glVertex3f(210.0, 110.0, 0.0);
   glVertex3f(290.0, 110.0, 0.0);
   glVertex3f(290.0, 145.0, 0.0);
   glVertex3f(210.0, 145.0, 0.0);
   glEnd();

   // reflexo do vidro
   glColor3f(0.9, 0.9, 0.9);
   glLineWidth(2);
   glBegin(GL_LINES);
   glVertex3f(230.0, 115.0, 0.0);
   glVertex3f(250.0, 135.0, 0.0);
   glEnd();

   glColor3f(0.9, 0.9, 0.9);
   glLineWidth(2);
   glBegin(GL_LINES);
   glVertex3f(255.0, 115.0, 0.0);
   glVertex3f(275.0, 135.0, 0.0);
   glEnd();

   glFlush();
}

void group()
{
   const char *text = "Grupo: Gabriel Bernardes Pereira e Juliana Boubee Cardozo";

   glColor3f(1.0, 1.0, 1.0);
   glRasterPos2i(10, 10);
   for (const char *c = text; *c != '\0'; ++c)
   {
      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, *c);
   }

   glFlush();
}

void draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   drawSun();
   drawClouds1();
   drawClouds2();
   background();
   tree1();
   tree2();
   house();
   car();
   group();
}

int main(int argc, char *argv[])
{
   glutInit(&argc, argv);
   glutInitWindowSize(800, 600);
   glutInitWindowPosition(100, 100);
   glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH);
   glutCreateWindow("Trabalho 1");

   init();

   glutDisplayFunc(draw); // chama a função com os desenhos

   glutMainLoop();

   return EXIT_SUCCESS;
}
