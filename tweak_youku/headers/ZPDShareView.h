//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "YKShareCenterDelegate.h"

@class CALayer, NSArray, NSMutableArray, NSString, UICollectionView, UIWindow, ZPDShareInfo;

@interface ZPDShareView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, YKShareCenterDelegate>
{
    NSArray *_customArrayInfoDic;
    ZPDShareInfo *_shareInfo;
    id <ZPDShareViewDelegate> _delegate;
    UIView *_drawer;
    NSArray *_platformItems;
    NSMutableArray *_customBtnArray;
    UIWindow *_containerWindow;
    CALayer *_line;
    UIView *_maskView;
    UICollectionView *_shareList1;
    UICollectionView *_shareList2;
}

+ (id)shareView;
@property(retain, nonatomic) UICollectionView *shareList2; // @synthesize shareList2=_shareList2;
@property(retain, nonatomic) UICollectionView *shareList1; // @synthesize shareList1=_shareList1;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CALayer *line; // @synthesize line=_line;
@property(retain, nonatomic) UIWindow *containerWindow; // @synthesize containerWindow=_containerWindow;
@property(copy, nonatomic) NSMutableArray *customBtnArray; // @synthesize customBtnArray=_customBtnArray;
@property(copy, nonatomic) NSArray *platformItems; // @synthesize platformItems=_platformItems;
@property(retain, nonatomic) UIView *drawer; // @synthesize drawer=_drawer;
@property(nonatomic) __weak id <ZPDShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ZPDShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSArray *customArrayInfoDic; // @synthesize customArrayInfoDic=_customArrayInfoDic;
- (void).cxx_destruct;
- (void)shareSuccess;
- (void)clickShareItem:(int)arg1;
- (void)pageDidDisappear;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideWithDuration:(double)arg1;
- (void)hide;
- (void)shareWithShareItem:(id)arg1;
- (id)shareButtonWithImage:(id)arg1 title:(id)arg2 forState:(unsigned long long)arg3;
- (void)updateCellBtnStateIndex:(long long)arg1;
- (void)shareWithPlatformId:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)show;
- (void)relayout;
- (void)fillUI;
- (void)defaultConfig;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)shareList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
