//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface YKShowInfo : NSObject
{
    _Bool _isShowFromSingleVid;
    NSString *_showId;
    NSString *_showName;
    NSString *_backCoverImg;
    NSString *_userName;
    NSString *_updateNotice;
    NSArray *_scgIds;
    NSString *_feedType;
}

@property(retain, nonatomic) NSString *feedType; // @synthesize feedType=_feedType;
@property(retain, nonatomic) NSArray *scgIds; // @synthesize scgIds=_scgIds;
@property(nonatomic) _Bool isShowFromSingleVid; // @synthesize isShowFromSingleVid=_isShowFromSingleVid;
@property(retain, nonatomic) NSString *updateNotice; // @synthesize updateNotice=_updateNotice;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *backCoverImg; // @synthesize backCoverImg=_backCoverImg;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
- (void).cxx_destruct;

@end

