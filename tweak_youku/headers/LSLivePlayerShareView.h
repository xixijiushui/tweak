//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "YKShareCenterDelegate.h"

@class LSShareModel, NSArray, NSMutableDictionary, NSString, UILabel, UIScrollView;

@interface LSLivePlayerShareView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, YKShareCenterDelegate>
{
    NSMutableDictionary *_titledButtons;
    LSShareModel *_itemModel;
    CDUnknownBlockType _blockShareFinished;
    UILabel *_titleLabel;
    double _pageControlOriginY;
    UIScrollView *_shareView;
    NSArray *_openPlatformArray;
    NSString *_uid;
}

@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSArray *openPlatformArray; // @synthesize openPlatformArray=_openPlatformArray;
@property(retain, nonatomic) UIScrollView *shareView; // @synthesize shareView=_shareView;
@property(nonatomic) double pageControlOriginY; // @synthesize pageControlOriginY=_pageControlOriginY;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType blockShareFinished; // @synthesize blockShareFinished=_blockShareFinished;
@property(retain, nonatomic) LSShareModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)statusBarOrientationChange:(id)arg1;
- (void)openPlatform:(id)arg1;
- (void)gestureWithTaped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)sharePanelAnalytics:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shareInfo:(id)arg2 uid:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

