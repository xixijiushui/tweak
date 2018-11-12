//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "YKShareCenterDelegate.h"

@class NSArray, NSString, UIScrollView, YKShareInfoItem;

@interface KKHomeRecommendShareView : UIView <UIScrollViewDelegate, YKShareCenterDelegate>
{
    id <KKHomeRecommendShareViewDelegate> _delegate;
    NSArray *_shareButtonsArray;
    double _height;
    UIScrollView *_shareView;
    NSArray *_openPlatformArray;
    YKShareInfoItem *_shareInfo;
}

@property(retain, nonatomic) YKShareInfoItem *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSArray *openPlatformArray; // @synthesize openPlatformArray=_openPlatformArray;
@property(retain, nonatomic) UIScrollView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSArray *shareButtonsArray; // @synthesize shareButtonsArray=_shareButtonsArray;
@property(nonatomic) __weak id <KKHomeRecommendShareViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)convertShareOpenPlatFormId:(int)arg1;
- (void)openPlatform:(id)arg1;
- (void)sharePanelAnalytics:(id)arg1;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)shareWillSendToOpenPlatform:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shareViewType:(int)arg2 shareInfo:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

