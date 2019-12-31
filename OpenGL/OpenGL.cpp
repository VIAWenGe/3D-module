// OpenGL.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void Initial(void){	
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);	//设置窗口背景颜色为白色	
	glMatrixMode(GL_PROJECTION);	//设置投影参数	
	gluOrtho2D(0.0, 200.0, 0.0, 200.0);
}

void Display(void){	
	glClear(GL_COLOR_BUFFER_BIT);	//用当前背景色填充窗口	
	glColor3f(1.0f, 0.0f, 0.0f);	//设置当前的绘图颜色为红色	
	glRectf(50.0f, 50.0f, 150.0f, 150.0f);	//绘制一个矩形	
	glFlush();	//清空命令缓冲区，执行OpenGL程序
}

int main(int argc, char* argv[]) {	
	glutInit(&argc, argv);	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	//初始化窗口的显示模式	
	glutInitWindowSize(800, 400);	//设置窗口的尺寸	
	glutInitWindowPosition(100, 120);	//设置窗口的位置	
	glutCreateWindow("矩形");	//创建一个名为矩形的窗口	
	glutDisplayFunc(Display);	//设置当前窗口的显示回调函数	
	Initial();	//完成窗口初始化	
	glutMainLoop();	//启动主GLUT事件处理循环
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
