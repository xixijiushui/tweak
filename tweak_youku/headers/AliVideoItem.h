//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AliVideoItem : NSObject
{
    _Bool _enableLog;
    _Bool _isAdvancedPlay;
    int _index;
    NSString *_alias;
    NSString *_appId;
    NSString *_token;
    NSString *_hosturl;
    struct CGSize _videoSize;
}

@property(copy, nonatomic) NSString *hosturl; // @synthesize hosturl=_hosturl;
@property(nonatomic) _Bool isAdvancedPlay; // @synthesize isAdvancedPlay=_isAdvancedPlay;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) _Bool enableLog; // @synthesize enableLog=_enableLog;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;

@end

