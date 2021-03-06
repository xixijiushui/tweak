//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFeedCardNewBaseHeader.h"

@class UIButton, UIImage, UILabel, YKFeedCardButton, YKFeedCardHeaderTopIcon;

@interface YKFeedCardNewHeader : YKFeedCardNewBaseHeader
{
    _Bool _isPCPage;
    _Bool _isPicHeader;
    int _reqType;
    UIImage *_placeholderImg;
    UILabel *_cateLabel;
    YKFeedCardButton *_focusBtn;
    YKFeedCardHeaderTopIcon *_setTopTabIcon;
}

+ (id)findBestViewController:(id)arg1;
+ (id)currentViewController;
+ (void)initialize;
@property(retain, nonatomic) YKFeedCardHeaderTopIcon *setTopTabIcon; // @synthesize setTopTabIcon=_setTopTabIcon;
@property(retain, nonatomic) YKFeedCardButton *focusBtn; // @synthesize focusBtn=_focusBtn;
@property(retain, nonatomic) UILabel *cateLabel; // @synthesize cateLabel=_cateLabel;
@property(retain, nonatomic) UIImage *placeholderImg; // @synthesize placeholderImg=_placeholderImg;
@property(nonatomic) _Bool isPicHeader; // @synthesize isPicHeader=_isPicHeader;
@property(nonatomic) int reqType; // @synthesize reqType=_reqType;
@property(nonatomic) _Bool isPCPage; // @synthesize isPCPage=_isPCPage;
- (void).cxx_destruct;
- (id)needExposeExtendsWithModel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)configWithModel:(id)arg1;
- (id)timeDescFromModel:(id)arg1;
- (void)subscribeStateChanged:(id)arg1;
- (void)configHeaderViewWithAvatar:(id)arg1 userName:(id)arg2 timeDesc:(id)arg3 subscribed:(_Bool)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)overflowBtnClicked:(id)arg1;
- (void)focusBtnClicked:(id)arg1;
- (void)avatarClicked:(id)arg1;
- (void)relayout;
- (id)miniAppName;
- (void)configFocusBtnState;
- (void)fillUI;
- (void)removeNotifications;
- (void)addNotifications;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)buildRecmdArrow;
@property(retain, nonatomic) UIButton *recmdArrow;
- (void)changeArrowDirection:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportRecmdCardState:(_Bool)arg1;
- (void)recmdArrowClicked:(id)arg1;
- (void)recmdCard_focusBtnClicked:(id)arg1;
- (void)recmdCardDidSubscribeStateChanged:(id)arg1;
- (void)recmdCard_addNotifications;
- (void)configFocusBtnState;
- (void)reloadCard;
- (void)hideIndicatorGrayArrow;
- (void)showIndicatorGrayArrow;
- (void)recmdCard_configWithModel:(id)arg1;

@end

