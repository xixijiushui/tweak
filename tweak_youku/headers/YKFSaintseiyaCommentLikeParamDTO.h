//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFSaintseiyaCommentLikeParamDTO : YKFAPIModel
{
    NSString *_appSource;
    long long _commentId;
    NSString *_ip;
    long long _source;
    long long _type;
    long long _userId;
    NSString *_videoCode;
}

@property(retain, nonatomic) NSString *videoCode; // @synthesize videoCode=_videoCode;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(retain, nonatomic) NSString *appSource; // @synthesize appSource=_appSource;
- (void).cxx_destruct;

@end

