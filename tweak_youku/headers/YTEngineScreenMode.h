//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YTEngineScreenMode : NSObject
{
    long long _type;
    struct CGRect _frame;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

