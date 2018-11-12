//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LTMMath : NSObject
{
}

+ (unsigned long long)hashWithPointer:(const void *)arg1;
+ (unsigned long long)hashWithLong:(unsigned long long)arg1;
+ (unsigned long long)hashWithIntegerArray:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1 integer:(unsigned long long)arg2;
+ (unsigned long long)hashWithInteger:(unsigned long long)arg1;
+ (unsigned long long)hashWithFloat:(float)arg1;
+ (unsigned long long)hashWithDouble:(double)arg1;
+ (unsigned long long)hashWithCString:(const char *)arg1;
+ (unsigned long long)hashWithCGFloat:(double)arg1;
+ (double)sqrtCGFloat:(double)arg1;
+ (struct CGPoint)roundCGPoint:(struct CGPoint)arg1;
+ (struct CGSize)roundCGSize:(struct CGSize)arg1;
+ (struct CGRect)roundCGRect:(struct CGRect)arg1;
+ (double)roundCGFloat:(double)arg1;
+ (struct CGSize)ceilCGSize:(struct CGSize)arg1;
+ (struct CGPoint)ceilCGPoint:(struct CGPoint)arg1;
+ (struct CGRect)ceilCGRect:(struct CGRect)arg1;
+ (double)ceilCGFloat:(double)arg1;
+ (struct CGSize)floorCGSize:(struct CGSize)arg1;
+ (struct CGPoint)floorCGPoint:(struct CGPoint)arg1;
+ (struct CGRect)floorCGRect:(struct CGRect)arg1;
+ (double)floorCGFloat:(double)arg1;
- (id)init;

@end
