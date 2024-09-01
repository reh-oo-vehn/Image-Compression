#include <opencv2/opencv.hpp>
#include <iostream> 
#include <filesystem>



int main(int argc, char** argv) { 
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <image path>" << std::endl; 
        return -1; 
    }

    cv::Mat image = cv::imread(argv[1]); 

    if (image.empty()) { 
        std::cout << "Error: Could not open or find the image. " << std::endl; 
        return -1; 
    }

    std::filesystem::path iamgePath(argv[1]); 

    

}