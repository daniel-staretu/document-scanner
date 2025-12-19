#pragma once

#ifndef MAIN_H
#define MAIN_H

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <vector>
#include <string>

using namespace cv;
using namespace std;

Mat openImage(string path);
Mat closingMorphological(Mat input_image);
Mat toGrayscale(Mat input_image);
Mat thresholdingOperation(Mat input_image);
Mat edgeDetection(Mat input_image);
Mat cornerDetection(Mat input_image, vector<Point>& sorted_corners);
Mat perspectiveTransform(Mat input_image, const vector<Point>& corners);

#endif
