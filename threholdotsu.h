# ifndef THREHOLDOTSU_H
# define THREHOLDOTSU_H

//#include "stdafx.h"
#include "cv.h"

#include "cxcore.h"


int ComputeValueOTSU (IplImage * img);
/*
��OTSU���������ͼ�����ֵ
imgΪ������ͼ��
*/

int thresholds(IplImage * img); 
/*
�Զ������ͼ�����ֵ�����ҵ�������ΪĿ��
imgΪ������ͼ��
*/
int thresholdsb(IplImage *img);

# endif