//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFCardViewController, NSString, UIButton;

@protocol LFCardViewControllerDelegate <NSObject>

@optional
- (_Bool)cardViewController:(LFCardViewController *)arg1 shouldAccessForUserAction:(id)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickForceStopAction:(NSString *)arg2 cause:(NSString *)arg3;
- (void)cardViewController:(LFCardViewController *)arg1 clickTickGlobalClick:(NSString *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickUnKickout:(NSString *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickKickoutID:(NSString *)arg2 second:(double)arg3;
- (void)cardViewController:(LFCardViewController *)arg1 clickCancelAdmin:(NSString *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickBecomeAdmin:(NSString *)arg2 level:(int)arg3;
- (void)cardViewController:(LFCardViewController *)arg1 clickUnBanUserID:(NSString *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickBanUserID:(NSString *)arg2 second:(double)arg3;
- (void)cardViewController:(LFCardViewController *)arg1 clickChatButton:(UIButton *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickHomepageButton:(UIButton *)arg2;
- (void)cardViewController:(LFCardViewController *)arg1 clickReportButton:(UIButton *)arg2;
@end

