//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EPCIndata, EPCLayer, EPCOutData, NSArray;

@protocol EPCEffect <NSObject>
- (void)EPCMainCMD:(int)arg1 inData:(EPCIndata *)arg2 outData:(EPCOutData *)arg3 params:(NSArray *)arg4 output:(id *)arg5;
- (EPCLayer *)layer;
- (void)setLayer:(EPCLayer *)arg1;
@end

