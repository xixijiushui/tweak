//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChildDisneyActivityItem : NSObject
{
    NSString *_appId;
    NSString *_cnUrl;
    NSString *_enUrl;
    long long _startTime;
    long long _endTime;
    NSString *_relateSkill;
    NSString *_videoId;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *relateSkill; // @synthesize relateSkill=_relateSkill;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *enUrl; // @synthesize enUrl=_enUrl;
@property(copy, nonatomic) NSString *cnUrl; // @synthesize cnUrl=_cnUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (long long)getSecsWithString:(id)arg1;
- (_Bool)modelCustomTransformFromDictionary:(id)arg1;

@end

