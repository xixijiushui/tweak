//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKFeedPlayedModel, NSArray, NSString;

@interface KKFeedRecommendModel : NSObject
{
    _Bool _collect;
    _Bool _isResetExposure;
    _Bool _showTag;
    float _totalTime;
    long long _offset;
    NSString *_codeId;
    NSString *_title;
    NSString *_playLink;
    NSString *_picUrl;
    NSString *_scm;
    NSString *_trackinfo;
    NSString *_templateTag;
    KKFeedPlayedModel *_playedModel;
    NSString *_spmC;
    NSString *_showName;
    NSString *_showScm;
    NSString *_showId;
    NSString *_showCategory;
    NSString *_doubanScore;
    NSString *_reputation;
    NSString *_relateVid;
    NSString *_relateVideoTitle;
    NSArray *_subShowCategory;
    struct CGPoint _scrollOffset;
}

+ (id)parseJson:(id)arg1;
@property(retain, nonatomic) NSArray *subShowCategory; // @synthesize subShowCategory=_subShowCategory;
@property(retain, nonatomic) NSString *relateVideoTitle; // @synthesize relateVideoTitle=_relateVideoTitle;
@property(retain, nonatomic) NSString *relateVid; // @synthesize relateVid=_relateVid;
@property(retain, nonatomic) NSString *reputation; // @synthesize reputation=_reputation;
@property(retain, nonatomic) NSString *doubanScore; // @synthesize doubanScore=_doubanScore;
@property(retain, nonatomic) NSString *showCategory; // @synthesize showCategory=_showCategory;
@property(retain, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(retain, nonatomic) NSString *showScm; // @synthesize showScm=_showScm;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *spmC; // @synthesize spmC=_spmC;
@property(nonatomic) _Bool showTag; // @synthesize showTag=_showTag;
@property(nonatomic) _Bool isResetExposure; // @synthesize isResetExposure=_isResetExposure;
@property(retain, nonatomic) KKFeedPlayedModel *playedModel; // @synthesize playedModel=_playedModel;
@property(retain, nonatomic) NSString *templateTag; // @synthesize templateTag=_templateTag;
@property(nonatomic) _Bool collect; // @synthesize collect=_collect;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) NSString *trackinfo; // @synthesize trackinfo=_trackinfo;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *playLink; // @synthesize playLink=_playLink;
@property(nonatomic) float totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *codeId; // @synthesize codeId=_codeId;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)init;

@end

