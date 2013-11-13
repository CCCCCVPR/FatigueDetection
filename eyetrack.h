#ifndef EYETRACK_H
#define EYETRACK_H

#include "stdafx.h"
#include "cv.h"
// #include "highgui.h"
#include "cxcore.h"
#include <time.h>
#include <math.h>
#include <iostream>
using namespace std;
#include "eye.h"


extern "C"
{
#include "defs.h"
#include "utils.h"
#include "particles.h"
#include "observation.h"
#include "track.h"
};

// #include "gsl_rng.h"
// #include "gsl_randist.h"

//---gsl�Ŀ��ļ�-----------
//#pragma comment (lib, "libgsl.a")

/* command line options */
#define OPTIONS ":p:oah"

/* default number of particles */
#define PARTICLES 100

/* default basename and extension of exported frames */
#define EXPORT_BASE "./frames/frame_"
#define EXPORT_EXTN ".png"

/* maximum number of frames for exporting */
#define MAX_FRAMES 2048


/* maximum number of objects to be tracked */
#define MAX_OBJECTS 1



int eyetrack(int num_objects, IplImage * hsv_frame, IplImage *lasthsv_frame, CvRect regions, gsl_rng* rng, CvPoint * eyeposition, IplImage * frame, int IsDark);
/*
�����˲��㷨�����۾�
num_objectsΪĿ����Ŀ
hsv_frameΪ��ǰ֡
lasthsv_frameΪ��һ֡
regionsΪ����Ŀ�귶Χ
eyepositionΪ�۾�λ��
frameΪ��ǰ֡
*/

double eyetrackmuch(int num_objects, IplImage * hsv_frame, IplImage *lasthsv_frame, CvRect regions, gsl_rng* rng, CvPoint * eyeposition, IplImage * frame, int IsDark);
/*
ͬ�����˲�����
�����۾���������ֵ

*/
#endif