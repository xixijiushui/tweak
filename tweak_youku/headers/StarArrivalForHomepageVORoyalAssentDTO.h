//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface StarArrivalForHomepageVORoyalAssentDTO : YKFAPIModel
{
    NSString *_content;
    long long _gmtPublish;
    long long _imgCount;
    NSString *_targetUserName;
    long long _type;
    long long _videoCount;
}

@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *targetUserName; // @synthesize targetUserName=_targetUserName;
@property(nonatomic) long long imgCount; // @synthesize imgCount=_imgCount;
@property(nonatomic) long long gmtPublish; // @synthesize gmtPublish=_gmtPublish;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

