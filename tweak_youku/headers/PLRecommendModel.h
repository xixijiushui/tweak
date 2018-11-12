//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLRecommendModel : NSObject
{
    NSString *_coverImageURL;
    NSString *_title;
    long long _videoCount;
    NSString *_fmtVV;
    unsigned long long _type;
    id <PLRecommendJumpInfo> _jumpInfo;
}

@property(retain, nonatomic) id <PLRecommendJumpInfo> jumpInfo; // @synthesize jumpInfo=_jumpInfo;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *fmtVV; // @synthesize fmtVV=_fmtVV;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
- (void).cxx_destruct;

@end
