//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFVideoDiscussionCommentDeleteRO : YKFAPIModel
{
    int _objectType;
    long long _commentId;
    NSString *_objectCode;
}

@property(copy, nonatomic) NSString *objectCode; // @synthesize objectCode=_objectCode;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;

@end

