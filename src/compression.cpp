#include "compression.hpp"

bool compressImage(const std::string& inputPath, const std::string& outputPath, int quality) {
    cv::Mat image = cv::imread(inputPath, cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cerr << "Could not open or find the image: " << inputPath << std::endl;
        return false;
    }

    std::vector<int> compression_params = {cv::IMWRITE_JPEG_QUALITY, quality};

    return cv::imwrite(outputPath, image, compression_params);
}
