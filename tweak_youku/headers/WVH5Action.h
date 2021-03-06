//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKH5ActionProtocol.h"

@class DYKH5ActionModel, DYKH5WebView, NSString, UINavigationController, UIViewController;

@interface WVH5Action : NSObject <DYKH5ActionProtocol>
{
    DYKH5ActionModel *_actionModel;
    DYKH5WebView *_webView;
    UIViewController *_sourceViewController;
    id <DYKH5ActionDelegate> _delegate;
    id <WVH5ActionDelegate> _wvdelegate;
    UINavigationController *_navigationController;
}

+ (void)recallAppServiceWithUTParams:(id)arg1;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <WVH5ActionDelegate> wvdelegate; // @synthesize wvdelegate=_wvdelegate;
@property(nonatomic) __weak id <DYKH5ActionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak DYKH5WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) DYKH5ActionModel *actionModel; // @synthesize actionModel=_actionModel;
- (void).cxx_destruct;
- (_Bool)webViewDelegateRespondsToRequireHalfScreenClose;
- (void)webViewDelegateRequireHalfScreenClose;
- (_Bool)webViewDelegateRespondsToRequireClose;
- (void)webViewDelegateRequireClose;
- (void)webViewReload:(id)arg1;
- (void)webViewEvaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openH5WithActionModel;
- (void)webViewSetLoginRefreshURLString:(id)arg1;
- (void)jumpLFLive;
- (void)openVideoNextDetail:(id)arg1;
- (void)openVideo:(id)arg1 aidForAlbum:(id)arg2;
- (void)openVideo:(id)arg1;
- (void)navigateToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)showLoginViewWithSuccessBlock:(CDUnknownBlockType)arg1 from:(id)arg2;
- (void)openVideo:(id)arg1 sid:(id)arg2 aid:(id)arg3 sourceType:(long long)arg4;
- (void)openiTunesWithAppID:(id)arg1;
- (void)showIndividual;
- (void)jumpMemberCenter;
- (void)jumpPlayList;
- (void)showShareView;
- (void)showLoginView;
- (id)topViewController;
- (_Bool)doAction:(id)arg1;
- (void)youkuBaseEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

