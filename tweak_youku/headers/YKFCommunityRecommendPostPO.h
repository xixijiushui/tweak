//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFCommunityPostPicPO;

@interface YKFCommunityRecommendPostPO : YKFAPIModel
{
    NSString *_jumpUrl;
    YKFCommunityPostPicPO *_pic;
    long long _postId;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
@property(retain, nonatomic) YKFCommunityPostPicPO *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
- (void).cxx_destruct;

@end
