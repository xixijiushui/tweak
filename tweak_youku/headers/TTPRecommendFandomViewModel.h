//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface TTPRecommendFandomViewModel : ALMBaseViewModel
{
    _Bool _isJoined;
    NSString *_avatarUrl;
    NSString *_fandomName;
    NSString *_fansCountDesc;
    NSString *_reason;
    long long _fandomId;
}

@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(nonatomic) _Bool isJoined; // @synthesize isJoined=_isJoined;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *fansCountDesc; // @synthesize fansCountDesc=_fansCountDesc;
@property(copy, nonatomic) NSString *fandomName; // @synthesize fandomName=_fandomName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

