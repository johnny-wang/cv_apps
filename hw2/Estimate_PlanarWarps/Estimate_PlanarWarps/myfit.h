//
//  myfit.h
//  Estimate_Homography
//
//  Created by Simon Lucey on 9/21/15.
//  Copyright (c) 2015 CMU_16432. All rights reserved.
//

#ifndef __Estimate_Homography__myfit__
#define __Estimate_Homography__myfit__

#include <stdio.h>
#include "armadillo" // Includes the armadillo library
#include <opencv2/opencv.hpp>   // Include opencv library
#include <random>

// Functions for students to fill-in for Assignment 1
arma::fmat myfit_affine(arma::fmat &X, arma::fmat &W);
arma::fmat myproj_affine(arma::fmat &W, arma::fmat &A);
arma::fmat myfit_homography(arma::fmat &X, arma::fmat &W);
arma::fmat myproj_homography(arma::fmat &W, arma::fmat &H);
arma::fmat my_ransac(arma::fmat &W, std::vector<cv::KeyPoint> kp1, std::vector<cv::KeyPoint> kp2, std::vector<cv::DMatch> matches);

#endif /* defined(__Estimate_Homography__myfit__) */
