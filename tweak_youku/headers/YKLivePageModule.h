//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"
#import "YKShareCenterDelegate.h"

@class NSString, UIImageView, UIViewController, WXSDKInstance;

@interface YKLivePageModule : NSObject <YKShareCenterDelegate, WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    UIImageView *_imageView;
    UIViewController *_viewController;
}

+ (id)viewController:(id)arg1;
+ (long long)stringToHalfByte:(id)arg1;
+ (id)wx_export_method_62;
+ (id)wx_export_method_61;
+ (id)wx_export_method_60;
+ (id)wx_export_method_59;
+ (id)wx_export_method_58;
+ (id)wx_export_method_57;
+ (id)wx_export_method_56;
+ (id)wx_export_method_55;
+ (id)wx_export_method_54;
+ (id)wx_export_method_53;
+ (id)wx_export_method_52;
+ (id)wx_export_method_51;
+ (id)wx_export_method_50;
+ (id)wx_export_method_49;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)visionToNavigation:(id)arg1;
- (void)visionNavigation:(id)arg1;
- (void)sendChat:(id)arg1;
- (void)showChampionInput:(id)arg1 length:(long long)arg2;
- (void)showCommentInput:(id)arg1 length:(long long)arg2;
- (void)getNetStatus:(CDUnknownBlockType)arg1;
- (void)showLoginPanel;
- (void)getUser:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)endRport;
- (void)goBack;
- (void)updateProps:(id)arg1 spm:(id)arg2 params:(id)arg3;
- (void)share:(id)arg1;
- (void)shareDidSendToOpenPlatform:(int)arg1 result:(int)arg2;
- (void)sharePanelCancelCallBack:(_Bool)arg1;
- (void)shareWillSendToOpenPlatform:(int)arg1;
- (void)jumpTo:(long long)arg1 url:(id)arg2 cb:(CDUnknownBlockType)arg3;
- (void)initBaichuanWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)navTo:(id)arg1;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)savePicture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

