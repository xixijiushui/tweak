//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YKBarrageVoteDisplay : NSObject
{
    _Bool _allowVoteUp;
    _Bool _allowVoteDown;
    _Bool _allowShowVoteUp;
    _Bool _allowShowVoteDown;
    long long _maxVoteUp;
    long long _maxVoteDown;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(nonatomic) _Bool allowShowVoteDown; // @synthesize allowShowVoteDown=_allowShowVoteDown;
@property(nonatomic) _Bool allowShowVoteUp; // @synthesize allowShowVoteUp=_allowShowVoteUp;
@property(nonatomic) _Bool allowVoteDown; // @synthesize allowVoteDown=_allowVoteDown;
@property(nonatomic) _Bool allowVoteUp; // @synthesize allowVoteUp=_allowVoteUp;
@property(nonatomic) long long maxVoteDown; // @synthesize maxVoteDown=_maxVoteDown;
@property(nonatomic) long long maxVoteUp; // @synthesize maxVoteUp=_maxVoteUp;

@end

