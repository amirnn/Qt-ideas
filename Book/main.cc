#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char const *argv[])
{
    // Read Image
    cv::Mat imageMat;
    {
        std::string imagePath = "../Data/Image/eclipse.jpg";
        imageMat = cv::imread(imagePath);
    }
    
    return 0;
}
