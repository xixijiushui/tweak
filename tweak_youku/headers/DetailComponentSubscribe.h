//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailComponent.h"

#import "DetailSubscribeViewDelegate.h"

@class DetailSubscribeView, NSString, UserSubscb;

@interface DetailComponentSubscribe : DetailComponent <DetailSubscribeViewDelegate>
{
    _Bool _hasExpose;
    DetailSubscribeView *_subscribeView;
    UserSubscb *_userInfo;
}

@property(nonatomic) _Bool hasExpose; // @synthesize hasExpose=_hasExpose;
@property(retain, nonatomic) UserSubscb *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) DetailSubscribeView *subscribeView; // @synthesize subscribeView=_subscribeView;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)detailSubscribeNeedUpdate:(id)arg1;
- (void)didPushUserSpace;
- (void)detailSubscribeView:(id)arg1 didChangeSubscribeStateFrom:(long long)arg2 to:(long long)arg3;
- (void)setUserInfoWithCmsCardVideo:(id)arg1;
- (void)reloadSubscribeState;
- (void)setSubscribeViewWIthCMSInfo:(id)arg1;
- (void)componentCard:(id)arg1 didSelectComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)configData;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)didFinishAsyncRequestDataInComponentCard:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

