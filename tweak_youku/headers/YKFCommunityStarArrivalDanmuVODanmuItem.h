//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityStarArrivalDanmuVODanmuItem : YKFAPIModel
{
    NSString *_artistHeadPic;
    NSString *_artistName;
    long long _artistUserId;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long artistUserId; // @synthesize artistUserId=_artistUserId;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *artistHeadPic; // @synthesize artistHeadPic=_artistHeadPic;
- (void).cxx_destruct;

@end

