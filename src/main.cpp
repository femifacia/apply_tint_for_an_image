#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

void apply_tint(cv::Mat image, cv::Vec3b pixel);


int main(int argc, char **argv)
{
	// I open and read the image
	cv::Mat image = cv::imread(argv[1]);
	// this vector will be our pixel vector
	// the tint will be based on our pixel color tint
	cv::Vec3b tint_pixel;

	// by default it is set to red color
	tint_pixel[0] = (argc < 5) ? 255 : atoi(argv[2]);
	tint_pixel[1] = (argc < 5) ? 0 : atoi(argv[3]);
	tint_pixel[2] = (argc < 5) ? 0 : atoi(argv[4]);

	//  We print the original image
	cv::imshow("Original", image);
	apply_tint(image, tint_pixel);
	// Then the image with tint
	cv::imshow("With tint", image);
	cv::waitKey(0);
	return (0);
}
