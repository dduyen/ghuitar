//#include <GL/glut.h>
//static int i = 0; // thông số chỉ thời gian trong năm
//
//void init(void)
//{
//	glClearColor(1.0, 0.0, 0.6, 0.5);// màu nền màu đen
//
//}
///* hàm vẽ */
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // xóa color buffer và depth buffer
//	glPushMatrix(); // cất hệ tọa độ hiện tại vào stack
//	glRotatef((GLfloat)i, 0.0, 0.0, 0.0); // quay một góc tương ứng với thời gian trong năm
//	glColor3f(0, 0, 1.0); // thiết lập màu vẽ là màu blu
//	glutSolidSphere(1, 20, 15);
//	glPopMatrix(); // lấy lại hệ tọa độ(phục hồi ma trận cũ tương ứng với vị trí ban đầu)
//	glutSwapBuffers();
//}
///*xử lý khi cửa sổ bị thay đổi*/
//void reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h); // thay đổi kích thước viewport
//		/* xét thao tác trên chiếu */
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0); // phép chiếu phối cảnh
//	
//	/* xét thao tác trên ModelView */
//	GLfloat light_ambient1[] = { 0.0, 1.0, 0.0, 0.0 }; //ánh sáng môi trường
//	GLfloat light_diffuse1[] = { 0.0, 1.0, 1.0, 1.0 }; // ánh sáng khu?ch tán
//	GLfloat light_specular1[] = { 1.0, 1.0, 1.0, 1.0 }; // ánh sáng ph?n chi?u
//	GLfloat light_position1[] = { 1.0, 1.0, 1.0, 0.0 }; // v? trí chi?u sáng
//	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient1);//??nh ngh?a ngu?n sáng
//	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse1);//??nh ngh?a ngu?n sáng
//	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular1);//??nh ngh?a ngu?n sáng
//	glLightfv(GL_LIGHT0, GL_POSITION, light_position1);//??nh ngh?a ngu?n sáng
//	glEnable(GL_LIGHTING);// kích ho?t ngu?n sáng
//	glEnable(GL_LIGHT0);// kích ho?t ngu?n sáng
//	/* xét thao tac trên model view*/
//	glMatrixMode(GL_MODELVIEW);// g?i hàm này tr??c khi thao tác trên model view
//	glLoadIdentity();
//	gluLookAt(0.0, 5.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); // thi?t l?p view
//}
///* xử lý sự kiện keyboard */
//void keyboard(unsigned char key, int x, int y)
//{
//	switch (key) {
//	case ' ':
//		i = i +1;
//		glutPostRedisplay();//thông báo cho chương trình rằng cần thực hiện 
//		break;
//	default:
//		break;
//	}#include <gl\glut.h>
//
//		float g_x = 0.0f;
//	float g_z = 30.0f;
//
//
//	void OnKeyUp(unsigned char ch, int x, int y)
//	{
//		switch (ch)
//		{
//		case 'A':
//			break;
//		case 'a':
//			break;
//		default:
//			break;
//		}
//	}
//
//	void OnKeyDown(unsigned char ch, int x, int y)
//	{
//		switch (ch)
//		{
//		case 'A':
//			break;
//		case 'a':
//			break;
//		default:
//			break;
//		}
//	}
//
//	void OnSpecialKeyDown(int key, int x, int y)
//	{
//		switch (key)
//		{
//		case GLUT_KEY_UP:
//			g_z -= 0.2;
//			break;
//		case GLUT_KEY_DOWN:
//			g_z += 0.2;
//			break;
//		case GLUT_KEY_LEFT:
//			g_x -= 0.2;
//			break;
//		case GLUT_KEY_RIGHT:
//			g_x += 0.2;
//			break;
//		default:
//			break;
//		}
//	}
//
//	void OnSpecialKeyUp(int key, int x, int y)
//	{
//		switch (key)
//		{
//		case GLUT_KEY_LEFT:
//			break;
//		case GLUT_KEY_RIGHT:
//			break;
//		default:
//			break;
//		}
//	}
//
//	void ReShape(int width, int height)
//	{
//		if (height == 0)
//		{
//			height = 1;
//		}
//
//		glViewport(0, 0, width, height);
//		glMatrixMode(GL_PROJECTION);
//		glLoadIdentity();
//
//		float ratio = 0.0;
//		if (width > height)
//			ratio = (float)width / height;
//		else
//			ratio = (float)height / width;
//
//		gluPerspective(45.0, ratio, 1.0, 40.0);
//		glMatrixMode(GL_MODELVIEW);
//
//	}
//
//	void DrawCoordinate()
//	{
//		glDisable(GL_LIGHTING);
//		glBegin(GL_LINES);
//		glColor3f(1.0, 0.0, 0.0);
//		glVertex3f(-100.0, 0.0, 0.0);
//		glVertex3f(100.0, 0.0, 0.0);
//		glEnd();
//
//		glBegin(GL_LINES);
//		glColor3f(0.0, 1.0, 0.0);
//		glVertex3f(0.0, -100.0, 0.0);
//		glVertex3f(0.0, 100.0, 0.0);
//		glEnd();
//
//		glBegin(GL_LINES);
//		glColor3f(0.0, 0.0, 1.0);
//		glVertex3f(0.0, 0.0, -100.0);
//		glVertex3f(0.0, 0.0, 100.0);
//		glEnd();
//
//		glEnable(GL_LIGHTING);
//	}
//
//	void RenderScene()
//	{
//		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//		glLoadIdentity();
//
//		gluLookAt(g_x, 1.0f, g_z,
//			0.0, 0.0f, 0.0,
//			0.0f, 1.0f, 0.0f);
//
//		DrawCoordinate();
//		glPushMatrix();
//		glutSolidTeapot(10.0);
//		glPopMatrix();
//
//		glFlush();
//		glutPostRedisplay();
//	}
//
//
//	void Init()
//	{
//		glClearColor(0.0, 0.0, 0.0, 0.0);
//		glEnable(GL_TEXTURE_2D);
//		glEnable(GL_DEPTH_TEST);
//
//		glEnable(GL_LIGHTING);
//		glEnable(GL_LIGHT0);
//
//		GLfloat light_pos[] = { 0.0, 0.0, 1.0, 0.0 };
//		glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
//
//		GLfloat ambient[] = { 1.0, 1.0, 1.0, 1.0 };
//		glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, ambient);
//
//		GLfloat diff_use[] = { 0.1, 0.2, 0.3, 1.0 };
//		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, diff_use);
//
//		GLfloat specular[] = { 1.0, 1.0, 1.0, 1.0 };
//		glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, specular);
//
//		GLfloat shininess = 50.0f;
//		glMateriali(GL_FRONT, GL_SHININESS, shininess);
//
//	}
//
//	void main()
//	{
//		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//		glutInitWindowSize(640, 480);
//		glutInitWindowPosition(100, 100);
//		glutCreateWindow("Opengl Study");
//
//		Init();
//		glutReshapeFunc(ReShape);
//		glutDisplayFunc(RenderScene);
//		glutIdleFunc(RenderScene);
//		glutKeyboardFunc(OnKeyDown);
//		glutKeyboardUpFunc(OnKeyUp);
//		glutSpecialFunc(OnSpecialKeyDown);
//		glutSpecialUpFunc(OnSpecialKeyUp);
//
//		// here are the new entries
//		glutIgnoreKeyRepeat(1);
//
//		glutMainLoop();
//
//		return;
//	}
//}
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(500, 500);
//	glutInitWindowPosition(100, 100);
//	glutCreateWindow(argv[0]);
//	init();
//	glutDisplayFunc(display);
//	glutReshapeFunc(reshape);
//	glutKeyboardFunc(keyboard);
//	glutMainLoop();
//	return 0;
//}