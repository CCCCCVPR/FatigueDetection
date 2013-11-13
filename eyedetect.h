#ifndef HAARFACES_H
#define HAARFACES_H

#include "stdafx.h"
#include <cv.h>
#include <cxcore.h>
#include "eye.h"


void detectfaces( IplImage* img, IplImage * small_img, CvHaarClassifierCascade *facecascade, 
				 CvHaarClassifierCascade *lefteyecascade, CvHaarClassifierCascade *righteyecascade, int IsDark);
/*
ʹ��haar���������ͼ���ϵ������������������ּ������
imgΪ����ͼ��
small_imgΪ����ͼ����С���ͼ��
facecascadeΪ���������
lefteyecascadeΪ���ۼ����
righteyecascadeΪ���ۼ����
*/


#endif