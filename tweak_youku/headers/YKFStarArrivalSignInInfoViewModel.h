//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSString;

@interface YKFStarArrivalSignInInfoViewModel : ALMBaseViewModel
{
    _Bool _isShowSubscribe;
    _Bool _isReserved;
    _Bool _isFinished;
    NSString *_title;
    NSString *_contentDesc;
    NSString *_subscribeTitle;
    long long _countDownTime;
}

@property(nonatomic) long long countDownTime; // @synthesize countDownTime=_countDownTime;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool isReserved; // @synthesize isReserved=_isReserved;
@property(copy, nonatomic) NSString *subscribeTitle; // @synthesize subscribeTitle=_subscribeTitle;
@property(copy, nonatomic) NSString *contentDesc; // @synthesize contentDesc=_contentDesc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isShowSubscribe; // @synthesize isShowSubscribe=_isShowSubscribe;
- (void).cxx_destruct;
- (_Bool)needSeparator;
- (id)initWithModel:(id)arg1;

@end

