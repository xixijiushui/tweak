//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WXParallaxEffect : NSObject
{
    double _inputMin;
    double _inputMax;
    NSArray *_outputVectors;
    unsigned long long _type;
    CDUnknownBlockType _formatBlock;
}

- (void).cxx_destruct;
- (_Bool)checkValidInput:(id)arg1 output:(id)arg2 withType:(unsigned long long)arg3;
- (id)outputWithInput:(double)arg1;
- (id)initWithType:(unsigned long long)arg1 input:(id)arg2 output:(id)arg3 formatBlock:(CDUnknownBlockType)arg4;

@end

