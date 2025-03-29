#include <iostream>

//ע�⣺gladͷ�ļ�������glfw����֮ǰ����
#include<glad/glad.h>
#include <GLFW/glfw3.h>

/*
* Ŀ�꣺
	-����glfw�Ĵ���ϵͳ
	-���봰��仯���¼��ص�
	-���������Ϣ�¼��ص�
* 
*/

//������ʵ��һ����Ӧ�����С�仯�ĺ���
void frameBufferSizeCallBack(GLFWwindow* window, int width, int height) {
	std::cout << "�������´�С��" << width << " , " << height << std::endl;
}

//������ʵ��һ��������Ϣ�ص�����
void keyCallBack(GLFWwindow* window, int key, int scancode, int action, int mods) {
	if (key == GLFW_KEY_W) {
		//������w
	}
	if (action == GLFW_PRESS) {
		//��λ����
	}
	if (action == GLFW_RELEASE) {
		//��λ̧��
	}
	if (mods == GLFW_MOD_CONTROL) {
		//����ctrl��ͬʱ��������key
	}
	if (mods == GLFW_MOD_SHIFT) {
		//����shift��ͬʱ��������key
	}
	std::cout << "�����ˣ�" << key << std::endl;
	std::cout << "action��" << action << std::endl;
	std::cout << "mods��" << mods << std::endl;
}

int main() {
//1 ��ʼ��GLFW��������
	glfwInit();
	//1.1 ����OpenGL���汾�š��ΰ汾��
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	//1.2 ����OpenGL���ú���ģʽ����������Ⱦģʽ��
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

//2 �����������
	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGLStudy", NULL, NULL);
	//**���õ�ǰ�������ΪOpenGL�Ļ�����̨
	glfwMakeContextCurrent(window);

	//���ü��������������С�仯����Ϣ
	glfwSetFramebufferSizeCallback(window, frameBufferSizeCallBack);
	//���ü���������������Ϣ
	glfwSetKeyCallback(window, keyCallBack);


//3 ִ�д���ѭ��
	while (!glfwWindowShouldClose(window)) {
		//���ղ��ַ�������Ϣ
		//�����Ϣ�����Ƿ�����Ҫ�������ꡢ���̵���Ϣ
		//����еĻ��ͽ���Ϣ����������ն���
		glfwPollEvents();
	}


//4 �˳�����ǰ���������
	glfwTerminate();

	return 0;
}