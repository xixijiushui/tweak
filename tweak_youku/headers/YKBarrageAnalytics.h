//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface YKBarrageAnalytics : NSObject
{
    NSString *_currentVid;
    long long _userType;
    unsigned long long _barrageSwitchOnDisplayTime;
    unsigned long long _barrageTextDisplayTime;
    long long _beforeForceEnableSwitchOn;
    long long _forceEnable;
    NSMutableArray *_danmakuList;
    long long _lastMinute;
}

+ (id)decorateSPMValue:(id)arg1;
+ (void)customEventWithEventID:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4;
+ (void)exposeWithSpmD:(id)arg1 andProperties:(id)arg2;
+ (void)clickEventWithControlName:(id)arg1 SPM:(id)arg2 extend:(id)arg3;
+ (id)sharedInstance;
+ (void)removeOfflineDM:(id)arg1 isCached:(_Bool)arg2;
+ (void)didDownloadOfflineDMSuccessfully:(id)arg1;
+ (void)getOfflineDMFileURL:(id)arg1 existingUrl:(_Bool)arg2;
+ (void)startToDownloadOfflineDM:(id)arg1;
@property(nonatomic) long long lastMinute; // @synthesize lastMinute=_lastMinute;
@property(retain, nonatomic) NSMutableArray *danmakuList; // @synthesize danmakuList=_danmakuList;
@property(nonatomic) long long forceEnable; // @synthesize forceEnable=_forceEnable;
@property(nonatomic) long long beforeForceEnableSwitchOn; // @synthesize beforeForceEnableSwitchOn=_beforeForceEnableSwitchOn;
@property(nonatomic) unsigned long long barrageTextDisplayTime; // @synthesize barrageTextDisplayTime=_barrageTextDisplayTime;
@property(nonatomic) unsigned long long barrageSwitchOnDisplayTime; // @synthesize barrageSwitchOnDisplayTime=_barrageSwitchOnDisplayTime;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *currentVid; // @synthesize currentVid=_currentVid;
- (void).cxx_destruct;
- (id)statisticsStringForBoolValue:(_Bool)arg1;
- (void)clearAnalyticsData;
- (id)commonAnalyticsDict;
- (id)currentUid;
- (void)customEventWithEventID:(id)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4;
- (void)clickEventWithControlName:(id)arg1 SPM:(id)arg2 extend:(id)arg3;
- (void)exposeWithSpmD:(id)arg1 andProperties:(id)arg2;
- (id)barrageSDKAnalyticsDataForVideo:(_Bool)arg1;
- (id)init;
- (void)clickGoingToBuyVipForCosplayRole:(id)arg1;
- (void)showNoPermissionViewForCosplayRole:(id)arg1;
- (void)clickCosplayRole:(id)arg1 isLocked:(_Bool)arg2;
- (void)showCosplayView;
- (void)buyVipAction;
- (void)vipPagePo;
- (void)clickVipCosplay;
- (void)clickCosplayIcon;
- (void)showCosplayIcon;
- (void)followBarrageClickWithDMId:(id)arg1;
- (void)buyVipColorPo;
- (void)clickVipColor;
- (void)clickColorChoose;
- (void)barrageQuestionClickWithType:(unsigned long long)arg1;
- (void)barrageQuestionPo;
- (void)barrageHotClick2:(long long)arg1;
- (void)barrageHotworldIconClick;
- (void)barrageHotworldClickWithNumber:(id)arg1;
- (void)barrageHotworldPoWithContent:(id)arg1;
- (void)didLikeUserBarrage:(id)arg1;
- (void)didLikeStarBarrage:(id)arg1;
- (void)scrollStarBarrageList;
- (void)clickStarBarrageListWithGroupId:(id)arg1 andObject:(id)arg2;
- (void)showStarBarrageList;
- (void)clickStarBarrageIcon;
- (void)showStarBarrageIcon;
- (void)showStarBarragePromptWithText:(id)arg1 isBeginning:(_Bool)arg2;
- (void)userDidClickBarragePop:(id)arg1;
- (void)userDidClickBarrage:(id)arg1;
- (void)userDidReplyBarrage:(id)arg1;
- (void)userDidDisagreeBarrage:(id)arg1;
- (void)userDidLikeBarrage:(id)arg1;
- (void)displaySystemBarrage:(id)arg1;
- (void)clickSystemBarrage:(id)arg1;
- (void)loadDMForLocalVideoFromDataSource:(_Bool)arg1;
- (void)clickBuyVipColor;
- (void)clickSendBarrageWithContent:(id)arg1 type:(long long)arg2 sendType:(unsigned long long)arg3;
- (void)clickCallInputViewWithType:(long long)arg1;
- (id)stringValueFromFloatValue:(float)arg1;
- (void)finishBaseSettingWithAlpha:(float)arg1 density:(float)arg2 speed:(float)arg3 fontSize:(float)arg4 topFilter:(_Bool)arg5 bottomFilter:(_Bool)arg6 colorFilter:(_Bool)arg7 keywordFilter:(_Bool)arg8;
- (void)clickSwitchWithStatus:(_Bool)arg1 andPlayTime:(long long)arg2 istv:(long long)arg3;
- (void)dragAdjustContainerYPostion:(double)arg1;
- (id)interactiveAnalyticsDict:(id)arg1;
- (void)closeInteractiveInfo:(id)arg1;
- (void)displayInteractiveInfo:(id)arg1;
- (void)clickInteractiveInfo:(id)arg1;
- (void)shareBarrage:(id)arg1;
- (void)displayQuestionBarrage:(id)arg1;
- (void)clickQuestionBarrage:(id)arg1;
- (void)sendDisplayBarrage;
- (void)sendCacheBarrage;
- (void)cacheDanmu:(id)arg1 toList:(id)arg2;
- (void)displayBarrage:(id)arg1;

@end

