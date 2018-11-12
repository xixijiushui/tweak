//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OPListModel : NSObject
{
    _Bool _isTrailer;
    _Bool _isMember;
    _Bool _isCached;
    _Bool _isNew;
    _Bool _isKidPaid;
    _Bool _isVipTrailer;
    _Bool _isPay;
    _Bool _isFeature;
    _Bool _isShowSummaryLabel;
    NSString *_vid;
    NSString *_title;
    long long _episode;
    unsigned long long _state;
    NSString *_subtitle;
    NSString *_coverImagePath;
    NSString *_summaryTitle;
    NSString *_summayAlignment;
    NSString *_scm;
}

+ (id)initWithDic:(id)arg1;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(nonatomic) _Bool isShowSummaryLabel; // @synthesize isShowSummaryLabel=_isShowSummaryLabel;
@property(copy, nonatomic) NSString *summayAlignment; // @synthesize summayAlignment=_summayAlignment;
@property(copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;
@property(copy, nonatomic) NSString *coverImagePath; // @synthesize coverImagePath=_coverImagePath;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool isFeature; // @synthesize isFeature=_isFeature;
@property(nonatomic) _Bool isPay; // @synthesize isPay=_isPay;
@property(nonatomic) _Bool isVipTrailer; // @synthesize isVipTrailer=_isVipTrailer;
@property(nonatomic) _Bool isKidPaid; // @synthesize isKidPaid=_isKidPaid;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(nonatomic) _Bool isMember; // @synthesize isMember=_isMember;
@property(nonatomic) _Bool isTrailer; // @synthesize isTrailer=_isTrailer;
@property(nonatomic) long long episode; // @synthesize episode=_episode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;

@end
