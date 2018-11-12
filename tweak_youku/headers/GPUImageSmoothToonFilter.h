//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageGaussianBlurFilter, GPUImageToonFilter;

@interface GPUImageSmoothToonFilter : GPUImageFilterGroup
{
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageToonFilter *toonFilter;
    double threshold;
    double blurRadiusInPixels;
    double quantizationLevels;
    double texelWidth;
    double texelHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double quantizationLevels; // @synthesize quantizationLevels;
@property(nonatomic) double threshold; // @synthesize threshold;
@property(nonatomic) double texelHeight; // @synthesize texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (id)init;

@end

