#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

int main(int argc, char **argv)
{
	cv::Mat image = cv::imread(argv[1]);

	cv::imshow("Original", image);
	cv::imshow("With tint", image);
	cv::waitKey(0);
	return (0);
}
