//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKAdPlayerDetailContent.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString, SKStoreProductViewController;

@interface YKAdPlayerDetailAppStoreContent : YKAdPlayerDetailContent <SKStoreProductViewControllerDelegate>
{
    SKStoreProductViewController *_storeProductViewController;
    NSString *_appId;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) SKStoreProductViewController *storeProductViewController; // @synthesize storeProductViewController=_storeProductViewController;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)showWithFrame:(struct CGRect)arg1 controller:(id)arg2 appId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
