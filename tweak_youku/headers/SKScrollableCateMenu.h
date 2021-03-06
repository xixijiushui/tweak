//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSString, SKCateMenuB, UIImageView;

@interface SKScrollableCateMenu : UIScrollView <UIScrollViewDelegate>
{
    SKCateMenuB *_cateMenuB;
    UIImageView *_overlayImage;
}

@property(retain, nonatomic) UIImageView *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) SKCateMenuB *cateMenuB; // @synthesize cateMenuB=_cateMenuB;
- (void).cxx_destruct;
- (void)hideOverLay;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateProgress:(double)arg1 toIndex:(long long)arg2;
- (long long)currentSelectIndex;
- (void)updateSelectedIndex:(long long)arg1;
- (void)setMenuItems:(id)arg1 selectedIndex:(long long)arg2;
- (void)setCheckNetWorkFlag:(_Bool)arg1;
- (void)setMenuDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

