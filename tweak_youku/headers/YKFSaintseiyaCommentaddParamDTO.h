//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFSaintseiyaCommentaddParamDTO : YKFAPIModel
{
    NSString *_appSource;
    NSString *_content;
    NSString *_ip;
    long long _parentCommentId;
    long long _source;
    long long _sourceCommentId;
    long long _userId;
    NSString *_videoCode;
}

@property(retain, nonatomic) NSString *videoCode; // @synthesize videoCode=_videoCode;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long sourceCommentId; // @synthesize sourceCommentId=_sourceCommentId;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long parentCommentId; // @synthesize parentCommentId=_parentCommentId;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *appSource; // @synthesize appSource=_appSource;
- (void).cxx_destruct;

@end
