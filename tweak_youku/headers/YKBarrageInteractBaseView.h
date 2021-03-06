//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKBarrageViewItem.h"

@class NSString, UITapGestureRecognizer, YKBarrageInteractiveInfo;

@interface YKBarrageInteractBaseView : UIView <YKBarrageViewItem>
{
    YKBarrageInteractiveInfo *_info;
    UITapGestureRecognizer *_tapGR;
}

+ (id)createView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGR; // @synthesize tapGR=_tapGR;
@property(retain, nonatomic) YKBarrageInteractiveInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)handleViewTap:(id)arg1;
- (void)setUpTapGesture;
- (void)awakeFromNib;
- (void)hideViewWithAnimation;
- (void)showViewWithAnimation;
- (void)renderWithInteractiveInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

