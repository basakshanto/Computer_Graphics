#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846
using namespace std;

int j;//gombuj circle border
int i ;//gombuj
int k; //clouds
int l;//clouds
int m;//clouds
int n;//clouds
int o;//clouds
int p;//clouds
int q;//clouds
int r;//clouds
int s;//clouds
int t;//sun
int u ;//car
int v;//car
int cb; //car circle border
int cb1; //car circle border



void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}

//car speed
GLfloat position = 0.0f, speed = 0.10f;

//rain speed
GLfloat position4 = 0.0f,speed4=0.05;

// plane speed
GLfloat position5 = 0.0f,speed5=0.10;



//car
void update(int value) {

    if(position >2.0)
        position =-1.0f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(200, update, 0);
}

//rain
void update4(int value) {
    if(position4 <0 )
       {
        position4 = 0.1;
       }
    position4 -= speed4; //position=position-speed;1-.1=.9
	glutPostRedisplay();
	glutTimerFunc(200, update4, 0);

}



//*********************************************NIGHT**********************//






void night()
{    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


//GROUND

glBegin(GL_QUADS);
glColor3ub(0, 87, 38);
glVertex2f(1,-.3);
glVertex2f(1,.1);
glVertex2f(-1,.1);
glVertex2f(-1,-.3);
glEnd();

////sky
glBegin(GL_QUADS);
glColor4ub(7, 34, 107, 1);
glVertex2f(1,.1);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,.1);
glEnd();


// Left Side Bench 1
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.24, -0.08);
    glVertex2f(-0.24, -0.04);
    glVertex2f(-0.235, -0.04);
    glVertex2f(-0.235, -0.08);

    // sitting bench

    glVertex2f(-0.225, -0.04);
    glVertex2f(-0.225, -0.03);
    glVertex2f(-0.30, -0.03);
    glVertex2f(-0.30, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.285, -0.08);
    glVertex2f(-0.285, -0.04);
    glVertex2f(-0.29, -0.04);
    glVertex2f(-0.29, -0.08);
    glEnd();

//Left Side Bench 2
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.095, -0.08);
    glVertex2f(-0.095, -0.04);
    glVertex2f(-0.10, -0.04);
    glVertex2f(-0.10, -0.08);

    // sitting bench

    glVertex2f(-0.085, -0.04);
    glVertex2f(-0.085, -0.03);
    glVertex2f(-0.15, -0.03);
    glVertex2f(-0.15, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.135, -0.08);
    glVertex2f(-0.135, -0.04);
    glVertex2f(-0.14, -0.04);
    glVertex2f(-0.14, -0.08);

    glEnd();
//RIGHT Side Bench
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(0.72, -0.08);
    glVertex2f(0.72, -0.04);
    glVertex2f(0.725, -0.04);
    glVertex2f(0.725, -0.08);

    // sitting bench

    glVertex2f(0.735, -0.04);
    glVertex2f(0.735, -0.03);
    glVertex2f(0.655, -0.03);
    glVertex2f(0.655, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(0.665, -0.08);
    glVertex2f(0.665, -0.04);
    glVertex2f(0.67, -0.04);
    glVertex2f(0.67, -0.08);

    glEnd();



//*******************************
//road
glBegin(GL_QUADS);
glColor4ub(51, 57, 57, 1);
glVertex2f(1,-1);
glVertex2f(1,-.3);
glVertex2f(-1,-.3);
glVertex2f(-1,-1);
glEnd();

//strip

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();



glTranslatef(.4,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(1.2,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.6,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(.4,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();





glTranslatef(.8,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.2,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(1.6,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();



glPushMatrix();
glTranslatef(position,0,0);

//Car

glBegin(GL_POLYGON);   // car body
 glColor3ub(0,0,255);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.42,-0.62);
    glVertex2f(-0.48,-0.62);
    glVertex2f(-0.52,-0.56);
    glVertex2f(-0.88,-0.56);
    glVertex2f(-0.92,-0.62);
    glVertex2f(-0.98,-0.62);
    glVertex2f(-1,-0.7);
    glEnd();

 glBegin(GL_POLYGON);   // car window
glColor3ub(113,113,113);
    glVertex2f(-0.87,-0.57);
    glVertex2f(-0.91,-0.63);

    glVertex2f(-0.49,-0.63);
    glVertex2f(-0.53,-0.57);
    glEnd();

   glBegin(GL_POLYGON);  // car window divider
glColor3ub(178,26,26);
    glVertex2f(-0.7,-0.63);
    glVertex2f(-0.7,-0.57);
    glVertex2f(-0.71,-0.57);
    glVertex2f(-0.71,-0.63);
    glEnd();

    // car wheel 1
    GLfloat x12=-0.85f; GLfloat y12=-0.7f; GLfloat radius12 =0.05f;
	int triangleAmount12 = 20; //# of triangles used to draw circle


	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x12,y12); // center of circle
		for(u = 0; u <= triangleAmount12;u++) {
			glVertex2f(
		            x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



//car circle border 1

	GLfloat x14=-0.85f; GLfloat y14=-0.7f; GLfloat radius14 = 0.03f;
	int lineAmount14 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;
glLineWidth(11);

	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb  = 0; cb <= lineAmount14;cb++) {
			glVertex2f(
			    x14 + (radius14 * cos(cb *  twicePi14 / lineAmount14)),
			    y14 + (radius14* sin(cb * twicePi14 / lineAmount14))
			);
		}
	glEnd();

// car wheel 2

GLfloat x13=-0.55f; GLfloat y13=-0.7f; GLfloat radius13 =0.05f;
	int triangleAmount13 = 20; //# of triangles used to draw circle


	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x13,y13); // center of circle
		for(v = 0; v <= triangleAmount13;v++) {
			glVertex2f(
		            x13 + (radius13 * cos(v *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(v* twicePi13 / triangleAmount13))
			);
		}
	glEnd();




//car circle border 2

	GLfloat x15=-0.55f; GLfloat y15=-0.7f; GLfloat radius15 = 0.03f;
	int lineAmount15 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;
glLineWidth(11);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb1  = 0; cb1 <= lineAmount15;cb1++) {
			glVertex2f(
			    x15 + (radius15* cos(cb1 *  twicePi15 / lineAmount15)),
			    y14 + (radius15* sin(cb1 * twicePi15 / lineAmount15))
			);
		}
	glEnd();
	glPopMatrix();





    //**************************************AHSAN MANJIL// ********************************




//whole body
glBegin(GL_QUADS);

// Front Part
glColor4ub(156, 80, 80, 1);
glVertex2f(.96,0);
glVertex2f(.96,.26);
glVertex2f(.9,.26);
glVertex2f(.9,0);

glVertex2f(.9,0);
glVertex2f(.9,.24);
glVertex2f(.8,.24);
glVertex2f(.8,0);

glVertex2f(.8,0);
glVertex2f(.8,.26);
glVertex2f(.74,.26);
glVertex2f(.74,0);

glVertex2f(.74,0);
glVertex2f(.74,.22);
glVertex2f(.33,.22);
glVertex2f(.33,0);

glVertex2f(.33,0);
glVertex2f(.33,.26);
glVertex2f(.3,.26);
glVertex2f(.3,0);

glVertex2f(.3,0);
glVertex2f(.3,.24);
glVertex2f(-.66,.24);
glVertex2f(-.66,0);

//backside
glColor4ub(156, 80, 80, 1);
glVertex2f(-.66,0);
glVertex2f(-.66,.24);
glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.42,.24);
glVertex2f(-.42,.28);
glVertex2f(-.48,.28);
glVertex2f(-.48,.24);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.48,.24);
glVertex2f(-.48,.26);
glVertex2f(-.58,.26);
glVertex2f(-.58,.24);
glEnd();

////left body polygon
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(-.58,.24);
glVertex2f(-.58,.28);
glVertex2f(-.64,.28);
glVertex2f(-.64,.26);
glVertex2f(-.66,.24);
glEnd();



//gombuj
GLfloat x=0.115f; GLfloat y=0.44f; GLfloat radius = 0.11f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//gombuj diamond
glBegin(GL_TRIANGLES);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);
glEnd();

// Border bold lines of manjil
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);


glVertex2f(.96,0);
glVertex2f(.96,.26);

glVertex2f(.96,.26);
glVertex2f(.9,.26);

glVertex2f(.9,.26);
glVertex2f(.9,.24);

glVertex2f(.9,.24);
glVertex2f(.8,.24);


glVertex2f(.8,.24);
glVertex2f(.8,.26);

glVertex2f(.8,.26);
glVertex2f(.74,.26);


glVertex2f(.74,.26);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.33,.22);

glVertex2f(.33,.22);
glVertex2f(.33,.26);

glVertex2f(.33,.26);
glVertex2f(.3,.26);


glVertex2f(.3,.26);
glVertex2f(.3,.24);


glVertex2f(.3,.24);
glVertex2f(-.42,.24);


glVertex2f(-.42,.24);
glVertex2f(-.42,.28);

glVertex2f(-.42,.28);
glVertex2f(-.48,.28);


glVertex2f(-.48,.28);
glVertex2f(-.48,.26);


glVertex2f(-.48,.26);
glVertex2f(-.58,.26);

glVertex2f(-.58,.26);
glVertex2f(-.58,.28);

glVertex2f(-.58,.28);
glVertex2f(-.64,.28);


glVertex2f(-.64,.28);
glVertex2f(-.64,.26);

glVertex2f(-.64,.26);
glVertex2f(-.66,.24);

glVertex2f(-.66,.24);
glVertex2f(-.76,.16);

glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glVertex2f(-.76,.06);
glVertex2f(-.66,0);
glEnd();

//gombuj circle border
int j;
	GLfloat x1=0.115f; GLfloat y1=0.44f; GLfloat radius1 = 0.11f;
	int lineAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(46, 15, 23);
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi1 / lineAmount1)),
			    y + (radius* sin(j * twicePi1 / lineAmount1))
			);
		}
	glEnd();

//gombuj pillar

glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(.22,.23);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.23);
glEnd();

//gombuj pillar border

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.22,.24);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.24);
glEnd();


//gombuj diamond LINE
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);

glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);

glEnd();


//GROUND side manjil border
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.96,0);
glVertex2f(-.66,0);

glVertex2f(-.66,0);
glVertex2f(-.76,0.065);


glEnd();

//BACK LINES from left side
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.0);
glVertex2f(-.66,.24);

glEnd();

// line from left side
glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(-.68,.2);
glVertex2f(-.76,.16);

glVertex2f(-.42,.2);
glVertex2f(-.68,.2);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.42,.0);
glVertex2f(-.42,.24);

glVertex2f(-.46,.0);
glVertex2f(-.46,.24);

glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.44,.0);
glVertex2f(-.44,.24);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.68,.18);
glVertex2f(-.76,.14);

glVertex2f(-.42,.18);
glVertex2f(-.68,.18);
glEnd();

//back window
glLineWidth(1.7);
glBegin(GL_LINES);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.72,.1);
glVertex2f(-.7,.09);


glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();

// Window from left side

glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.7,.09);
glVertex2f(-.7,.14);

glVertex2f(-.72,.13);
glVertex2f(-.72,.1);



glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);



//small windows
glColor4ub(71, 52, 39, 1);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();

glTranslatef(.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.08,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.16,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(-.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.01,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.03,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.41,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.55,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.53,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.49,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.45,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.42,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(.17,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.24);
glVertex2f(-.42,.24);
glEnd();


// door from left
glBegin(GL_POLYGON);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();

glTranslatef(.1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.2,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.3,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glTranslatef(.7,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.9,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();

glScalef(.7,1.75,0);
glTranslatef(.4,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(1,1.75,0);
glTranslatef(.465,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(.7,1.75,0);
glTranslatef(.635,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


//upper pillar
glScalef(.6,1.6,0);
glTranslatef(.44,0.16,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.54,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.64,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

//pillar 129, 93, 96



//gombuj lines
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(.225,.256);
glVertex2f(0.003,.256);
glEnd();

glTranslatef(0,.169,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();

glLineWidth(1.5);
glTranslatef(0,.183,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();



glTranslatef(0,.015,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glTranslatef(0,-.012,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.185);
glVertex2f(-.42,.2);

glVertex2f(-.4,.170);
glVertex2f(-.42,.185);
glVertex2f(-.4,.185);
glVertex2f(.74,.185);
glEnd();

glBegin(GL_LINES);
glVertex2f(-.4,.17);
glVertex2f(.74,.17);

glVertex2f(.74,.17);
glVertex2f(.76,.145);


glVertex2f(.74,.185);
glVertex2f(.76,.164);


glVertex2f(.76,.145);
glVertex2f(.96,.145);

glVertex2f(.76,.164);
glVertex2f(.96,.164);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.74,.0);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.96,.22);


glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();



glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(.77,.0);
glVertex2f(.77,.22);
glEnd();


glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.78,.0);
glVertex2f(.78,.235);
glEnd();

glLineWidth(5);
glTranslatef(1.18,0,0);
glBegin(GL_LINES);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();
glLoadIdentity();

// big window in the right side

glTranslatef(1.435,-0.016,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);


glEnd();
glLoadIdentity();

glTranslatef(1.435,-0.015,0);
glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();
glLoadIdentity();


glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.01,.28);
glVertex2f(.22,.28);

glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();


glLineWidth(4.5);
glTranslatef(.01,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();

glLineWidth(1.7);
glTranslatef(.02,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.06,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.07,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.08,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.12,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.14,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.13,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.18,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(4.5);
glTranslatef(.187,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.194,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


//PILLAR
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);

//diamonds

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();






glTranslatef(-0.3,0,0);
glBegin(GL_QUADS);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);
glEnd();
//diamonds
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();
glLoadIdentity();


glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();



glTranslatef(-0.3,0,0);
glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(0.315, 0);
glVertex2f(0.315,0.34);


glVertex2f(0.012, 0);
glVertex2f(0.012,0.34);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();

glTranslatef(-0.3,0,0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();
glLoadIdentity();



glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);
glEnd();


glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);


glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();



glTranslatef(-0.3,0,0);
glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);

glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);

glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);

glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();
glLoadIdentity();


// *************stair
glBegin(GL_POLYGON);

glColor4ub(156, 80, 80, 1);
glVertex2f(.42,-.14);//RIGHT
glVertex2f(.42,-.12);
glVertex2f(.40,-.1);
glVertex2f(.40,-.08);
glVertex2f(.38,-.06);
glVertex2f(.38,-.04);
glVertex2f(.36,0);
glVertex2f(.01,0);//LEFT
glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
glVertex2f(.05,-.08);
glVertex2f(.05,-.1);
glVertex2f(.07,-.12);
glVertex2f(.07,-.14);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(.42,-.14);
glVertex2f(.42,-.12);

glVertex2f(.42,-.12);
glVertex2f(.40,-.1);

glVertex2f(.40,-.1);
glVertex2f(.40,-.08);

glVertex2f(.40,-.08);
glVertex2f(.38,-.06);

glVertex2f(.38,-.06);
glVertex2f(.38,-.04);

glVertex2f(.38,-.04);
glVertex2f(.36,0);

glVertex2f(.36,0);
glVertex2f(.01,0);


glVertex2f(.02,-0.02);
glVertex2f(.37,-.02);

glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
//

glVertex2f(.03,-.06);
glVertex2f(.05,-.08);

glVertex2f(.05,-.08);
glVertex2f(.05,-.1);

glVertex2f(.05,-.1);
glVertex2f(.07,-.12);

glVertex2f(.07,-.12);
glVertex2f(.07,-.14);


glVertex2f(.42,-.14);
glVertex2f(.07,-.14);


glVertex2f(.42,-.12);
glVertex2f(.07,-.12);

glVertex2f(.40,-.1);
glVertex2f(.05,-.1);


glVertex2f(.40,-.08);
glVertex2f(.05,-.08);

glVertex2f(.38,-.06);
glVertex2f(.03,-.06);

glVertex2f(.38,-.04);
glVertex2f(.03,-.04);

glVertex2f(.36,0);
glVertex2f(.01,0);

glEnd();

//  tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.62, -0.28);
    glVertex2f(-0.60, -0.28);
    glVertex2f(-0.60, -0.18);
    glVertex2f(-0.62, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.66, -0.18);
    //glColor3f(0.0, 0.5, 0.0);
    glVertex2f(-0.56, -0.18);
    //glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-0.61, -0.07);
    glEnd();

//  tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.42, -0.28);
    glVertex2f(-0.40, -0.28);
    glVertex2f(-0.40, -0.18);
    glVertex2f(-0.42, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.46, -0.18);
    glVertex2f(-0.36, -0.18);
    glVertex2f(-0.41, -0.07);
    glEnd();
//  tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.07, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.07, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.11, -0.18);
    glVertex2f(-0.01, -0.18);
    glVertex2f(-0.06, -0.07);
    glEnd();
//  tree 4 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(0.53, -0.28);
    glVertex2f(0.55, -0.28);
    glVertex2f(0.55, -0.18);
    glVertex2f(0.53, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(0.49, -0.18);
    glVertex2f(0.59, -0.18);
    glVertex2f(0.54, -0.07);
    glEnd();
//  Small tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.82, 0.08);
    glVertex2f(-0.81, 0.08);
    glVertex2f(-0.81, 0.15);
    glVertex2f(-0.82, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.83, 0.15);
    glVertex2f(-0.80, 0.15);
    glVertex2f(-0.815, 0.18);
    glEnd();
//  Small tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.87, 0.08);
    glVertex2f(-0.86, 0.08);
    glVertex2f(-0.86, 0.15);
    glVertex2f(-0.87, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.88, 0.15);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.865, 0.18);
    glEnd();
 //  Small tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.91, 0.08);
    glVertex2f(-0.90, 0.08);
    glVertex2f(-0.90, 0.15);
    glVertex2f(-0.91, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.92, 0.15);
    glVertex2f(-0.89, 0.15);
    glVertex2f(-0.905, 0.18);
    glEnd();

//chand
GLfloat x11=-0.85f; GLfloat y11=0.85f; GLfloat radius11 =0.12f;
	int triangleAmount11 = 20; //# of triangles used to draw circle


	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(230, 233, 240, 1);
		glVertex2f(x11,y11); // center of circle
		for(t = 0; t <= triangleAmount11;t++) {
			glVertex2f(
		            x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
			);
		}
	glEnd();



//star
 glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();


    glScalef(.5,.5,1);
    glTranslatef(0,.8,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.86f, 0.945f);
glVertex2f(-0.865f, 0.935f);
glVertex2f(-0.86f, 0.925f);
glVertex2f(-0.855f, 0.935f);
glEnd();

glLoadIdentity();


glTranslatef(0.3,.3,0);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

 glTranslatef(-0.8,.2,0);
   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

     glTranslatef(-0.6,.2,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

     glTranslatef(1,0,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

     glTranslatef(-.7,-.6,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

     glTranslatef(0,.6,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();


glTranslatef(-.3,-.6,0);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();

glScalef(.5,.5,1);
glTranslatef(.4,1.7,0);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
     glLoadIdentity();




glScalef(.5,.5,1);
glTranslatef(1.2,1.7,0);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();



glScalef(.5,.5,1);
 glTranslatef(1.2,1.7,0);
  glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();
glLoadIdentity();


glScalef(.5,.5,1);
glTranslatef(1.2,1.7,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glScalef(.5,.5,1);
glTranslatef(0,.8,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();


     glTranslatef(0.3,.3,0);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();

 glTranslatef(-0.8,.2,0);
   glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();

     glTranslatef(-0.6,.2,0);
    glBegin(GL_QUADS);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();

     glTranslatef(1,0,0);
glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();

     glTranslatef(-.7,-.6,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();

     glTranslatef(0,.6,0);
 glVertex2f(-0.84f, 0.945f);
glVertex2f(-0.845f, 0.935f);
glVertex2f(-0.84f, 0.925f);
glVertex2f(-0.835f, 0.935f);
glEnd();

glLoadIdentity();
;

     glTranslatef(-.3,-.6,0);
    glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);
glEnd();
glLoadIdentity();


glPopMatrix();
glLoadIdentity();



glFlush();



}

void demo_night(int val) {

 glutDisplayFunc(night);


}





//*********************************************************************************WINTER***********************************************************//




void winter()
{    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


  //GROUND

glBegin(GL_QUADS);
glColor3ub(0, 87, 38);
glVertex2f(1,-.3);
glVertex2f(1,.1);
glVertex2f(-1,.1);
glVertex2f(-1,-.3);
glEnd();

////sky
glBegin(GL_QUADS);
glColor4ub(102, 122, 173, 1);
glVertex2f(1,.1);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,.1);
glEnd();


// Left Side Bench 1
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.24, -0.08);
    glVertex2f(-0.24, -0.04);
    glVertex2f(-0.235, -0.04);
    glVertex2f(-0.235, -0.08);

    // sitting bench

    glVertex2f(-0.225, -0.04);
    glVertex2f(-0.225, -0.03);
    glVertex2f(-0.30, -0.03);
    glVertex2f(-0.30, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.285, -0.08);
    glVertex2f(-0.285, -0.04);
    glVertex2f(-0.29, -0.04);
    glVertex2f(-0.29, -0.08);
    glEnd();

//Left Side Bench 2
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.095, -0.08);
    glVertex2f(-0.095, -0.04);
    glVertex2f(-0.10, -0.04);
    glVertex2f(-0.10, -0.08);

    // sitting bench

    glVertex2f(-0.085, -0.04);
    glVertex2f(-0.085, -0.03);
    glVertex2f(-0.15, -0.03);
    glVertex2f(-0.15, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.135, -0.08);
    glVertex2f(-0.135, -0.04);
    glVertex2f(-0.14, -0.04);
    glVertex2f(-0.14, -0.08);

    glEnd();
//RIGHT Side Bench
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(0.72, -0.08);
    glVertex2f(0.72, -0.04);
    glVertex2f(0.725, -0.04);
    glVertex2f(0.725, -0.08);

    // sitting bench

    glVertex2f(0.735, -0.04);
    glVertex2f(0.735, -0.03);
    glVertex2f(0.655, -0.03);
    glVertex2f(0.655, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(0.665, -0.08);
    glVertex2f(0.665, -0.04);
    glVertex2f(0.67, -0.04);
    glVertex2f(0.67, -0.08);

    glEnd();

		//road
	glBegin(GL_QUADS);
glColor4ub(51, 57, 57, 1);
glVertex2f(1,-1);
glVertex2f(1,-.3);
glVertex2f(-1,-.3);
glVertex2f(-1,-1);
glEnd();

//strip

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();



glTranslatef(.4,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(1.2,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.6,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(.4,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();





glTranslatef(.8,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.2,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(1.6,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_POLYGON); //Car
 glColor3ub(178,26,26);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.42,-0.62);
    glVertex2f(-0.48,-0.62);
    glVertex2f(-0.52,-0.56);
    glVertex2f(-0.88,-0.56);
    glVertex2f(-0.92,-0.62);
    glVertex2f(-0.98,-0.62);
    glVertex2f(-1,-0.7);
    glEnd();

 glBegin(GL_POLYGON);
glColor3ub(113,113,113);
    glVertex2f(-0.87,-0.57);
    glVertex2f(-0.91,-0.63);

    glVertex2f(-0.49,-0.63);
    glVertex2f(-0.53,-0.57);
    glEnd();

   glBegin(GL_POLYGON);
glColor3ub(178,26,26);
    glVertex2f(-0.7,-0.63);
    glVertex2f(-0.7,-0.57);
    glVertex2f(-0.71,-0.57);
    glVertex2f(-0.71,-0.63);
    glEnd();


    GLfloat x12=-0.85f; GLfloat y12=-0.7f; GLfloat radius12 =0.05f;
	int triangleAmount12 = 20; //# of triangles used to draw circle


	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x12,y12); // center of circle
		for(u = 0; u <= triangleAmount12;u++) {
			glVertex2f(
		            x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



//car circle border

	GLfloat x14=-0.85f; GLfloat y14=-0.7f; GLfloat radius14 = 0.03f;
	int lineAmount14 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;
glLineWidth(11);

	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb  = 0; cb <= lineAmount14;cb++) {
			glVertex2f(
			    x14 + (radius14 * cos(cb *  twicePi14 / lineAmount14)),
			    y14 + (radius14* sin(cb * twicePi14 / lineAmount14))
			);
		}
	glEnd();



GLfloat x13=-0.55f; GLfloat y13=-0.7f; GLfloat radius13 =0.05f;
	int triangleAmount13 = 20; //# of triangles used to draw circle


	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x13,y13); // center of circle
		for(v = 0; v <= triangleAmount13;v++) {
			glVertex2f(
		            x13 + (radius13 * cos(v *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(v* twicePi13 / triangleAmount13))
			);
		}
	glEnd();



//car circle border

	GLfloat x15=-0.55f; GLfloat y15=-0.7f; GLfloat radius15 = 0.03f;
	int lineAmount15 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;
glLineWidth(11);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb1  = 0; cb1 <= lineAmount15;cb1++) {
			glVertex2f(
			    x15 + (radius15* cos(cb1 *  twicePi15 / lineAmount15)),
			    y14 + (radius15* sin(cb1 * twicePi15 / lineAmount15))
			);
		}
	glEnd();
	glPopMatrix();






    //**************************************AHSAN MANJIL// ********************************



//whole body
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(.96,0);
glVertex2f(.96,.26);
glVertex2f(.9,.26);
glVertex2f(.9,0);

glVertex2f(.9,0);
glVertex2f(.9,.24);
glVertex2f(.8,.24);
glVertex2f(.8,0);

glVertex2f(.8,0);
glVertex2f(.8,.26);
glVertex2f(.74,.26);
glVertex2f(.74,0);

glVertex2f(.74,0);
glVertex2f(.74,.22);
glVertex2f(.33,.22);
glVertex2f(.33,0);

glVertex2f(.33,0);
glVertex2f(.33,.26);
glVertex2f(.3,.26);
glVertex2f(.3,0);

glVertex2f(.3,0);
glVertex2f(.3,.24);
glVertex2f(-.66,.24);
glVertex2f(-.66,0);

//backside
glColor4ub(156, 80, 80, 1);
glVertex2f(-.66,0);
glVertex2f(-.66,.24);
glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.42,.24);
glVertex2f(-.42,.28);
glVertex2f(-.48,.28);
glVertex2f(-.48,.24);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.48,.24);
glVertex2f(-.48,.26);
glVertex2f(-.58,.26);
glVertex2f(-.58,.24);
glEnd();

////left body polygon
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(-.58,.24);
glVertex2f(-.58,.28);
glVertex2f(-.64,.28);
glVertex2f(-.64,.26);
glVertex2f(-.66,.24);
glEnd();



//gombuj
GLfloat x=0.115f; GLfloat y=0.44f; GLfloat radius = 0.11f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//gombuj diamond
glBegin(GL_TRIANGLES);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);
glEnd();

//lines
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);


glVertex2f(.96,0);
glVertex2f(.96,.26);

glVertex2f(.96,.26);
glVertex2f(.9,.26);

glVertex2f(.9,.26);
glVertex2f(.9,.24);

glVertex2f(.9,.24);
glVertex2f(.8,.24);


glVertex2f(.8,.24);
glVertex2f(.8,.26);

glVertex2f(.8,.26);
glVertex2f(.74,.26);


glVertex2f(.74,.26);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.33,.22);

glVertex2f(.33,.22);
glVertex2f(.33,.26);

glVertex2f(.33,.26);
glVertex2f(.3,.26);


glVertex2f(.3,.26);
glVertex2f(.3,.24);


glVertex2f(.3,.24);
glVertex2f(-.42,.24);


glVertex2f(-.42,.24);
glVertex2f(-.42,.28);

glVertex2f(-.42,.28);
glVertex2f(-.48,.28);


glVertex2f(-.48,.28);
glVertex2f(-.48,.26);


glVertex2f(-.48,.26);
glVertex2f(-.58,.26);

glVertex2f(-.58,.26);
glVertex2f(-.58,.28);

glVertex2f(-.58,.28);
glVertex2f(-.64,.28);


glVertex2f(-.64,.28);
glVertex2f(-.64,.26);

glVertex2f(-.64,.26);
glVertex2f(-.66,.24);

glVertex2f(-.66,.24);
glVertex2f(-.76,.16);

glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glVertex2f(-.76,.06);
glVertex2f(-.66,0);
glEnd();

//gombuj circle border
int j;
	GLfloat x1=0.115f; GLfloat y1=0.44f; GLfloat radius1 = 0.11f;
	int lineAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(46, 15, 23);
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi1 / lineAmount1)),
			    y + (radius* sin(j * twicePi1 / lineAmount1))
			);
		}
	glEnd();
//gombuj pillar
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(.22,.23);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.23);
glEnd();

//gombuj pillar border
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.22,.24);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.24);
glEnd();


//gombuj diamond LINE
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);

glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);

glEnd();


//GROUND
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.96,0);
glVertex2f(-.66,0);

glVertex2f(-.66,0);
glVertex2f(-.76,0.065);


glEnd();

//BACK LINES
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.0);
glVertex2f(-.66,.24);

glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(-.68,.2);
glVertex2f(-.76,.16);

glVertex2f(-.42,.2);
glVertex2f(-.68,.2);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.42,.0);
glVertex2f(-.42,.24);

glVertex2f(-.46,.0);
glVertex2f(-.46,.24);

glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.44,.0);
glVertex2f(-.44,.24);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.68,.18);
glVertex2f(-.76,.14);

glVertex2f(-.42,.18);
glVertex2f(-.68,.18);
glEnd();

//back window
glLineWidth(1.7);
glBegin(GL_LINES);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.72,.1);
glVertex2f(-.7,.09);


glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();


glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.7,.09);
glVertex2f(-.7,.14);

glVertex2f(-.72,.13);
glVertex2f(-.72,.1);



glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);



//small windows
glColor4ub(71, 52, 39, 1);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();

glTranslatef(.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.08,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.16,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(-.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.01,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.03,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.41,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.55,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.53,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.49,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.45,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.42,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(.17,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.24);
glVertex2f(-.42,.24);
glEnd();



glBegin(GL_POLYGON);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();

glTranslatef(.1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.2,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.3,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glTranslatef(.7,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.9,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();

glScalef(.7,1.75,0);
glTranslatef(.4,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(1,1.75,0);
glTranslatef(.465,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(.7,1.75,0);
glTranslatef(.635,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


//upper pillar
glScalef(.6,1.6,0);
glTranslatef(.44,0.16,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.54,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.64,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

//pillar 129, 93, 96



//gombuj lines
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(.225,.256);
glVertex2f(0.003,.256);
glEnd();

glTranslatef(0,.169,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();

glLineWidth(1.5);
glTranslatef(0,.183,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();



glTranslatef(0,.015,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glTranslatef(0,-.012,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.185);
glVertex2f(-.42,.2);

glVertex2f(-.4,.170);
glVertex2f(-.42,.185);
glVertex2f(-.4,.185);
glVertex2f(.74,.185);
glEnd();

glBegin(GL_LINES);
glVertex2f(-.4,.17);
glVertex2f(.74,.17);

glVertex2f(.74,.17);
glVertex2f(.76,.145);


glVertex2f(.74,.185);
glVertex2f(.76,.164);


glVertex2f(.76,.145);
glVertex2f(.96,.145);

glVertex2f(.76,.164);
glVertex2f(.96,.164);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.74,.0);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.96,.22);


glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();



glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(.77,.0);
glVertex2f(.77,.22);
glEnd();


glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.78,.0);
glVertex2f(.78,.235);
glEnd();

glLineWidth(5);
glTranslatef(1.18,0,0);
glBegin(GL_LINES);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();
glLoadIdentity();




glTranslatef(1.435,-0.016,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);


glEnd();
glLoadIdentity();

glTranslatef(1.435,-0.015,0);
glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();
glLoadIdentity();


glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.01,.28);
glVertex2f(.22,.28);

glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();


glLineWidth(4.5);
glTranslatef(.01,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();

glLineWidth(1.7);
glTranslatef(.02,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.06,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.07,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.08,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.12,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.14,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.13,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.18,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(4.5);
glTranslatef(.187,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.194,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


//PILLAR
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);

//diamonds

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();



glTranslatef(-0.3,0,0);
glBegin(GL_QUADS);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);
glEnd();
//diamonds
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();
glLoadIdentity();


glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();



glTranslatef(-0.3,0,0);
glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(0.315, 0);
glVertex2f(0.315,0.34);


glVertex2f(0.012, 0);
glVertex2f(0.012,0.34);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();

glTranslatef(-0.3,0,0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();
glLoadIdentity();



glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);
glEnd();


glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);


glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();






glTranslatef(-0.3,0,0);
glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);

glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);

glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);

glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();
glLoadIdentity();


//stair


glBegin(GL_POLYGON);

glColor4ub(156, 80, 80, 1);
glVertex2f(.42,-.14);
glVertex2f(.42,-.12);
glVertex2f(.40,-.1);
glVertex2f(.40,-.08);
glVertex2f(.38,-.06);
glVertex2f(.38,-.04);
glVertex2f(.36,0);
glVertex2f(.01,0);//
glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
glVertex2f(.05,-.08);
glVertex2f(.05,-.1);
glVertex2f(.07,-.12);
glVertex2f(.07,-.14);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(.42,-.14);
glVertex2f(.42,-.12);

glVertex2f(.42,-.12);
glVertex2f(.40,-.1);

glVertex2f(.40,-.1);
glVertex2f(.40,-.08);

glVertex2f(.40,-.08);
glVertex2f(.38,-.06);

glVertex2f(.38,-.06);
glVertex2f(.38,-.04);

glVertex2f(.38,-.04);
glVertex2f(.36,0);

glVertex2f(.36,0);
glVertex2f(.01,0);


glVertex2f(.02,-0.02);
glVertex2f(.37,-.02);

glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
//

glVertex2f(.03,-.06);
glVertex2f(.05,-.08);

glVertex2f(.05,-.08);
glVertex2f(.05,-.1);

glVertex2f(.05,-.1);
glVertex2f(.07,-.12);

glVertex2f(.07,-.12);
glVertex2f(.07,-.14);


glVertex2f(.42,-.14);
glVertex2f(.07,-.14);


glVertex2f(.42,-.12);
glVertex2f(.07,-.12);

glVertex2f(.40,-.1);
glVertex2f(.05,-.1);


glVertex2f(.40,-.08);
glVertex2f(.05,-.08);

glVertex2f(.38,-.06);
glVertex2f(.03,-.06);

glVertex2f(.38,-.04);
glVertex2f(.03,-.04);

glVertex2f(.36,0);
glVertex2f(.01,0);

glEnd();

//  tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.62, -0.28);
    glVertex2f(-0.60, -0.28);
    glVertex2f(-0.60, -0.18);
    glVertex2f(-0.62, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.66, -0.18);
    glVertex2f(-0.56, -0.18);
    glVertex2f(-0.61, -0.07);
    glEnd();

//  tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.42, -0.28);
    glVertex2f(-0.40, -0.28);
    glVertex2f(-0.40, -0.18);
    glVertex2f(-0.42, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.46, -0.18);
    glVertex2f(-0.36, -0.18);
    glVertex2f(-0.41, -0.07);
    glEnd();
//  tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.07, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.07, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.11, -0.18);
    glVertex2f(-0.01, -0.18);
    glVertex2f(-0.06, -0.07);
    glEnd();
//  tree 4 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(0.53, -0.28);
    glVertex2f(0.55, -0.28);
    glVertex2f(0.55, -0.18);
    glVertex2f(0.53, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(0.49, -0.18);
    glVertex2f(0.59, -0.18);
    glVertex2f(0.54, -0.07);
    glEnd();

//  Small tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.82, 0.08);
    glVertex2f(-0.81, 0.08);
    glVertex2f(-0.81, 0.15);
    glVertex2f(-0.82, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.83, 0.15);
    glVertex2f(-0.80, 0.15);
    glVertex2f(-0.815, 0.18);
    glEnd();
//  Small tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.87, 0.08);
    glVertex2f(-0.86, 0.08);
    glVertex2f(-0.86, 0.15);
    glVertex2f(-0.87, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.88, 0.15);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.865, 0.18);
    glEnd();
 //  Small tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.91, 0.08);
    glVertex2f(-0.90, 0.08);
    glVertex2f(-0.90, 0.15);
    glVertex2f(-0.91, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(251, 126, 2);
    glVertex2f(-0.92, 0.15);
    glVertex2f(-0.89, 0.15);
    glVertex2f(-0.905, 0.18);
    glEnd();


glPushMatrix();
//glTranslatef(position2,0,0);

    	//cloud
GLfloat x2=-0.97f; GLfloat y2=0.97f; GLfloat radius2 =0.12f;
	int triangleAmount2 = 20; //# of triangles used to draw circle


	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x2,y2); // center of circle
		for(l = 0; l <= triangleAmount2;l++) {
			glVertex2f(
		            x2 + (radius2 * cos(l *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(l * twicePi2 / triangleAmount2))
			);
		}
	glEnd();



GLfloat x3=-0.7f; GLfloat y3=0.95f; GLfloat radius3 =0.2f;
	int triangleAmount3 = 20; //# of triangles used to draw circle


	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
glColor4ub(177, 195, 217, 1);
		glVertex2f(x3,y3); // center of circle
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x3 + (radius3 * cos(k *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(k * twicePi3 / triangleAmount3))
			);
		}
	glEnd();


GLfloat x4=-0.45; GLfloat y4=0.97f; GLfloat radius4 =0.12f;
	int triangleAmount4 = 20; //# of triangles used to draw circle


	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x4,y4); // center of circle
		for(m = 0; m <= triangleAmount2;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
			);
		}
	glEnd();




	GLfloat x5=-0.3; GLfloat y5=0.97f; GLfloat radius5 =0.12f;
	int triangleAmount5 = 20; //# of triangles used to draw circle


	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x5,y5); // center of circle
		for(n = 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n*  twicePi5/ triangleAmount5)),
			    y5 + (radius5 * sin(n * twicePi5 / triangleAmount5))
			);
		}
	glEnd();





	GLfloat x6=-0.02f; GLfloat y6=0.96f; GLfloat radius6 =0.2f;
	int triangleAmount6 = 20; //# of triangles used to draw circle


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
glColor4ub(177, 195, 217, 1);
		glVertex2f(x6,y6); // center of circle
		for(o= 0; o <= triangleAmount2;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o * twicePi6 / triangleAmount6))
			);
		}
	glEnd();



		GLfloat x7=.25; GLfloat y7=0.97f; GLfloat radius7 =0.12f;
	int triangleAmount7 = 20; //# of triangles used to draw circle


	GLfloat twicePi7= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x7,y7); // center of circle
		for(p = 0; p <= triangleAmount7;p++) {
			glVertex2f(
		            x7 + (radius7 * cos(p*  twicePi7/ triangleAmount7)),
			    y7 + (radius7 * sin(p * twicePi7 / triangleAmount7))
			);
		}
	glEnd();



			GLfloat x8=.3;GLfloat y8=0.97f; GLfloat radius8 =0.12f;
	int triangleAmount8 = 20; //# of triangles used to draw circle


	GLfloat twicePi8= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x8,y8); // center of circle
		for(q = 0; q <= triangleAmount8;q++) {
			glVertex2f(
		            x8 + (radius8 * cos(q*  twicePi8/ triangleAmount8)),
			    y8 + (radius8 * sin(q * twicePi8 / triangleAmount8))
			);
		}
	glEnd();



	GLfloat x9=0.7f; GLfloat y9=0.96f; GLfloat radius9 =0.2f;
	int triangleAmount9 = 20; //# of triangles used to draw circle


	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x9,y9); // center of circle
		for(r= 0; r<= triangleAmount9;r++) {
			glVertex2f(
		            x9 + (radius9 * cos(r *  twicePi9/ triangleAmount9)),
			    y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
			);
		}
	glEnd();






		GLfloat x10=.95;GLfloat y10=0.97f; GLfloat radius10 =0.12f;
	int triangleAmount10 = 20; //# of triangles used to draw circle


	GLfloat twicePi10= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(177, 195, 217, 1);
		glVertex2f(x10,y10); // center of circle
		for(s = 0; s<= triangleAmount10;s++) {
			glVertex2f(
		            x10+ (radius10 * cos(s*  twicePi10/ triangleAmount10)),
			    y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
			);
		}
	glEnd();
glPopMatrix();


glutTimerFunc(7000,demo_night,0);



glFlush();
}


void winter_demo(int val) {

 glutDisplayFunc(winter);


}





//**********************************RAINY SEASON******************************************//





void rainy()
{    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


  //GROUND

glBegin(GL_QUADS);
glColor4ub(85, 123, 36, 1);
glVertex2f(1,-.3);
glVertex2f(1,.1);
glVertex2f(-1,.1);
glVertex2f(-1,-.3);
glEnd();

////sky
glBegin(GL_QUADS);
glColor4ub(184, 183, 182, 1);
glVertex2f(1,.1);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,.1);
glEnd();

// Left Side Bench 1
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.24, -0.08);
    glVertex2f(-0.24, -0.04);
    glVertex2f(-0.235, -0.04);
    glVertex2f(-0.235, -0.08);

    // sitting bench

    glVertex2f(-0.225, -0.04);
    glVertex2f(-0.225, -0.03);
    glVertex2f(-0.30, -0.03);
    glVertex2f(-0.30, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.285, -0.08);
    glVertex2f(-0.285, -0.04);
    glVertex2f(-0.29, -0.04);
    glVertex2f(-0.29, -0.08);
    glEnd();

//Left Side Bench 2
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.095, -0.08);
    glVertex2f(-0.095, -0.04);
    glVertex2f(-0.10, -0.04);
    glVertex2f(-0.10, -0.08);

    // sitting bench

    glVertex2f(-0.085, -0.04);
    glVertex2f(-0.085, -0.03);
    glVertex2f(-0.15, -0.03);
    glVertex2f(-0.15, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.135, -0.08);
    glVertex2f(-0.135, -0.04);
    glVertex2f(-0.14, -0.04);
    glVertex2f(-0.14, -0.08);

    glEnd();

//RIGHT Side Bench
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(0.72, -0.08);
    glVertex2f(0.72, -0.04);
    glVertex2f(0.725, -0.04);
    glVertex2f(0.725, -0.08);

    // sitting bench

    glVertex2f(0.735, -0.04);
    glVertex2f(0.735, -0.03);
    glVertex2f(0.655, -0.03);
    glVertex2f(0.655, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(0.665, -0.08);
    glVertex2f(0.665, -0.04);
    glVertex2f(0.67, -0.04);
    glVertex2f(0.67, -0.08);

    glEnd();

		//road
	glBegin(GL_QUADS);
glColor4ub(51, 57, 57, 1);
glVertex2f(1,-1);
glVertex2f(1,-.3);
glVertex2f(-1,-.3);
glVertex2f(-1,-1);
glEnd();

//strip

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();



glTranslatef(.4,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(1.2,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.6,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(.4,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();





glTranslatef(.8,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.2,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(1.6,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();



glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_POLYGON); //Car
 glColor3ub(178,26,26);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.42,-0.62);
    glVertex2f(-0.48,-0.62);
    glVertex2f(-0.52,-0.56);
    glVertex2f(-0.88,-0.56);
    glVertex2f(-0.92,-0.62);
    glVertex2f(-0.98,-0.62);
    glVertex2f(-1,-0.7);
    glEnd();

 glBegin(GL_POLYGON);
glColor3ub(113,113,113);
    glVertex2f(-0.87,-0.57);
    glVertex2f(-0.91,-0.63);

    glVertex2f(-0.49,-0.63);
    glVertex2f(-0.53,-0.57);
    glEnd();

   glBegin(GL_POLYGON);
glColor3ub(178,26,26);
    glVertex2f(-0.7,-0.63);
    glVertex2f(-0.7,-0.57);
    glVertex2f(-0.71,-0.57);
    glVertex2f(-0.71,-0.63);
    glEnd();


    GLfloat x12=-0.85f; GLfloat y12=-0.7f; GLfloat radius12 =0.05f;
	int triangleAmount12 = 20; //# of triangles used to draw circle


	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x12,y12); // center of circle
		for(u = 0; u <= triangleAmount12;u++) {
			glVertex2f(
		            x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



//car circle border

	GLfloat x14=-0.85f; GLfloat y14=-0.7f; GLfloat radius14 = 0.03f;
	int lineAmount14 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;
glLineWidth(11);

	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb  = 0; cb <= lineAmount14;cb++) {
			glVertex2f(
			    x14 + (radius14 * cos(cb *  twicePi14 / lineAmount14)),
			    y14 + (radius14* sin(cb * twicePi14 / lineAmount14))
			);
		}
	glEnd();



GLfloat x13=-0.55f; GLfloat y13=-0.7f; GLfloat radius13 =0.05f;
	int triangleAmount13 = 20; //# of triangles used to draw circle


	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x13,y13); // center of circle
		for(v = 0; v <= triangleAmount13;v++) {
			glVertex2f(
		            x13 + (radius13 * cos(v *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(v* twicePi13 / triangleAmount13))
			);
		}
	glEnd();




//car circle border

	GLfloat x15=-0.55f; GLfloat y15=-0.7f; GLfloat radius15 = 0.03f;
	int lineAmount15 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;
glLineWidth(11);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb1  = 0; cb1 <= lineAmount15;cb1++) {
			glVertex2f(
			    x15 + (radius15* cos(cb1 *  twicePi15 / lineAmount15)),
			    y14 + (radius15* sin(cb1 * twicePi15 / lineAmount15))
			);
		}
	glEnd();
	glPopMatrix();






    //**************************************AHSAN MANJIL// ********************************




//whole body
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(.96,0);
glVertex2f(.96,.26);
glVertex2f(.9,.26);
glVertex2f(.9,0);

glVertex2f(.9,0);
glVertex2f(.9,.24);
glVertex2f(.8,.24);
glVertex2f(.8,0);

glVertex2f(.8,0);
glVertex2f(.8,.26);
glVertex2f(.74,.26);
glVertex2f(.74,0);

glVertex2f(.74,0);
glVertex2f(.74,.22);
glVertex2f(.33,.22);
glVertex2f(.33,0);

glVertex2f(.33,0);
glVertex2f(.33,.26);
glVertex2f(.3,.26);
glVertex2f(.3,0);

glVertex2f(.3,0);
glVertex2f(.3,.24);
glVertex2f(-.66,.24);
glVertex2f(-.66,0);

//backside
glColor4ub(156, 80, 80, 1);
glVertex2f(-.66,0);
glVertex2f(-.66,.24);
glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.42,.24);
glVertex2f(-.42,.28);
glVertex2f(-.48,.28);
glVertex2f(-.48,.24);

glColor4ub(156, 80, 80, 1);
glVertex2f(-.48,.24);
glVertex2f(-.48,.26);
glVertex2f(-.58,.26);
glVertex2f(-.58,.24);
glEnd();

////left body polygon
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(-.58,.24);
glVertex2f(-.58,.28);
glVertex2f(-.64,.28);
glVertex2f(-.64,.26);
glVertex2f(-.66,.24);
glEnd();



//gombuj
GLfloat x=0.115f; GLfloat y=0.44f; GLfloat radius = 0.11f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//gombuj diamond
glBegin(GL_TRIANGLES);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);
glEnd();

//lines
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);


glVertex2f(.96,0);
glVertex2f(.96,.26);

glVertex2f(.96,.26);
glVertex2f(.9,.26);

glVertex2f(.9,.26);
glVertex2f(.9,.24);

glVertex2f(.9,.24);
glVertex2f(.8,.24);


glVertex2f(.8,.24);
glVertex2f(.8,.26);

glVertex2f(.8,.26);
glVertex2f(.74,.26);


glVertex2f(.74,.26);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.33,.22);

glVertex2f(.33,.22);
glVertex2f(.33,.26);

glVertex2f(.33,.26);
glVertex2f(.3,.26);


glVertex2f(.3,.26);
glVertex2f(.3,.24);


glVertex2f(.3,.24);
glVertex2f(-.42,.24);


glVertex2f(-.42,.24);
glVertex2f(-.42,.28);

glVertex2f(-.42,.28);
glVertex2f(-.48,.28);


glVertex2f(-.48,.28);
glVertex2f(-.48,.26);


glVertex2f(-.48,.26);
glVertex2f(-.58,.26);

glVertex2f(-.58,.26);
glVertex2f(-.58,.28);

glVertex2f(-.58,.28);
glVertex2f(-.64,.28);


glVertex2f(-.64,.28);
glVertex2f(-.64,.26);

glVertex2f(-.64,.26);
glVertex2f(-.66,.24);

glVertex2f(-.66,.24);
glVertex2f(-.76,.16);

glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glVertex2f(-.76,.06);
glVertex2f(-.66,0);
glEnd();

//gombuj circle border
int j;
	GLfloat x1=0.115f; GLfloat y1=0.44f; GLfloat radius1 = 0.11f;
	int lineAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(46, 15, 23);
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi1 / lineAmount1)),
			    y + (radius* sin(j * twicePi1 / lineAmount1))
			);
		}
	glEnd();
//gombuj pillar
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(.22,.23);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.23);
glEnd();

//gombuj pillar border
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.22,.24);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.24);
glEnd();


//gombuj diamond LINE
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);

glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);

glEnd();


//GROUND
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.96,0);
glVertex2f(-.66,0);

glVertex2f(-.66,0);
glVertex2f(-.76,0.065);


glEnd();

//BACK LINES
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.0);
glVertex2f(-.66,.24);

glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(-.68,.2);
glVertex2f(-.76,.16);

glVertex2f(-.42,.2);
glVertex2f(-.68,.2);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.42,.0);
glVertex2f(-.42,.24);

glVertex2f(-.46,.0);
glVertex2f(-.46,.24);

glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.44,.0);
glVertex2f(-.44,.24);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.68,.18);
glVertex2f(-.76,.14);

glVertex2f(-.42,.18);
glVertex2f(-.68,.18);
glEnd();

//back window
glLineWidth(1.7);
glBegin(GL_LINES);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.72,.1);
glVertex2f(-.7,.09);


glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();


glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.7,.09);
glVertex2f(-.7,.14);

glVertex2f(-.72,.13);
glVertex2f(-.72,.1);



glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);



//small windows
glColor4ub(71, 52, 39, 1);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();

glTranslatef(.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.08,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.16,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(-.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.01,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.03,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.41,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.55,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.53,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.49,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.45,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.42,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(.17,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.66,.24);
glVertex2f(-.42,.24);
glEnd();



glBegin(GL_POLYGON);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();

glTranslatef(.1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.2,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.3,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glTranslatef(.7,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.9,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();

glScalef(.7,1.75,0);
glTranslatef(.4,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(1,1.75,0);
glTranslatef(.465,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(.7,1.75,0);
glTranslatef(.635,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


//upper pillar
glScalef(.6,1.6,0);
glTranslatef(.44,0.16,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.54,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.64,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

//pillar 129, 93, 96



//gombuj lines
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);

glVertex2f(.225,.256);
glVertex2f(0.003,.256);
glEnd();

glTranslatef(0,.169,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();

glLineWidth(1.5);
glTranslatef(0,.183,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();



glTranslatef(0,.015,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glTranslatef(0,-.012,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.185);
glVertex2f(-.42,.2);

glVertex2f(-.4,.170);
glVertex2f(-.42,.185);
glVertex2f(-.4,.185);
glVertex2f(.74,.185);
glEnd();

glBegin(GL_LINES);
glVertex2f(-.4,.17);
glVertex2f(.74,.17);

glVertex2f(.74,.17);
glVertex2f(.76,.145);


glVertex2f(.74,.185);
glVertex2f(.76,.164);


glVertex2f(.76,.145);
glVertex2f(.96,.145);

glVertex2f(.76,.164);
glVertex2f(.96,.164);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.74,.0);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.96,.22);


glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();



glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(.77,.0);
glVertex2f(.77,.22);
glEnd();


glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23);
glVertex2f(.78,.0);
glVertex2f(.78,.235);
glEnd();

glLineWidth(5);
glTranslatef(1.18,0,0);
glBegin(GL_LINES);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();
glLoadIdentity();




glTranslatef(1.435,-0.016,0);
glBegin(GL_QUADS);
glColor4ub(71, 52, 39, 1);

glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);


glEnd();
glLoadIdentity();

glTranslatef(1.435,-0.015,0);
glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();
glLoadIdentity();


glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.01,.28);
glVertex2f(.22,.28);

glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();


glLineWidth(4.5);
glTranslatef(.01,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();

glLineWidth(1.7);
glTranslatef(.02,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.06,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.07,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.08,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.12,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.14,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.13,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.18,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(4.5);
glTranslatef(.187,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.194,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


//PILLAR
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);

//diamonds

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();






glTranslatef(-0.3,0,0);
glBegin(GL_QUADS);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);
glEnd();
//diamonds
glBegin(GL_QUADS);
glColor4ub(156, 80, 80, 1);
glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor4ub(156, 80, 80, 1);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();
glLoadIdentity();


glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();



glTranslatef(-0.3,0,0);
glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(0.315, 0);
glVertex2f(0.315,0.34);


glVertex2f(0.012, 0);
glVertex2f(0.012,0.34);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();

glTranslatef(-0.3,0,0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();
glLoadIdentity();



glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);
glEnd();


glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);


glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();






glTranslatef(-0.3,0,0);
glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);

glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);

glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);

glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();
glLoadIdentity();


//stair


glBegin(GL_POLYGON);

glColor4ub(156, 80, 80, 1);
glVertex2f(.42,-.14);
glVertex2f(.42,-.12);
glVertex2f(.40,-.1);
glVertex2f(.40,-.08);
glVertex2f(.38,-.06);
glVertex2f(.38,-.04);
glVertex2f(.36,0);
glVertex2f(.01,0);//
glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
glVertex2f(.05,-.08);
glVertex2f(.05,-.1);
glVertex2f(.07,-.12);
glVertex2f(.07,-.14);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(.42,-.14);
glVertex2f(.42,-.12);

glVertex2f(.42,-.12);
glVertex2f(.40,-.1);

glVertex2f(.40,-.1);
glVertex2f(.40,-.08);

glVertex2f(.40,-.08);
glVertex2f(.38,-.06);

glVertex2f(.38,-.06);
glVertex2f(.38,-.04);

glVertex2f(.38,-.04);
glVertex2f(.36,0);

glVertex2f(.36,0);
glVertex2f(.01,0);


glVertex2f(.02,-0.02);
glVertex2f(.37,-.02);

glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
//

glVertex2f(.03,-.06);
glVertex2f(.05,-.08);

glVertex2f(.05,-.08);
glVertex2f(.05,-.1);

glVertex2f(.05,-.1);
glVertex2f(.07,-.12);

glVertex2f(.07,-.12);
glVertex2f(.07,-.14);


glVertex2f(.42,-.14);
glVertex2f(.07,-.14);


glVertex2f(.42,-.12);
glVertex2f(.07,-.12);

glVertex2f(.40,-.1);
glVertex2f(.05,-.1);


glVertex2f(.40,-.08);
glVertex2f(.05,-.08);

glVertex2f(.38,-.06);
glVertex2f(.03,-.06);

glVertex2f(.38,-.04);
glVertex2f(.03,-.04);

glVertex2f(.36,0);
glVertex2f(.01,0);

glEnd();

//  tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.62, -0.28);
    glVertex2f(-0.60, -0.28);
    glVertex2f(-0.60, -0.18);
    glVertex2f(-0.62, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.66, -0.18);
    //glColor3f(0.0, 0.5, 0.0);
    glVertex2f(-0.56, -0.18);
    //glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-0.61, -0.07);
    glEnd();

//  tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.42, -0.28);
    glVertex2f(-0.40, -0.28);
    glVertex2f(-0.40, -0.18);
    glVertex2f(-0.42, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.46, -0.18);
    glVertex2f(-0.36, -0.18);
    glVertex2f(-0.41, -0.07);
    glEnd();
//  tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.07, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.07, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.11, -0.18);
    glVertex2f(-0.01, -0.18);
    glVertex2f(-0.06, -0.07);
    glEnd();
//  tree 4 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(0.53, -0.28);
    glVertex2f(0.55, -0.28);
    glVertex2f(0.55, -0.18);
    glVertex2f(0.53, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(0.49, -0.18);
    glVertex2f(0.59, -0.18);
    glVertex2f(0.54, -0.07);
    glEnd();

//  Small tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.82, 0.08);
    glVertex2f(-0.81, 0.08);
    glVertex2f(-0.81, 0.15);
    glVertex2f(-0.82, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.83, 0.15);
    glVertex2f(-0.80, 0.15);
    glVertex2f(-0.815, 0.18);
    glEnd();
//  Small tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.87, 0.08);
    glVertex2f(-0.86, 0.08);
    glVertex2f(-0.86, 0.15);
    glVertex2f(-0.87, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.88, 0.15);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.865, 0.18);
    glEnd();
 //  Small tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.91, 0.08);
    glVertex2f(-0.90, 0.08);
    glVertex2f(-0.90, 0.15);
    glVertex2f(-0.91, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.92, 0.15);
    glVertex2f(-0.89, 0.15);
    glVertex2f(-0.905, 0.18);
    glEnd();
//**********************************RAIN *************************************//


    	//cloud
GLfloat x2=-0.97f; GLfloat y2=0.97f; GLfloat radius2 =0.12f;
	int triangleAmount2 = 20; //# of triangles used to draw circle


	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x2,y2); // center of circle
		for(l = 0; l <= triangleAmount2;l++) {
			glVertex2f(
		            x2 + (radius2 * cos(l *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(l * twicePi2 / triangleAmount2))
			);
		}
	glEnd();



GLfloat x3=-0.7f; GLfloat y3=0.95f; GLfloat radius3 =0.2f;
	int triangleAmount3 = 20; //# of triangles used to draw circle


	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
glColor4ub(155, 153, 151, 1);
		glVertex2f(x3,y3); // center of circle
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x3 + (radius3 * cos(k *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(k * twicePi3 / triangleAmount3))
			);
		}
	glEnd();


GLfloat x4=-0.45; GLfloat y4=0.97f; GLfloat radius4 =0.12f;
	int triangleAmount4 = 20; //# of triangles used to draw circle


	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x4,y4); // center of circle
		for(m = 0; m <= triangleAmount2;m++) {
			glVertex2f(
		            x4 + (radius4 * cos(m *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(m * twicePi4 / triangleAmount4))
			);
		}
	glEnd();




	GLfloat x5=-0.3; GLfloat y5=0.97f; GLfloat radius5 =0.12f;
	int triangleAmount5 = 20; //# of triangles used to draw circle


	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x5,y5); // center of circle
		for(n = 0; n <= triangleAmount5;n++) {
			glVertex2f(
		            x5 + (radius5 * cos(n*  twicePi5/ triangleAmount5)),
			    y5 + (radius5 * sin(n * twicePi5 / triangleAmount5))
			);
		}
	glEnd();





	GLfloat x6=-0.02f; GLfloat y6=0.96f; GLfloat radius6 =0.2f;
	int triangleAmount6 = 20; //# of triangles used to draw circle


	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
glColor4ub(155, 153, 151, 1);
		glVertex2f(x6,y6); // center of circle
		for(o= 0; o <= triangleAmount2;o++) {
			glVertex2f(
		            x6 + (radius6 * cos(o *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(o * twicePi6 / triangleAmount6))
			);
		}
	glEnd();



		GLfloat x7=.25; GLfloat y7=0.97f; GLfloat radius7 =0.12f;
	int triangleAmount7 = 20; //# of triangles used to draw circle


	GLfloat twicePi7= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x7,y7); // center of circle
		for(p = 0; p <= triangleAmount7;p++) {
			glVertex2f(
		            x7 + (radius7 * cos(p*  twicePi7/ triangleAmount7)),
			    y7 + (radius7 * sin(p * twicePi7 / triangleAmount7))
			);
		}
	glEnd();



			GLfloat x8=.4;GLfloat y8=0.97f; GLfloat radius8 =0.12f;
	int triangleAmount8 = 20; //# of triangles used to draw circle


	GLfloat twicePi8= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x8,y8); // center of circle
		for(q = 0; q <= triangleAmount8;q++) {
			glVertex2f(
		            x8 + (radius8 * cos(q*  twicePi8/ triangleAmount8)),
			    y8 + (radius8 * sin(q * twicePi8 / triangleAmount8))
			);
		}
	glEnd();








	GLfloat x9=0.7f; GLfloat y9=0.96f; GLfloat radius9 =0.2f;
	int triangleAmount9 = 20; //# of triangles used to draw circle


	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x9,y9); // center of circle
		for(r= 0; r<= triangleAmount9;r++) {
			glVertex2f(
		            x9 + (radius9 * cos(r *  twicePi9/ triangleAmount9)),
			    y9 + (radius9 * sin(r * twicePi9 / triangleAmount9))
			);
		}
	glEnd();




		GLfloat x10=.95;GLfloat y10=0.97f; GLfloat radius10 =0.12f;
	int triangleAmount10 = 20; //# of triangles used to draw circle


	GLfloat twicePi10= 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(155, 153, 151, 1);
		glVertex2f(x10,y10); // center of circle
		for(s = 0; s<= triangleAmount10;s++) {
			glVertex2f(
		            x10+ (radius10 * cos(s*  twicePi10/ triangleAmount10)),
			    y10 + (radius10 * sin(s * twicePi10 / triangleAmount10))
			);
		}
	glEnd();

//raindrop

	    ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();



    glPushMatrix();
glTranslatef(0,position4,0);

    ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();

    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.3,0);
  ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.6,0);
 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();








 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.9,0);

 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.2,0);



 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





  glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.5,0);



 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.8,0);
 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();




glPushMatrix();
glTranslatef(0,position4,0);

glPushMatrix();
glTranslatef(0,position4,0);
    ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();

    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.3,0);
  ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.6,0);
 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();








 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.9,0);

 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.2,0);



 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





  glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.5,0);



 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();





 glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.8,0);
 ///First Row

glLineWidth(1.5);
	glBegin(GL_LINES);
	glColor4ub(215, 214, 213, 1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);




	///2nd Row
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);



	///3rd Row


	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();
glLoadIdentity();


glPopMatrix();

glLoadIdentity();


glutTimerFunc(7000,winter_demo,0);

glFlush();
}

void rainy_demo(int val) {

 glutDisplayFunc(rainy);


}





//8*****************************************summer**************************************//




//summer
void summer() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);





    //GROUND

glBegin(GL_QUADS);
glColor4ub(178, 228, 27, 1);
glVertex2f(1,-.3);
glVertex2f(1,.1);
glVertex2f(-1,.1);
glVertex2f(-1,-.3);
glEnd();

////sky
glBegin(GL_QUADS);
glColor3ub(203, 231, 229);
glVertex2f(1,.1);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,.1);
glEnd();

// Left Side Bench 1
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.24, -0.08);
    glVertex2f(-0.24, -0.04);
    glVertex2f(-0.235, -0.04);
    glVertex2f(-0.235, -0.08);

    // sitting bench

    glVertex2f(-0.225, -0.04);
    glVertex2f(-0.225, -0.03);
    glVertex2f(-0.30, -0.03);
    glVertex2f(-0.30, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.285, -0.08);
    glVertex2f(-0.285, -0.04);
    glVertex2f(-0.29, -0.04);
    glVertex2f(-0.29, -0.08);
    glEnd();

//Left Side Bench 2
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(-0.095, -0.08);
    glVertex2f(-0.095, -0.04);
    glVertex2f(-0.10, -0.04);
    glVertex2f(-0.10, -0.08);

    // sitting bench

    glVertex2f(-0.085, -0.04);
    glVertex2f(-0.085, -0.03);
    glVertex2f(-0.15, -0.03);
    glVertex2f(-0.15, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(-0.135, -0.08);
    glVertex2f(-0.135, -0.04);
    glVertex2f(-0.14, -0.04);
    glVertex2f(-0.14, -0.08);

    glEnd();
//RIGHT Side Bench
    glBegin(GL_QUADS);
    // right piller
    glColor3f(0.961, 1.000, 0.980);
    glVertex2f(0.72, -0.08);
    glVertex2f(0.72, -0.04);
    glVertex2f(0.725, -0.04);
    glVertex2f(0.725, -0.08);

    // sitting bench

    glVertex2f(0.735, -0.04);
    glVertex2f(0.735, -0.03);
    glVertex2f(0.655, -0.03);
    glVertex2f(0.655, -0.04);

    //left piller

    glColor3f(0.941, 1.000, 0.941);
    glVertex2f(0.665, -0.08);
    glVertex2f(0.665, -0.04);
    glVertex2f(0.67, -0.04);
    glVertex2f(0.67, -0.08);

    glEnd();

//sun
GLfloat x11=-0.85f; GLfloat y11=0.85f; GLfloat radius11 =0.12f;
	int triangleAmount11 = 20; //# of triangles used to draw circle


	GLfloat twicePi11 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(247, 211, 66, 1);
		glVertex2f(x11,y11); // center of circle
		for(t = 0; t <= triangleAmount11;t++) {
			glVertex2f(
		            x11 + (radius11 * cos(t *  twicePi11 / triangleAmount11)),
			    y11 + (radius11 * sin(t * twicePi11 / triangleAmount11))
			);
		}
	glEnd();





		//road
	glBegin(GL_QUADS);
glColor4ub(51, 57, 57, 1);
glVertex2f(1,-1);
glVertex2f(1,-.3);
glVertex2f(-1,-.3);
glVertex2f(-1,-1);
glEnd();

//strip

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();



glTranslatef(.4,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(1.2,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.6,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,0,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glTranslatef(.4,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();





glTranslatef(.8,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();

glTranslatef(1.2,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(1.6,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();


glTranslatef(2.0,.2,0);

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.8,-0.7);
glVertex2f(-0.8,-0.66);
glVertex2f(-1,-0.66);
glVertex2f(-1,-0.7);
glEnd();
glLoadIdentity();




glPushMatrix();
glTranslatef(position,0,0);

glBegin(GL_POLYGON); //Car
 glColor3ub(178,26,26);
    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.42,-0.62);
    glVertex2f(-0.48,-0.62);
    glVertex2f(-0.52,-0.56);
    glVertex2f(-0.88,-0.56);
    glVertex2f(-0.92,-0.62);
    glVertex2f(-0.98,-0.62);
    glVertex2f(-1,-0.7);
    glEnd();

 glBegin(GL_POLYGON);
glColor3ub(113,113,113);
    glVertex2f(-0.87,-0.57);
    glVertex2f(-0.91,-0.63);

    glVertex2f(-0.49,-0.63);
    glVertex2f(-0.53,-0.57);
    glEnd();

   glBegin(GL_POLYGON);
glColor3ub(178,26,26);
    glVertex2f(-0.7,-0.63);
    glVertex2f(-0.7,-0.57);
    glVertex2f(-0.71,-0.57);
    glVertex2f(-0.71,-0.63);
    glEnd();


    GLfloat x12=-0.85f; GLfloat y12=-0.7f; GLfloat radius12 =0.05f;
	int triangleAmount12 = 20; //# of triangles used to draw circle


	GLfloat twicePi12 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x12,y12); // center of circle
		for(u = 0; u <= triangleAmount12;u++) {
			glVertex2f(
		            x12 + (radius12 * cos(u *  twicePi12 / triangleAmount12)),
			    y12 + (radius12 * sin(u * twicePi12 / triangleAmount12))
			);
		}
	glEnd();



//car circle border

	GLfloat x14=-0.85f; GLfloat y14=-0.7f; GLfloat radius14 = 0.03f;
	int lineAmount14 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi14 = 2.0f * PI;
glLineWidth(11);

	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb  = 0; cb <= lineAmount14;cb++) {
			glVertex2f(
			    x14 + (radius14 * cos(cb *  twicePi14 / lineAmount14)),
			    y14 + (radius14* sin(cb * twicePi14 / lineAmount14))
			);
		}
	glEnd();



GLfloat x13=-0.55f; GLfloat y13=-0.7f; GLfloat radius13 =0.05f;
	int triangleAmount13 = 20; //# of triangles used to draw circle


	GLfloat twicePi13 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor4ub(99, 102, 102, 1);
		glVertex2f(x13,y13); // center of circle
		for(v = 0; v <= triangleAmount13;v++) {
			glVertex2f(
		            x13 + (radius13 * cos(v *  twicePi13 / triangleAmount13)),
			    y13 + (radius13 * sin(v* twicePi13 / triangleAmount13))
			);
		}
	glEnd();




//car circle border

	GLfloat x15=-0.55f; GLfloat y15=-0.7f; GLfloat radius15 = 0.03f;
	int lineAmount15 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi15 = 2.0f * PI;
glLineWidth(11);
	glBegin(GL_LINE_LOOP);
	glColor3ub(255,255,255);
		for(cb1  = 0; cb1 <= lineAmount15;cb1++) {
			glVertex2f(
			    x15 + (radius15* cos(cb1 *  twicePi15 / lineAmount15)),
			    y14 + (radius15* sin(cb1 * twicePi15 / lineAmount15))
			);
		}
	glEnd();
	glPopMatrix();




    //**************************************AHSAN MANJIL// ********************************




//whole body
glBegin(GL_QUADS);
glColor3ub(254, 140, 135);
glVertex2f(.96,0);
glVertex2f(.96,.26);
glVertex2f(.9,.26);
glVertex2f(.9,0);

glVertex2f(.9,0);
glVertex2f(.9,.24);
glVertex2f(.8,.24);
glVertex2f(.8,0);

glVertex2f(.8,0);
glVertex2f(.8,.26);
glVertex2f(.74,.26);
glVertex2f(.74,0);

glVertex2f(.74,0);
glVertex2f(.74,.22);
glVertex2f(.33,.22);
glVertex2f(.33,0);

glVertex2f(.33,0);
glVertex2f(.33,.26);
glVertex2f(.3,.26);
glVertex2f(.3,0);

glVertex2f(.3,0);
glVertex2f(.3,.24);
glVertex2f(-.66,.24);
glVertex2f(-.66,0);

//backside
glBegin(GL_QUADS);
glColor3ub(224, 114, 109);
glVertex2f(-.66,0);
glVertex2f(-.66,.24);
glVertex2f(-.76,.16);
glVertex2f(-.76,.06);
glEnd();

glBegin(GL_QUADS);
glColor3ub(254, 140, 135);
glVertex2f(-.42,.24);
glVertex2f(-.42,.28);
glVertex2f(-.48,.28);
glVertex2f(-.48,.24);
glEnd();

glBegin(GL_QUADS);
glColor3ub(254, 140, 135);
glVertex2f(-.48,.24);
glVertex2f(-.48,.26);
glVertex2f(-.58,.26);
glVertex2f(-.58,.24);
glEnd();

////left body polygon
glBegin(GL_POLYGON);
glColor3ub(254, 140, 135);
glVertex2f(-.58,.24);
glVertex2f(-.58,.28);
glVertex2f(-.64,.28);
glVertex2f(-.64,.26);
glVertex2f(-.66,.24);
glEnd();



//gombuj
GLfloat x=0.115f; GLfloat y=0.44f; GLfloat radius = 0.11f;
	int triangleAmount = 20; //# of triangles used to draw circle


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



//gombuj diamond
glBegin(GL_TRIANGLES);
glColor3ub(254, 140, 135);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);
glEnd();

//lines
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);


glVertex2f(.96,0);
glVertex2f(.96,.26);

glVertex2f(.96,.26);
glVertex2f(.9,.26);

glVertex2f(.9,.26);
glVertex2f(.9,.24);

glVertex2f(.9,.24);
glVertex2f(.8,.24);


glVertex2f(.8,.24);
glVertex2f(.8,.26);

glVertex2f(.8,.26);
glVertex2f(.74,.26);


glVertex2f(.74,.26);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.33,.22);

glVertex2f(.33,.22);
glVertex2f(.33,.26);

glVertex2f(.33,.26);
glVertex2f(.3,.26);


glVertex2f(.3,.26);
glVertex2f(.3,.24);


glVertex2f(.3,.24);
glVertex2f(-.42,.24);


glVertex2f(-.42,.24);
glVertex2f(-.42,.28);

glVertex2f(-.42,.28);
glVertex2f(-.48,.28);


glVertex2f(-.48,.28);
glVertex2f(-.48,.26);


glVertex2f(-.48,.26);
glVertex2f(-.58,.26);

glVertex2f(-.58,.26);
glVertex2f(-.58,.28);

glVertex2f(-.58,.28);
glVertex2f(-.64,.28);


glVertex2f(-.64,.28);
glVertex2f(-.64,.26);

glVertex2f(-.64,.26);
glVertex2f(-.66,.24);

glVertex2f(-.66,.24);
glVertex2f(-.76,.16);

glVertex2f(-.76,.16);
glVertex2f(-.76,.06);

glVertex2f(-.76,.06);
glVertex2f(-.66,0);
glEnd();

//gombuj circle border
int j;
	GLfloat x1=0.115f; GLfloat y1=0.44f; GLfloat radius1 = 0.11f;
	int lineAmount1 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
glLineWidth(5);
	glBegin(GL_LINE_LOOP);
	glColor3ub(156, 45, 40);
		for(j = 0; j <= lineAmount1;j++) {
			glVertex2f(
			    x + (radius * cos(j *  twicePi1 / lineAmount1)),
			    y + (radius* sin(j * twicePi1 / lineAmount1))
			);
		}
	glEnd();
//gombuj pillar
glBegin(GL_QUADS);
glColor3ub(254, 140, 135);
glVertex2f(.22,.23);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.23);
glEnd();

//gombuj pillar border
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(.22,.24);
glVertex2f(.22,.44);
glVertex2f(.01,.44);
glVertex2f(.01,.24);
glEnd();


//gombuj diamond LINE
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(0.13,0.55);
glVertex2f(0.115,0.62);

glVertex2f(0.115,0.62);
glVertex2f(0.1, 0.55);

glEnd();


//GROUND
glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(.96,0);
glVertex2f(-.66,0);

glVertex2f(-.66,0);
glVertex2f(-.76,0.065);


glEnd();

//BACK LINES
glLineWidth(4);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.66,.0);
glVertex2f(-.66,.24);

glEnd();

glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);

glVertex2f(-.68,.2);
glVertex2f(-.76,.16);

glVertex2f(-.42,.2);
glVertex2f(-.68,.2);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.42,.0);
glVertex2f(-.42,.24);

glVertex2f(-.46,.0);
glVertex2f(-.46,.24);

glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.44,.0);
glVertex2f(-.44,.24);

glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.68,.18);
glVertex2f(-.76,.14);

glVertex2f(-.42,.18);
glVertex2f(-.68,.18);
glEnd();

//back window
glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(53, 50, 14);

glVertex2f(-.72,.1);
glVertex2f(-.7,.09);


glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();


glBegin(GL_QUADS);
glColor3ub(53, 50, 14);

glVertex2f(-.7,.09);
glVertex2f(-.7,.14);

glVertex2f(-.72,.13);
glVertex2f(-.72,.1);



glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);



//small windows
glColor3ub(53, 50, 14);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();

glTranslatef(.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.08,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.12,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.16,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(-.04,0,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.01,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.03,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.41,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.55,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,.022,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(1.57,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.53,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.49,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.45,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.42,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(1.39,-.0209,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();

glTranslatef(.17,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glTranslatef(.19,.04,0);
glBegin(GL_QUADS);
glVertex2f(-.62,.2);
glVertex2f(-.62,.23);
glVertex2f(-.64,.23);
glVertex2f(-.64,.2);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.66,.24);
glVertex2f(-.42,.24);
glEnd();



glBegin(GL_POLYGON);
glColor3ub(53, 50, 14);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();

glTranslatef(.1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.2,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.3,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glTranslatef(.7,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.8,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(.9,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


glTranslatef(1,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();

glScalef(.7,1.75,0);
glTranslatef(.4,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(1,1.75,0);
glTranslatef(.465,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();



glScalef(.7,1.75,0);
glTranslatef(.635,0,0);
glBegin(GL_POLYGON);
glVertex2f(-.3,0);
glVertex2f(-.3,.12);
glVertex2f(-.34,.14);
glVertex2f(-.38,.12);
glVertex2f(-.38,0);
glEnd();
glLoadIdentity();


//upper pillar
glScalef(.6,1.6,0);
glTranslatef(.44,0.16,0);
glBegin(GL_QUADS);
glColor3ub(53, 50, 14);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.54,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

glScalef(.6,1.6,0);
glTranslatef(.64,0.16,0);
glBegin(GL_QUADS);
glVertex2f(-.32,0.02);
glVertex2f(-.32,.10);
glVertex2f(-.36,.10);
glVertex2f(-.36,0.02);
glEnd();
glLoadIdentity();

//pillar 129, 93, 96



//gombuj lines
glLineWidth(4.5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);

glVertex2f(.225,.256);
glVertex2f(0.003,.256);
glEnd();

glTranslatef(0,.169,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();

glLineWidth(1.5);
glTranslatef(0,.183,0);
glBegin(GL_LINES);
glVertex2f(.23,.256);
glVertex2f(0.0,.256);
glEnd();
glLoadIdentity();



glTranslatef(0,.015,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glTranslatef(0,-.012,0);
glBegin(GL_LINES);
glVertex2f(.225,.256);
glVertex2f(0.014,.256);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.4,.185);
glVertex2f(-.42,.2);

glVertex2f(-.4,.170);
glVertex2f(-.42,.185);
glVertex2f(-.4,.185);
glVertex2f(.74,.185);
glEnd();

glBegin(GL_LINES);
glVertex2f(-.4,.17);
glVertex2f(.74,.17);

glVertex2f(.74,.17);
glVertex2f(.76,.145);


glVertex2f(.74,.185);
glVertex2f(.76,.164);


glVertex2f(.76,.145);
glVertex2f(.96,.145);

glVertex2f(.76,.164);
glVertex2f(.96,.164);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(.74,.0);
glVertex2f(.74,.22);

glVertex2f(.74,.22);
glVertex2f(.96,.22);


glColor3ub(156, 45, 40);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();



glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(.77,.0);
glVertex2f(.77,.22);
glEnd();


glLineWidth(5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();

glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(.78,.0);
glVertex2f(.78,.235);
glEnd();

glLineWidth(5);
glTranslatef(1.18,0,0);
glBegin(GL_LINES);
glVertex2f(-.4,.0);
glVertex2f(-.4,.235);
glEnd();
glLoadIdentity();




glTranslatef(1.435,-0.016,0);
glBegin(GL_QUADS);
glColor3ub(53, 50, 14);

glVertex2f(-.48,.08);

glVertex2f(-.48,.14);

glVertex2f(-.54,.14);

glVertex2f(-.54,.08);



glVertex2f(-.58,.08);
glVertex2f(-.58,.14);
glVertex2f(-.64,.14);
glVertex2f(-.64,.08);


glEnd();
glLoadIdentity();

glTranslatef(1.435,-0.015,0);
glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);

glVertex2f(-.54,.145);
glVertex2f(-.48,.145);

glVertex2f(-.58,.145);
glVertex2f(-.64,.145);

glEnd();
glLoadIdentity();


glLineWidth(1.7);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(0.01,.28);
glVertex2f(.22,.28);

glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();


glLineWidth(4.5);
glTranslatef(.01,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();

glLineWidth(1.7);
glTranslatef(.02,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.06,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.07,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.08,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.12,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.14,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(4.5);
glTranslatef(.13,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(1.7);
glTranslatef(.18,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();



glLineWidth(4.5);
glTranslatef(.187,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


glLineWidth(1.7);
glTranslatef(.194,0,0);
glBegin(GL_LINES);
glVertex2f(0.019,.28);
glVertex2f(0.019,.42);
glEnd();
glLoadIdentity();


//PILLAR
glBegin(GL_QUADS);
glColor3ub(224, 114, 109);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);

//diamonds

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor3ub(224, 114, 109);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();






glTranslatef(-0.3,0,0);
glBegin(GL_QUADS);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);
glVertex2f(0.3,.26);
glVertex2f(0.3,0);
glEnd();
//diamonds
glBegin(GL_QUADS);
glColor3ub(224, 114, 109);
glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);
glEnd();


//main body pillar
glBegin(GL_POLYGON);
glColor3ub(224, 114, 109);
glVertex2f(.33,.26);
glVertex2f(.34,.3);
glVertex2f(.33,.34);
glVertex2f(.3,.34);
glVertex2f(.29,.3);
glVertex2f(.3,.26);
glEnd();
glLoadIdentity();


glLineWidth(2.5);
glBegin(GL_LINES);
glColor3ub(156, 45, 40);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();



glTranslatef(-0.3,0,0);
glLineWidth(2.5);
glBegin(GL_LINES);
glVertex2f(0.33,0);
glVertex2f(0.33,.26);

glVertex2f(0.33,0);
glVertex2f(0.3,0);

glVertex2f(0.3,0);
glVertex2f(0.3,.26);

glVertex2f(0.3,.26);
glVertex2f(0.33,.26);


glVertex2f(.33,.26);
glVertex2f(.3401,.3);

glVertex2f(.3401,.3);
glVertex2f(.33,.34);

glVertex2f(.33,.34);
glVertex2f(.3,.34);

glVertex2f(.3,.34);
glVertex2f(.29,.3);

glVertex2f(.29,.3);
glVertex2f(.3,.26);

glVertex2f(0.315, 0.34);
glVertex2f(0.32,0.347);
glVertex2f(0.32,0.347);
glVertex2f(0.315,0.355);
glVertex2f(0.315,0.355);
glVertex2f(0.31,0.347);
glVertex2f(0.31,0.347);
glVertex2f(0.315, 0.34);

glVertex2f(0.325,0.34);
glVertex2f(0.33,0.347);
glVertex2f(0.33,0.347);
glVertex2f(0.325,0.355);
glVertex2f(0.325,0.355);
glVertex2f(0.3203,0.347);
glVertex2f(0.3203,0.347);
glVertex2f(0.325,0.34);

glVertex2f(0.305,0.34);
glVertex2f(0.3098,0.347);

glVertex2f(0.3098,0.347);
glVertex2f(0.305, 0.355);

glVertex2f(0.305, 0.355);
glVertex2f(0.3, 0.347);

glVertex2f(0.3, 0.347);
glVertex2f(0.305,0.34);
glEnd();
glLoadIdentity();


glLineWidth(3);
glBegin(GL_LINES);

glVertex2f(0.315, 0);
glVertex2f(0.315,0.34);


glVertex2f(0.012, 0);
glVertex2f(0.012,0.34);
glEnd();

glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();

glTranslatef(-0.3,0,0);
glLineWidth(1.5);
glBegin(GL_LINES);
glVertex2f(0.34, .3);
glVertex2f(0.29,0.3);
glEnd();
glLoadIdentity();



glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);
glEnd();


glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);


glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();






glTranslatef(-0.3,0,0);
glLineWidth(1.2);
glBegin(GL_LINES);
glVertex2f(0.308, 0);
glVertex2f(0.308,0.34);
glEnd();

glLineWidth(1.2);
glBegin(GL_LINES);

glVertex2f(0.322, 0);
glVertex2f(0.322,0.34);

glVertex2f(0.34, .313);
glVertex2f(0.29,0.313);

glVertex2f(0.34, .307);
glVertex2f(0.29,0.307);

glVertex2f(0.34, .293);
glVertex2f(0.29,0.293);

glVertex2f(0.34, .285);
glVertex2f(0.29,0.285);
glEnd();
glLoadIdentity();


//stair


glBegin(GL_POLYGON);
glColor3ub(254, 140, 135);
glVertex2f(.42,-.14);
glVertex2f(.42,-.12);
glVertex2f(.40,-.1);
glVertex2f(.40,-.08);
glVertex2f(.38,-.06);
glVertex2f(.38,-.04);
glVertex2f(.36,0);
glVertex2f(.01,0);//
glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
glVertex2f(.05,-.08);
glVertex2f(.05,-.1);
glVertex2f(.07,-.12);
glVertex2f(.07,-.14);
glEnd();

glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(46, 15, 23 );

glVertex2f(.42,-.14);
glVertex2f(.42,-.12);

glVertex2f(.42,-.12);
glVertex2f(.40,-.1);

glVertex2f(.40,-.1);
glVertex2f(.40,-.08);

glVertex2f(.40,-.08);
glVertex2f(.38,-.06);

glVertex2f(.38,-.06);
glVertex2f(.38,-.04);

glVertex2f(.38,-.04);
glVertex2f(.36,0);

glVertex2f(.36,0);
glVertex2f(.01,0);


glVertex2f(.02,-0.02);
glVertex2f(.37,-.02);

glVertex2f(.03,-.04);
glVertex2f(.03,-.06);
//

glVertex2f(.03,-.06);
glVertex2f(.05,-.08);

glVertex2f(.05,-.08);
glVertex2f(.05,-.1);

glVertex2f(.05,-.1);
glVertex2f(.07,-.12);

glVertex2f(.07,-.12);
glVertex2f(.07,-.14);


glVertex2f(.42,-.14);
glVertex2f(.07,-.14);


glVertex2f(.42,-.12);
glVertex2f(.07,-.12);

glVertex2f(.40,-.1);
glVertex2f(.05,-.1);


glVertex2f(.40,-.08);
glVertex2f(.05,-.08);

glVertex2f(.38,-.06);
glVertex2f(.03,-.06);

glVertex2f(.38,-.04);
glVertex2f(.03,-.04);

glVertex2f(.36,0);
glVertex2f(.01,0);

glEnd();

//  tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.62, -0.28);
    glVertex2f(-0.60, -0.28);
    glVertex2f(-0.60, -0.18);
    glVertex2f(-0.62, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.66, -0.18);
    //glColor3f(0.0, 0.5, 0.0);
    glVertex2f(-0.56, -0.18);
    //glColor3f(0.196, 0.804, 0.196);
    glVertex2f(-0.61, -0.07);
    glEnd();

//  tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.42, -0.28);
    glVertex2f(-0.40, -0.28);
    glVertex2f(-0.40, -0.18);
    glVertex2f(-0.42, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.46, -0.18);
    glVertex2f(-0.36, -0.18);
    glVertex2f(-0.41, -0.07);
    glEnd();
//  tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.07, -0.28);
    glVertex2f(-0.05, -0.28);
    glVertex2f(-0.05, -0.18);
    glVertex2f(-0.07, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.11, -0.18);
    glVertex2f(-0.01, -0.18);
    glVertex2f(-0.06, -0.07);
    glEnd();
//  tree 4 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(0.53, -0.28);
    glVertex2f(0.55, -0.28);
    glVertex2f(0.55, -0.18);
    glVertex2f(0.53, -0.18);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(0.49, -0.18);
    glVertex2f(0.59, -0.18);
    glVertex2f(0.54, -0.07);
    glEnd();
//  Small tree 1 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.82, 0.08);
    glVertex2f(-0.81, 0.08);
    glVertex2f(-0.81, 0.15);
    glVertex2f(-0.82, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.83, 0.15);
    glVertex2f(-0.80, 0.15);
    glVertex2f(-0.815, 0.18);
    glEnd();
//  Small tree 2 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.87, 0.08);
    glVertex2f(-0.86, 0.08);
    glVertex2f(-0.86, 0.15);
    glVertex2f(-0.87, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.88, 0.15);
    glVertex2f(-0.85, 0.15);
    glVertex2f(-0.865, 0.18);
    glEnd();
 //  Small tree 3 from left

    glBegin(GL_QUADS);

    glColor3ub(195, 144, 6);
    glVertex2f(-0.91, 0.08);
    glVertex2f(-0.90, 0.08);
    glVertex2f(-0.90, 0.15);
    glVertex2f(-0.91, 0.15);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(16, 194, 2);
    glVertex2f(-0.92, 0.15);
    glVertex2f(-0.89, 0.15);
    glVertex2f(-0.905, 0.18);
    glEnd();

glutTimerFunc(7000,rainy_demo,0);
glFlush();


}






void sound()
{

    PlaySound("s.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);


}

void sound2()
{

    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);


}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {


    case '1':
        sound2();
        glutDisplayFunc(summer);
        break;
    case '2':
         sound2();
         glutDisplayFunc(rainy);
         break;

    case '3':
        sound2();
        glutDisplayFunc(winter);
         break;
    case '4':
         sound2();
         glutDisplayFunc(night);
         break;

glutPostRedisplay();
	}

}





int main(int argc, char** argv) {
    cout<<"Press 1 for summer season"<<endl;
    cout<<"Press 2 for rainy  season"<<endl;
    cout<<"Press 3 for winter season"<<endl;
    cout<<"Press 4 for night  view"<<endl;
    sound();
	glutInit(&argc, argv);
	glutCreateWindow("Ahsan Manjil -THE PINK MAHAL");
	glutInitWindowSize(1080, 1080);
	glutInitWindowPosition (100, 100);
	glutDisplayFunc(summer);
	glutKeyboardFunc(handleKeypress);
    glutTimerFunc(300, update, 0);
    glutTimerFunc(300, update4, 0);
    glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}


