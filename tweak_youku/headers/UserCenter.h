//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonList.h"

@class NSString;

@interface UserCenter : CommonList
{
    NSString *_tid;
    NSString *_img;
}

+ (id)parseUserCenter:(id)arg1;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;

@end
