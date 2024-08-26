#ifndef COMPRESSION_HPP
#define COMPRESSION_HPP

#include <opencv2/opencv.hpp>
#include <string>

bool compressImage(const std::string& inputPath, const std::string& outputPath, int quality);

#endif
