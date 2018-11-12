//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface YKWXGPUImageBeautyFilter : GPUImageFilter
{
    double _beautyLevel;
    double _brightLevel;
    double _toneLevel;
}

@property(nonatomic) double toneLevel; // @synthesize toneLevel=_toneLevel;
@property(nonatomic) double brightLevel; // @synthesize brightLevel=_brightLevel;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
- (void)setParams:(double)arg1 tone:(double)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end

