/*
** EPITECH PROJECT, 2023
** apply_tint_for_an_image
** File description:
** apply_tint for an image of course
*/

#include <opencv2/opencv.hpp>

void transform_pixel_with_tint(uchar & pixel, uchar &tint, double factor = 0.75)
{

    // I found this formula on internet and it quite do the job !!!!
    pixel = pixel + (tint - pixel) * factor;

    // I let previous tests to let you see what you DON'T DOOOOOOOOOOOOO
/*
    if (tint == 0) {
        pixel = 0;
        return;
    }
    if (tint < pixel)
        pixel %= tint;
*/
}

void apply_tint(cv::Mat image, cv::Vec3b tint_pixel)
{
    for (int i = 0; i < image.cols; i++) {
        for (int j = 0; j < image.rows; j++) {
            // We get the pixel representa
            cv::Vec3b pixel = image.at<cv::Vec3b>(i,j);

            // we will then apply the transformation to each pixel
            transform_pixel_with_tint(pixel[0], tint_pixel[0]);
            transform_pixel_with_tint(pixel[1], tint_pixel[1]);
            transform_pixel_with_tint(pixel[2], tint_pixel[2]);

            //after having transformed pixels, we then replace it

            image.at<cv::Vec3b>(i,j) = pixel;
        }
    }

}