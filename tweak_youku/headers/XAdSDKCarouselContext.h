//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XAdSDKCarouselRequestProtocol.h"
#import "XAdSDKCarouselViewProtocol.h"

@class NSDictionary, NSString, UIColor, UIView, WXSDKInstance, XAdBaseDataSource, XAdCarouselRequestSource, XAdCarouselSourceItem, XAdSDKCarouselView;

@interface XAdSDKCarouselContext : NSObject <XAdSDKCarouselRequestProtocol, XAdSDKCarouselViewProtocol>
{
    _Bool _adItemExposured;
    _Bool _slotSlidInOut;
    _Bool _isOnForeground;
    id <XAdSDKCarouselContextProtocol> _delegate;
    NSString *_slotCid;
    NSDictionary *_slotDic;
    XAdCarouselSourceItem *_carouselSourceItem;
    XAdCarouselRequestSource *_carouselRequestSource;
    XAdBaseDataSource *_dataSource;
    WXSDKInstance *_instance;
    UIView *_weexView;
    XAdSDKCarouselView *_carouselView;
    unsigned long long _loopStyle;
    UIColor *_averageColor;
}

+ (void)reportNOAdSlotWithCid:(id)arg1 error:(long long)arg2;
+ (void)reportNOAdSlotWithCid:(id)arg1;
@property(retain, nonatomic) UIColor *averageColor; // @synthesize averageColor=_averageColor;
@property(nonatomic) unsigned long long loopStyle; // @synthesize loopStyle=_loopStyle;
@property(nonatomic) _Bool isOnForeground; // @synthesize isOnForeground=_isOnForeground;
@property(retain, nonatomic) XAdSDKCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) XAdBaseDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool slotSlidInOut; // @synthesize slotSlidInOut=_slotSlidInOut;
@property(retain, nonatomic) XAdCarouselRequestSource *carouselRequestSource; // @synthesize carouselRequestSource=_carouselRequestSource;
@property(nonatomic) _Bool adItemExposured; // @synthesize adItemExposured=_adItemExposured;
@property(retain, nonatomic) XAdCarouselSourceItem *carouselSourceItem; // @synthesize carouselSourceItem=_carouselSourceItem;
@property(copy, nonatomic) NSDictionary *slotDic; // @synthesize slotDic=_slotDic;
@property(copy, nonatomic) NSString *slotCid; // @synthesize slotCid=_slotCid;
@property(nonatomic) __weak id <XAdSDKCarouselContextProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)initWeexFail:(long long)arg1 localURL:(id)arg2 remoteURL:(id)arg3 param:(id)arg4;
- (void)setupWeexPauseAdUseRemoteURL:(_Bool)arg1 localURL:(id)arg2 remoteURL:(id)arg3;
- (void)setupWeexCarouselAd;
- (void)setWeexCarouselAdData;
- (void)layoutSubViewAction:(struct CGRect)arg1;
- (void)clickAdView;
- (_Bool)checkRequestAllowed;
- (void)slotReturnData;
- (void)sendCarouselFailWithReason:(long long)arg1 param:(id)arg2;
- (_Bool)checkIfAllowedWithAction:(id)arg1;
- (void)handleEnterForeground:(id)arg1;
- (void)handleEnterBackground:(id)arg1;
- (void)uninstallEventsObservers;
- (void)installEventsObservers;
- (id)clickGetADInfo;
- (id)getAverageColor;
- (id)getAdViewImage;
- (id)getAdViewWithMainMargin:(unsigned long long)arg1 useShadow:(_Bool)arg2;
- (void)contextSlidOut;
- (void)contextSlidIn;
- (void)contextRequestCMSWithInfo:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
