//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKCheckLoginViewController.h"

#import "UIActionSheetDelegate.h"

@class NSDictionary, NSString, UIActionSheet, UploadAlbumModel;

@interface YKUploadBaseViewController : YKCheckLoginViewController <UIActionSheetDelegate>
{
    _Bool _isTopic;
    _Bool _isFromH5;
    _Bool _isPresentFromMyVideoPage;
    _Bool _isPresentFromCommunityDetailPage;
    NSString *_preTitle;
    UploadAlbumModel *_albumModel;
    NSDictionary *_shareVideoObjectDic;
    CDUnknownBlockType _completionHandler;
    UIActionSheet *_actionSheet;
}

@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSDictionary *shareVideoObjectDic; // @synthesize shareVideoObjectDic=_shareVideoObjectDic;
@property(retain, nonatomic) UploadAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
@property(nonatomic) _Bool isPresentFromCommunityDetailPage; // @synthesize isPresentFromCommunityDetailPage=_isPresentFromCommunityDetailPage;
@property(nonatomic) _Bool isPresentFromMyVideoPage; // @synthesize isPresentFromMyVideoPage=_isPresentFromMyVideoPage;
@property(nonatomic) _Bool isFromH5; // @synthesize isFromH5=_isFromH5;
@property(nonatomic) _Bool isTopic; // @synthesize isTopic=_isTopic;
@property(retain, nonatomic) NSString *preTitle; // @synthesize preTitle=_preTitle;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)isShareVideoMode;
- (_Bool)showShareSuccessTipForShareVideo;
- (_Bool)showBackActionTipForShareVideo:(CDUnknownBlockType)arg1;
- (void)doBackAction;
- (void)backAction;
- (void)sendParamsToNextViewController:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

