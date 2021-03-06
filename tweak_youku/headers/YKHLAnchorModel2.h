//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface YKHLAnchorModel2 : NSObject <NSCoding>
{
    unsigned char _hasNewVideo;
    unsigned char _isFollowing;
    _Bool _isLive;
    unsigned char _isMore;
    NSString *_anchorName;
    NSString *_anchorImgUrl;
    NSString *_anchorId;
    long long _status;
    NSString *_scm;
    NSString *_feedType;
    NSString *_extra;
    NSString *_ytid;
}

@property(copy, nonatomic) NSString *ytid; // @synthesize ytid=_ytid;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) unsigned char isMore; // @synthesize isMore=_isMore;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic) unsigned char isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) unsigned char hasNewVideo; // @synthesize hasNewVideo=_hasNewVideo;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *anchorImgUrl; // @synthesize anchorImgUrl=_anchorImgUrl;
@property(copy, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

