//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPersonViewControllerDelegate.h"

@class ABPersonViewController, NSData, NSString, UIScrollView;

@protocol ABPersonViewControllerPrivateDelegate <ABPersonViewControllerDelegate>

@optional
- (void)personViewController:(ABPersonViewController *)arg1 didReloadDataInScrollView:(UIScrollView *)arg2;
- (void)personViewController:(ABPersonViewController *)arg1 didLoadScrollView:(UIScrollView *)arg2;
- (void)personViewController:(ABPersonViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (_Bool)personViewController:(ABPersonViewController *)arg1 shouldPresentMessageCompositionWithVCard:(NSData *)arg2 filename:(NSString *)arg3;
- (void)personViewController:(ABPersonViewController *)arg1 willSetEditing:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)isPersonViewControllerInCustomPopover:(ABPersonViewController *)arg1;
- (void *)personForVCardRepresentation;
@end
