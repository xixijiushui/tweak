//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol AliGPUImageFilter <NSObject>
@property(nonatomic) __weak id <AliGPUImageFilterDelegate> delegate;
- (void)ResumeEngine;
- (void)PauseEngine;
- (void)SetInputFrameByCVPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;

@optional
- (struct __CVBuffer *)pixelBufferResultForCVImageBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
@end

