//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString;

@interface YKFStagephotoBlessvideoPO : YKFAPIModel
{
    NSString *_coverUrl;
    NSString *_encodedVid;
    NSString *_title;
    NSString *_utdid;
    long long _vid;
    long long _vvCount;
    long long _ytid;
}

@property(nonatomic) long long ytid; // @synthesize ytid=_ytid;
@property(nonatomic) long long vvCount; // @synthesize vvCount=_vvCount;
@property(nonatomic) long long vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *encodedVid; // @synthesize encodedVid=_encodedVid;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void).cxx_destruct;

@end

