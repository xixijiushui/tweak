//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SPMGPUImageOutput : NSObject
{
    NSMutableArray *targets;
    NSMutableArray *targetTextureIndices;
    unsigned int outputTexture;
    struct CGSize inputTextureSize;
    struct CGSize cachedMaximumOutputSize;
    _Bool _shouldSmoothlyScaleOutput;
}

@property(nonatomic) _Bool shouldSmoothlyScaleOutput; // @synthesize shouldSmoothlyScaleOutput=_shouldSmoothlyScaleOutput;
- (void).cxx_destruct;
- (void)deleteOutputTexture;
- (void)initializeOutputTexture;
- (void)removeAllTargets;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)init;

@end

