//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityTopicPostItemPO : YKFAPIModel
{
    long long _postId;
    NSString *_title;
    NSString *_userHeaderPic;
}

@property(retain, nonatomic) NSString *userHeaderPic; // @synthesize userHeaderPic=_userHeaderPic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long postId; // @synthesize postId=_postId;
- (void).cxx_destruct;

@end

