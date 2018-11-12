//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EBGyroEuler : NSObject
{
    double _x;
    double _y;
    double _z;
    NSString *_order;
}

+ (id)eulerWithX:(double)arg1 y:(double)arg2 z:(double)arg3 order:(id)arg4;
@property(copy, nonatomic) NSString *order; // @synthesize order=_order;
@property(nonatomic) double z; // @synthesize z=_z;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (void).cxx_destruct;
- (void)setValueWithX:(double)arg1 y:(double)arg2 z:(double)arg3 order:(id)arg4;
- (id)initWithX:(double)arg1 y:(double)arg2 z:(double)arg3 order:(id)arg4;

@end

