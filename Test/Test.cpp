#include <stdafx.h>
//C++���������ͷ�ļ�
#include <iostream>
//OpenCV���Ŀ�ͷ�ļ�
#include <opencv.hpp>

#include <core/core.hpp>
//OpenCVͼ�δ���ͷ�ļ�
#include <highgui/highgui.hpp>

#include <imgproc/imgproc.hpp>

//OpenCV���Ķ�̬���ӿ⣬��core.hppͷ�ļ���Ӧ��d������԰汾
//#pragma comment(lib,"opencv_core400d.lib")
//OpenCVͼ�δ���̬���ӿ⣬��highgui.hppͷ�ļ���Ӧ��d������԰汾
//#pragma comment(lib,"opencv_highgui400d.lib")

using namespace cv;

int _tmain(int argc, char* argv[])
{
	//��������
	std::string windowName = "HelloWorld";
	//ͼ������
	std::string imgFile = "opencv-logo.png";
	//����ͼ��
	Mat image = imread(imgFile, IMREAD_GRAYSCALE);
	//����޷���ȡͼ��
	if (!image.data)
	{
		std::cout << "�޷���ͼ���ļ�" << std::endl;
		system("PAUSE");//��ͣ����
		return -1;
	}
	//����һ���´���
	namedWindow(windowName,WINDOW_AUTOSIZE);
	//��ͼ����ʾ���´����Ĵ�����
	imshow(windowName, image);
	//�ȴ���ֱ���û��������ʱ�˳�
	waitKey(0);

	return 0;
}
