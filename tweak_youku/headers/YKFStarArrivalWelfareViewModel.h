//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALMBaseViewModel.h"

@class NSArray, NSString, UIColor, YKFStarArrivalUsersRankViewModel;

@interface YKFStarArrivalWelfareViewModel : ALMBaseViewModel
{
    long long _fandomId;
    long long _arrivalId;
    NSString *_title;
    NSString *_ruleDetailTitle;
    NSString *_welfareImageUrl;
    NSString *_welfareDes;
    NSArray *_userHeadPicUrls;
    NSString *_influence;
    NSString *_shareBtnTitle;
    UIColor *_themeColor;
    YKFStarArrivalUsersRankViewModel *_rankViewModel;
}

@property(retain, nonatomic) YKFStarArrivalUsersRankViewModel *rankViewModel; // @synthesize rankViewModel=_rankViewModel;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(copy, nonatomic) NSString *shareBtnTitle; // @synthesize shareBtnTitle=_shareBtnTitle;
@property(copy, nonatomic) NSString *influence; // @synthesize influence=_influence;
@property(retain, nonatomic) NSArray *userHeadPicUrls; // @synthesize userHeadPicUrls=_userHeadPicUrls;
@property(copy, nonatomic) NSString *welfareDes; // @synthesize welfareDes=_welfareDes;
@property(copy, nonatomic) NSString *welfareImageUrl; // @synthesize welfareImageUrl=_welfareImageUrl;
@property(copy, nonatomic) NSString *ruleDetailTitle; // @synthesize ruleDetailTitle=_ruleDetailTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long arrivalId; // @synthesize arrivalId=_arrivalId;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
- (void).cxx_destruct;
- (int)curStarcomingStatus;
- (_Bool)needSeparator;
- (void)showRule:(int)arg1;
- (id)initWithModel:(id)arg1;

@end

