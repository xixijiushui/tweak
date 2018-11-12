//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "CMSListCellDelegate.h"
#import "CardVideoViewDelegate.h"

@class CMSCardVideo, CMSRankListCell, NSArray, NSMutableArray, NSString;

@interface CMSComponentRankList : CMSComponent <CardVideoViewDelegate, CMSListCellDelegate>
{
    NSArray *_playListArray;
    CMSRankListCell *_currentSCGCell;
    NSMutableArray *_exposedArray;
    NSMutableArray *_items;
    CMSCardVideo *_headerVitruleVideo;
}

@property(retain, nonatomic) CMSCardVideo *headerVitruleVideo; // @synthesize headerVitruleVideo=_headerVitruleVideo;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *exposedArray; // @synthesize exposedArray=_exposedArray;
@property(retain, nonatomic) CMSRankListCell *currentSCGCell; // @synthesize currentSCGCell=_currentSCGCell;
@property(retain, nonatomic) NSArray *playListArray; // @synthesize playListArray=_playListArray;
- (void).cxx_destruct;
- (id)cmsHeaderControlName;
- (id)cmsHeaderSpmAtIndex;
- (id)cmsPageName;
- (void)cardTitleClick;
- (void)cardEndDraggingAndDeceleratingWithVisibleCells:(id)arg1;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (void)exposeStatistics;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)layoutCardManager;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

