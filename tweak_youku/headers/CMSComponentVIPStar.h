//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "CMSComponentVIPStarCellDelegate.h"

@class CMSComponentVIPStarCell, NSString;

@interface CMSComponentVIPStar : CMSComponent <CMSComponentVIPStarCellDelegate>
{
    CMSComponentVIPStarCell *_vipStarCellView;
}

@property(nonatomic) __weak CMSComponentVIPStarCell *vipStarCellView; // @synthesize vipStarCellView=_vipStarCellView;
- (void).cxx_destruct;
- (void)componentCard:(id)arg1 didEndDisplayingCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)componentCard:(id)arg1 willDisplayCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (void)VIPStarCell:(id)arg1 cardVideos:(id)arg2;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (Class)reuseCellClass;
- (id)reuseCellIdentifier;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
