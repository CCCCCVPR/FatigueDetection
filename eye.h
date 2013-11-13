# ifndef EYE_H
# define EYE_H

#include "stdafx.h"
#include "cv.h"

#include "cxcore.h"
#include "threholdotsu.h"

#include <math.h>

/*#include "iostream"*/
using namespace std;



int IsEyeOpen(IplImage * eyes);
/*
���������
�б��۾��Ƿ�����
eyes Ϊ������۾����ֵ�ͼ��
*/


void GetImageRect(IplImage* orgImage, CvRect rectInImage, IplImage* imgRect);
/*
��ͼ��orgImage����ȡһ�飨rectInImage����ͼ��imgRect
orgImageΪԭͼ��
rectInImageΪ����Ҫͼ��Ŀ���Ϣ
imgRectΪ��ͼ��
*/


int GetEyePosition(IplImage * faces, CvPoint point1, CvPoint point2, CvPoint *eyeposition);
/*
���������
�ҳ��۾���ȷλ�ã����ҷ����Ƿ����
����true��ʾ���ۣ�����false��ʾ����
facesΪ����ͼ��
point1Ϊ�����������ϵ�
point2Ϊ�����������µ�
eyepositionΪ�۾���λ��
*/

int GetEyePositionwhite(IplImage * faces, CvPoint point1, CvPoint point2, CvPoint *eyeposition);
/*
find the eye position based on the white part of the eye
*/

double howmucheye(IplImage * faces, CvPoint point1, CvPoint point2, CvPoint *eyeposition );
/*
�ҳ��۾�λ�ã������������İٷֱ�
*/

void alarm(IplImage *img);
/*
�����ͼ������ʾ������Ϣ
*/


/*bool IsEye(IplImage * frame, CvPoint eyeposition);*/
/*
�жϵ�ǰλ���ǲ����۾�
�Ƿ���TRUE�����򷵻�FALSE
*/

int GetEyepositionInDarky(IplImage * faces,CvPoint point1, CvPoint point2,CvPoint *eyeposition);
/*
ͬ���ҳ��۾�λ�ò������Ƿ����
*/

/*bool GetEyePositionInDark(IplImage * faces, CvPoint point1, CvPoint point2, CvPoint *eyeposition);*/
/*
�ڰ������
�ҳ��۾���ȷλ�ã����ҷ����Ƿ����
����true��ʾ���ۣ�����false��ʾ����
facesΪ����ͼ��
point1Ϊ�����������ϵ�
point2Ϊ�����������µ�
eyepositionΪ�۾���λ��
*/

/*bool IsEyeOpenInDark(IplImage * eyes, int thre);*/
/*
�ڰ������
�б��۾��Ƿ�����
eyes Ϊ������۾����ֵ�ͼ��
eyepositionΪ�۾���ͼ��eyes�е����λ��
*/


/*bool DetectEyeCircle(IplImage * grayeyes, CvPoint * eyeposition, int eyethre);*/
/*
�ж��������Ĳ����Ƿ�ΪԲ��
grayeyesΪΪ������۾����ֵ�ͼ��
eyepositionΪ�۾���ͼ��eyes�е����λ��
eyethreΪ�Ҷ�ͼ�۾���ostu���������������ֵ
*/


int DetectIsDark(IplImage * frame);
/*
�ж��Ƿ�Ϊ��ҹ
�Ǻ�ҹ����TRUE
���򷵻�FALSE
*/
#endif