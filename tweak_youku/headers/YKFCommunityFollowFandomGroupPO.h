//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFCommunityFollowFandomGroupPO : YKFAPIModel
{
    _Bool _isFollowedParentFandom;
    long long _fandomId;
    long long _parentFandomId;
    NSString *_parentFandomName;
}

@property(retain, nonatomic) NSString *parentFandomName; // @synthesize parentFandomName=_parentFandomName;
@property(nonatomic) long long parentFandomId; // @synthesize parentFandomId=_parentFandomId;
@property(nonatomic) _Bool isFollowedParentFandom; // @synthesize isFollowedParentFandom=_isFollowedParentFandom;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;

@end

