#include <GL/freeglut.h>
#include <iostream>




void myDisplay() 
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();

}

void keyboardInput(unsigned char key,
	int x, int y)
{
	switch (key) {
		case 27:    // ESC
			glutLeaveMainLoop();
			break;

	}
}
void idlefunc() {


}



int main(int argc, char** argv) {


	glutInit(&argc, argv);

	
	glutInitWindowSize(1920, 1080);
	//glutInitWindowPosition(100, 100);
	
	glutCreateWindow("Stuff");


	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutDisplayFunc(myDisplay);
	glutKeyboardFunc(keyboardInput);
	glutIdleFunc(idlefunc);
	glClearColor(1.0f, 0, 0, 0);
	glutMainLoop();


	
	return 1;
}