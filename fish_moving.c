#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
//#include<windows.h>
//#include<gl.h>
float a=0,b=0,c=0,d=0,e=0,f=0;


void delay(int time)
{
	float i,j,k;

	for(i=0;i<time;i=i+0.001);
	for(j=0;j<time;j=j+0.001);
	for(k=0;k<time;k=k+0.001);
}


void fish1()
{
 glColor3f(0.5,0.5,0.4);
  glBegin(GL_POLYGON);
   glVertex2f(0.7+a,0.05);

   glVertex2f(0.75+a,0.1);
  
   glVertex2f(0.85+a,0.05);
   glVertex2f(0.75+a,0.0);
  glEnd();
  

  glBegin(GL_TRIANGLES);
  glColor3f(0.5,0.5,0.4);
    glVertex2f(0.83+a,0.05);
   glColor3f(1.0,1.0,0.0);
   glVertex2f(0.9+a,0.09);
   glVertex2f(0.9+a,0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.5,0.5,0.4);
    glVertex2f(0.75+a,0.095);
glColor3f(0.5,0.3,0.4);
	glVertex2f(0.79+a,0.125);
	glVertex2f(0.77+a,0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.5,0.3,0.3);
    glVertex2f(0.75+a,0.007);
glColor3f(1.0,0.0,0.0);
	glVertex2f(0.795+a,-0.035);
	glVertex2f(0.77+a,0.02);
  glEnd();


  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73+a,0.065);
  glEnd();
 }





void fish2()
{
 glColor3f(1.0,1.0,0.0);//yellow fish
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-b,-0.05);
   glVertex2f(-0.75-b,-0.1);
   glVertex2f(-0.85-b,-0.05);
   glVertex2f(-0.75-b,0.0);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0); 
  glVertex2f(-0.83-b,-0.05);
   glVertex2f(-0.9-b,-0.09);
   glVertex2f(-0.9-b,-0.01);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.8,0.5,0.0);
  glVertex2f(-0.75-b,-0.095);
	glVertex2f(-0.79-b,-0.125);
	glVertex2f(-0.77-b,-0.07);
  glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.5,0.0);
    glVertex2f(-0.75-b,-0.007);
	glVertex2f(-0.795-b,0.035);
	glVertex2f(-0.77-b,-0.02);
  glEnd();

 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-b,-0.035);
  glEnd();
}


void fish3()
{  
 glColor3f(0.5,0.1,0.5);
  glBegin(GL_POLYGON);
   glVertex2f(0.8+a,0.15);
   glVertex2f(0.85+a,0.2);
   glVertex2f(0.95+a,0.15);
   glVertex2f(0.85+a,0.10);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.93+a,0.15);
   glVertex2f(0.98+a,0.19);
   glVertex2f(0.98+a,0.11);
  glEnd();


  glBegin(GL_TRIANGLES);
    glVertex2f(0.855+a,0.2);
	glVertex2f(0.925+a,0.25);
	glVertex2f(0.87+a,0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(0.857+a,0.1);
	glVertex2f(0.925+a,0.05);
	glVertex2f(0.87+a,0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.83+a,0.165);
  glEnd();

}



void fish4()
{
	glColor3f(0.5,0.6,0.0);
  glBegin(GL_POLYGON);
   glVertex2f(-0.7+d,-0.15);
   glVertex2f(-0.75+d,-0.2);
   glVertex2f(-0.85+d,-0.15);
   glVertex2f(-0.75+d,-0.1);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83+d,-0.15);
   glVertex2f(-0.9+d,-0.19);
   glVertex2f(-0.9+d,-0.11);
  glEnd();

  
  glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.2);
	glVertex2f(-0.795+d,-0.25);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.755+d,-0.1);
	glVertex2f(-0.795+d,-0.05);
	glVertex2f(-0.775+d,-0.15);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73+d,-0.135);
  glEnd();
} 






void fish5()
{
 glColor3f(0.2,0.5,0.0);
  glBegin(GL_POLYGON);
   glVertex2f(-0.7-e,-0.25);
   glVertex2f(-0.75-e,-0.3);
   glVertex2f(-0.775-e,-0.3);
   glVertex2f(-0.85-e,-0.25);
   glVertex2f(-0.775-e,-0.2);
   glVertex2f(-0.75-e,-0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(-0.83-e,-0.25);
   glVertex2f(-0.9-e,-0.29);
   glVertex2f(-0.9-e,-0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(-0.775-e,-0.2);
	glVertex2f(-0.79-e,-0.125);
	glVertex2f(-0.75-e,-0.2);
  glEnd();

 glBegin(GL_TRIANGLES);
    glVertex2f(-0.75-e,-0.3);
	glVertex2f(-0.795-e,-0.35);
	glVertex2f(-0.775-e,-0.3);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(-0.73-e,-0.235);
  glEnd();
}




void fish6()
{
glColor3f(1.0,0.0,0.0);
  glBegin(GL_POLYGON);
   glVertex2f(0.7+c,0.25);
   glVertex2f(0.75+c,0.3);
   glVertex2f(0.775+c,0.3);
   glVertex2f(0.85+c,0.25);
   glVertex2f(0.775+c,0.2);
   glVertex2f(0.75+c,0.2);
  glEnd();

  glBegin(GL_TRIANGLES);
   glVertex2f(0.83+c,0.25);
   glVertex2f(0.9+c,0.29);
   glVertex2f(0.9+c,0.21);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+c,0.3);
	glVertex2f(0.79+c,0.4);
	glVertex2f(0.75+c,0.3);
  glEnd();

  glBegin(GL_TRIANGLES);
    glVertex2f(0.775+c,0.2);
	glVertex2f(0.79+c,0.1);
	glVertex2f(0.75+c,0.2);
  glEnd();

  glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(0.73+c,0.265);
  glEnd();

}


void plant()
{ 
  glColor3f(0.1,0.5,0.2);
   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.9,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.8,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.7,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.75,-0.8);
	glVertex2f(0.8,-0.9);
	glVertex2f(0.85,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.725,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.775,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.825,-0.8);
	glVertex2f(0.8,-0.9);
    glVertex2f(0.875,-0.8);
	glVertex2f(0.8,-0.9);
   glEnd();


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.6,-0.85);
	glVertex2f(0.5,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.4,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.45,-0.85);
	glVertex2f(0.5,-0.95);
	glVertex2f(0.55,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.425,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.475,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.525,-0.85);
	glVertex2f(0.5,-0.95);
    glVertex2f(0.575,-0.85);
	glVertex2f(0.5,-0.95);
   glEnd();



   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.275,-0.8);
	glVertex2f(0.175,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.075,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.125,-0.8);
	glVertex2f(0.175,-0.9);
	glVertex2f(0.225,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.1,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.15,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.2,-0.8);
	glVertex2f(0.175,-0.9);
    glVertex2f(0.25,-0.8);
	glVertex2f(0.175,-0.9);
   glEnd();
	


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.275,-0.85);
	glVertex2f(-0.175,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.075,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.125,-0.85);
	glVertex2f(-0.175,-0.95);
	glVertex2f(-0.225,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.1,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.15,-0.85);
 	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.2,-0.85);
	glVertex2f(-0.175,-0.95);
    glVertex2f(-0.25,-0.85);
	glVertex2f(-0.175,-0.95);
   glEnd();

   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.575,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.475,-0.8);
	glVertex2f(-0.375,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.425,-0.8);
	glVertex2f(-0.475,-0.9);
	glVertex2f(-0.525,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.4,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.45,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.5,-0.8);
	glVertex2f(-0.475,-0.9);
    glVertex2f(-0.55,-0.8);
	glVertex2f(-0.475,-0.9);
   glEnd();
	


   glLineWidth(4.0);
   glBegin(GL_LINES);
	glVertex2f(-0.9,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.8,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.7,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.75,-0.85);
	glVertex2f(-0.8,-0.95);
	glVertex2f(-0.85,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.725,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.775,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.825,-0.85);
	glVertex2f(-0.8,-0.95);
    glVertex2f(-0.875,-0.85);
	glVertex2f(-0.8,-0.95);
   glEnd();

}


void pebbles()
{
	glColor3f(0.5,0.35,0.05);
	glBegin(GL_POLYGON);
	glVertex2f(0.9,-0.9);
	glVertex2f(0.9125,-0.9);
	glVertex2f(0.925,-0.8875);
	glVertex2f(0.925,-0.875);
	glVertex2f(0.9125,-0.8625);
	glVertex2f(0.9,-0.8625);
	glVertex2f(0.8875,-0.8875);
	glVertex2f(0.8875,-0.875);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0,-0.95);
	glVertex2f(0.0125,-0.95);
	glVertex2f(0.025,-0.9375);
	glVertex2f(0.025,-0.925);
	glVertex2f(0.0125,-0.9125);
	glVertex2f(0,-0.9125);
	glVertex2f(-0.0125,-0.9375);
	glVertex2f(-0.0125,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.0125,-0.975);
	glVertex2f(0.025,-0.975);
	glVertex2f(0.0375,-0.9625);
	glVertex2f(0.0375,-0.95);
	glVertex2f(0.025,-0.9375);
	glVertex2f(0.0125,-0.9375);
	glVertex2f(0,-0.9625);
	glVertex2f(0,-0.95);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(0.025,-0.95);
	glVertex2f(0.0375,-0.95);
	glVertex2f(0.05,-0.9375);
	glVertex2f(0.05,-0.925);
	glVertex2f(0.0375,-0.9125);
	glVertex2f(0.025,-0.9125);
	glVertex2f(0.0125,-0.9375);
	glVertex2f(0.0125,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.65,-0.95);
	glVertex2f(0.6625,-0.95);
	glVertex2f(0.675,-0.9375);
	glVertex2f(0.675,-0.925);
	glVertex2f(0.6625,-0.9125);
	glVertex2f(0.65,-0.9125);
	glVertex2f(0.6375,-0.9375);
	glVertex2f(0.6375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.675,-0.95);
	glVertex2f(0.6875,-0.95);
	glVertex2f(0.7,-0.9375);
	glVertex2f(0.7,-0.925);
	glVertex2f(0.6875,-0.9125);
	glVertex2f(0.675,-0.9125);
	glVertex2f(0.6625,-0.9375);
	glVertex2f(0.6625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(0.6625,-0.985);
	glVertex2f(0.675,-0.985);
	glVertex2f(0.6875,-0.9725);
	glVertex2f(0.6875,-0.96);
	glVertex2f(0.675,-0.9475);
	glVertex2f(0.6625,-0.9475);
	glVertex2f(0.65,-0.9525);
	glVertex2f(0.65,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(0.6875,-0.985);
	glVertex2f(0.7,-0.985);
	glVertex2f(0.7125,-0.9725);
	glVertex2f(0.7125,-0.96);
	glVertex2f(0.7,-0.9475);
	glVertex2f(0.6875,-0.9475);
	glVertex2f(0.675,-0.9475);
	glVertex2f(0.675,-0.96);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.6375,-0.985);
	glVertex2f(0.65,-0.985);
	glVertex2f(0.6625,-0.9725);
	glVertex2f(0.6625,-0.96);
	glVertex2f(0.65,-0.9475);
	glVertex2f(0.6375,-0.9475);
	glVertex2f(0.625,-0.9475);
	glVertex2f(0.625,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(0.25,-0.95);
	glVertex2f(0.2625,-0.95);
	glVertex2f(0.275,-0.9375);
	glVertex2f(0.275,-0.925);
	glVertex2f(0.2625,-0.9125);
	glVertex2f(0.25,-0.9125);
	glVertex2f(0.2375,-0.9375);
	glVertex2f(0.2375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.275,-0.95);
	glVertex2f(0.2875,-0.95);
	glVertex2f(0.3,-0.9375);
	glVertex2f(0.3,-0.925);
	glVertex2f(0.2875,-0.9125);
	glVertex2f(0.275,-0.9125);
	glVertex2f(0.2625,-0.9375);
	glVertex2f(0.2625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(0.2625,-0.985);
	glVertex2f(0.275,-0.985);
	glVertex2f(0.2875,-0.9725);
	glVertex2f(0.2875,-0.96);
	glVertex2f(0.275,-0.9475);
	glVertex2f(0.2625,-0.9475);
	glVertex2f(0.25,-0.9525);
	glVertex2f(0.25,-0.96);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(0.2875,-0.985);
	glVertex2f(0.3,-0.985);
	glVertex2f(0.3125,-0.9725);
	glVertex2f(0.3125,-0.96);
	glVertex2f(0.3,-0.9475);
	glVertex2f(0.2825,-0.9475);
	glVertex2f(0.275,-0.9525);
	glVertex2f(0.275,-0.96);
	glEnd();



	glBegin(GL_POLYGON);
	glVertex2f(-0.35,-0.95);
	glVertex2f(-0.3625,-0.95);
	glVertex2f(-0.375,-0.9375);
	glVertex2f(-0.375,-0.925);
	glVertex2f(-0.3625,-0.9125);
	glVertex2f(-0.35,-0.9125);
	glVertex2f(-0.3375,-0.9375);
	glVertex2f(-0.3375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.375,-0.95);
	glVertex2f(-0.3875,-0.95);
	glVertex2f(-0.4,-0.9375);
	glVertex2f(-0.4,-0.925);
	glVertex2f(-0.3875,-0.9125);
	glVertex2f(-0.375,-0.9125);
	glVertex2f(-0.3625,-0.9375);
	glVertex2f(-0.3625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(-0.3625,-0.985);
	glVertex2f(-0.375,-0.985);
	glVertex2f(-0.3875,-0.9725);
	glVertex2f(-0.3875,-0.96);
	glVertex2f(-0.375,-0.9475);
	glVertex2f(-0.3625,-0.9475);
	glVertex2f(-0.35,-0.9525);
	glVertex2f(-0.35,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.3875,-0.985);
	glVertex2f(-0.4,-0.985);
	glVertex2f(-0.4125,-0.9725);
	glVertex2f(-0.4125,-0.96);
	glVertex2f(-0.4,-0.9475);
	glVertex2f(-0.3825,-0.9475);
	glVertex2f(-0.375,-0.9525);
	glVertex2f(-0.375,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.3375,-0.985);
	glVertex2f(-0.35,-0.985);
	glVertex2f(-0.3625,-0.9725);
	glVertex2f(-0.3625,-0.96);
	glVertex2f(-0.35,-0.9475);
	glVertex2f(-0.3375,-0.9475);
	glVertex2f(-0.325,-0.9525);
	glVertex2f(-0.325,-0.96);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2f(-0.65,-0.95);
	glVertex2f(-0.6625,-0.95);
	glVertex2f(-0.675,-0.9375);
	glVertex2f(-0.675,-0.925);
	glVertex2f(-0.6625,-0.9125);
	glVertex2f(-0.65,-0.9125);
	glVertex2f(-0.6375,-0.9375);
	glVertex2f(-0.6375,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.675,-0.95);
	glVertex2f(-0.6875,-0.95);
	glVertex2f(-0.7,-0.9375);
	glVertex2f(-0.7,-0.925);
	glVertex2f(-0.6875,-0.9125);
	glVertex2f(-0.675,-0.9125);
	glVertex2f(-0.6625,-0.9375);
	glVertex2f(-0.6625,-0.925);
	glEnd();

	
	glBegin(GL_POLYGON);
	glVertex2f(-0.6625,-0.985);
	glVertex2f(-0.675,-0.985);
	glVertex2f(-0.6875,-0.9725);
	glVertex2f(-0.6875,-0.96);
	glVertex2f(-0.675,-0.9475);
	glVertex2f(-0.6625,-0.9475);
	glVertex2f(-0.65,-0.9525);
	glVertex2f(-0.65,-0.96);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.9);
	glVertex2f(-0.9125,-0.9);
	glVertex2f(-0.925,-0.8875);
	glVertex2f(-0.925,-0.875);
	glVertex2f(-0.9125,-0.8625);
	glVertex2f(-0.9,-0.8625);
	glVertex2f(-0.8875,-0.8875);
	glVertex2f(-0.8875,-0.875);
	glEnd();


    glBegin(GL_POLYGON);
	glVertex2f(0.9,-0.95);
	glVertex2f(0.9125,-0.95);
	glVertex2f(0.925,-0.9375);
	glVertex2f(0.925,-0.925);
	glVertex2f(0.9125,-0.9125);
	glVertex2f(0.9,-0.9125);
	glVertex2f(0.8875,-0.9375);
	glVertex2f(0.8875,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(0.925,-0.95);
	glVertex2f(0.9375,-0.95);
	glVertex2f(0.95,-0.9375);
	glVertex2f(0.95,-0.925);
	glVertex2f(0.9375,-0.9125);
	glVertex2f(0.925,-0.9125);
	glVertex2f(0.9125,-0.9375);
	glVertex2f(0.9125,-0.925);
	glEnd();


    glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.95);
	glVertex2f(-0.9125,-0.95);
	glVertex2f(-0.925,-0.9375);
	glVertex2f(-0.925,-0.925);
	glVertex2f(-0.9125,-0.9125);
	glVertex2f(-0.9,-0.9125);
	glVertex2f(-0.8875,-0.9375);
	glVertex2f(-0.8875,-0.925);
	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(-0.925,-0.95);
	glVertex2f(-0.9375,-0.95);
	glVertex2f(-0.95,-0.9375);
	glVertex2f(-0.95,-0.925);
	glVertex2f(-0.9375,-0.9125);
	glVertex2f(-0.925,-0.9125);
	glVertex2f(-0.9125,-0.9375);
	glVertex2f(-0.9125,-0.925);
	glEnd();
}		






void myinit()
{
 glClearColor(0.0,0.0,1.0,0.0);
 glColor3f(0.0,0.0,1.0);
 //gluOrtho2D(0.0,499.0,0.0,499.0);
}




void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(0.0,0.0,1.0);
 glPointSize(2.0);
 plant();
 pebbles();


 if(a>=-1.99)   
	 a=a-0.0005;
 else
   a=0;

 
if(b>=-1.99)
 b=b-0.0004;
 else
 	 b=0;

if(c>=-1.99)
c=c-0.0003;
 else
 	 c=0;

if(d>=-1.99)
 d=d+0.0007;
 else
 	 d=0;

if(e>=-1.99)
 e=e-0.0005;
 else
 	 e=0;


if(f>=-1.99)
 f=f-0.0002;
 else
 	 f=0;

 fish1();
 fish2();
 fish3();
 fish4();
 fish5();
 fish6();

 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();
 
}


void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowPosition(0,0);
 glutInitWindowSize(500,500);
 glutCreateWindow("fish");
 myinit();
 glutDisplayFunc(display);
 glutMainLoop();
}
