//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface YKShortVideoCommentList : NSObject
{
    NSArray *_userUnchecked;
    NSArray *_hot;
    NSArray *_comments;
    long long _totalSize;
    long long _lastCommentId;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) long long lastCommentId; // @synthesize lastCommentId=_lastCommentId;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSArray *hot; // @synthesize hot=_hot;
@property(retain, nonatomic) NSArray *userUnchecked; // @synthesize userUnchecked=_userUnchecked;
- (void).cxx_destruct;
- (id)description;

@end
