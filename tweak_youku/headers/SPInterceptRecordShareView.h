//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, PageView, UIButton, UILabel, UIScrollView;

@interface SPInterceptRecordShareView : UIView <UIScrollViewDelegate>
{
    _Bool _shouldHideFanShareButton;
    id <SPInterceptRecordShareViewDelegate> _delegate;
    UIButton *_fansButton;
    NSString *_videoId;
    NSMutableArray *_shareDataArray;
    UIScrollView *_shareScrollView;
    PageView *_pageControl;
    UILabel *_titleLabel;
    NSMutableArray *_buttons;
    long long _shareType;
}

@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PageView *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *shareScrollView; // @synthesize shareScrollView=_shareScrollView;
@property(retain, nonatomic) NSMutableArray *shareDataArray; // @synthesize shareDataArray=_shareDataArray;
@property(nonatomic) _Bool shouldHideFanShareButton; // @synthesize shouldHideFanShareButton=_shouldHideFanShareButton;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) UIButton *fansButton; // @synthesize fansButton=_fansButton;
@property(nonatomic) __weak id <SPInterceptRecordShareViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shareExposeStaticsWithPlatformIdStr:(id)arg1 withYKShareSourceId:(int)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)isSystemVersionAllowed;
- (void)handleRealData;
- (void)openByPlatformButton:(id)arg1;
- (void)layoutShareButtonOnView:(id)arg1 withShareItems:(id)arg2;
- (void)createView;
- (id)initWithFrame:(struct CGRect)arg1 InterceptRecordType:(long long)arg2 shareItems:(id)arg3 withVideoId:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

