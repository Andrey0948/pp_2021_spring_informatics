// Copyright 2021 Napylov Evgenii
#ifndef MODULES_TASK_2_NAPYLOV_E_CONTRAST_CONTRAST_H_
#define MODULES_TASK_2_NAPYLOV_E_CONTRAST_CONTRAST_H_

#include <omp.h>
#include <vector>


typedef std::vector<unsigned char> VecImage;
typedef std::vector<std::vector<unsigned char>> Image;

void print_vec(const VecImage& vec);

VecImage image_to_vec(const Image& image, int w, int h);

Image vec_to_image(const VecImage& vec, int w, int h);

VecImage RandomVector(int size);

VecImage add_contrast(VecImage image, unsigned char down = 0,
                                      unsigned char up = 255);

VecImage add_contrast_omp(VecImage image, unsigned char down = 0,
                                          unsigned char up = 255);

#endif  // MODULES_TASK_2_NAPYLOV_E_CONTRAST_CONTRAST_H_
