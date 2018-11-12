//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EBGyroQuaternion : NSObject
{
    double _x;
    double _y;
    double _z;
    double _w;
}

+ (id)quaternionWithX:(double)arg1 y:(double)arg2 z:(double)arg3 w:(double)arg4;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) double z; // @synthesize z=_z;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (id)multiplyQuaternions:(id)arg1 b:(id)arg2;
- (id)multiply:(id)arg1 p:(id)arg2;
- (id)setFromAxisAngle:(id)arg1 angle:(double)arg2;
- (id)setFromEuler:(id)arg1;
- (id)initWithWithX:(double)arg1 y:(double)arg2 z:(double)arg3 w:(double)arg4;

@end

