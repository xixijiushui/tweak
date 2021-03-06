//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChannelChildHistoryCellProtocol.h"

@class CMSJsonClient, ChildHistoryComponentModel, NSString;

@interface CMSComponentChildHistory : CMSComponent <ChannelChildHistoryCellProtocol>
{
    _Bool _needShow;
    _Bool _valid;
    ChildHistoryComponentModel *_historyData;
    CMSJsonClient *_newJsonClient;
}

@property(retain, nonatomic) CMSJsonClient *newJsonClient; // @synthesize newJsonClient=_newJsonClient;
@property(retain, nonatomic) ChildHistoryComponentModel *historyData; // @synthesize historyData=_historyData;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool needShow; // @synthesize needShow=_needShow;
- (void).cxx_destruct;
- (void)didSelectChildHistory:(id)arg1;
- (void)componentCard:(id)arg1 pageDidActivate:(id)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (id)historyArray;
- (void)initNet;
- (void)initLocal;
- (_Bool)checkIsLocal;
- (void)initData;
- (void)updateDataAndUi;
- (void)refreshContentFromNet;
- (void)handleLocalResult;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

