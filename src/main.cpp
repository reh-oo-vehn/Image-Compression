#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <image_path>" << std::endl;
        return -1;
    }

    std::string imagePath = argv[1];
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cout << "Could not open or find the image: " << imagePath << std::endl;
        return -1;
    }

    // Define the output path
    std::string outputImagePath = "compressed_image.jpg";
    
    // Set the compression parameters
    std::vector<int> compression_params = {cv::IMWRITE_JPEG_QUALITY, 50};

    // Compress and save the image
    bool result = cv::imwrite(outputImagePath, image, compression_params);

    if (result) {
        std::cout << "Image compressed and saved successfully! Output Path: " << outputImagePath << std::endl;
    } else {
        std::cout << "Failed to compress and save the image." << std::endl;
        return -1;
    }

    return 0;
}
