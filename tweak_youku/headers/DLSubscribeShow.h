//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface DLSubscribeShow : NSObject
{
    NSString *_sid;
    NSArray *_videos;
}

+ (id)subscribeShowWithFetchJSON:(id)arg1;
+ (id)subscribeShowWithPushJSON:(id)arg1;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
- (void).cxx_destruct;

@end
