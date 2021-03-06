//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailCMSCardVideo.h"

@class NSString;

@interface DetailComponentStagePhotoModel : DetailCMSCardVideo
{
    NSString *_episodeId;
    NSString *_cover;
    NSString *_name;
    NSString *_showId;
    long long _setId;
    long long _tabId;
    long long _tabType;
}

@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
@property(nonatomic) long long setId; // @synthesize setId=_setId;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *episodeId; // @synthesize episodeId=_episodeId;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

@end

