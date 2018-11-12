//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "ChannelPGCUserCellDelegate.h"

@class ChannelPGCUserCell, NSMutableArray, NSString;

@interface CMSComponentPGCUser : CMSComponent <ChannelPGCUserCellDelegate>
{
    NSMutableArray *_videoArray;
    ChannelPGCUserCell *_PGCUserCell;
}

@property(retain, nonatomic) ChannelPGCUserCell *PGCUserCell; // @synthesize PGCUserCell=_PGCUserCell;
@property(retain, nonatomic) NSMutableArray *videoArray; // @synthesize videoArray=_videoArray;
- (void).cxx_destruct;
- (void)exposeVideoCellArray:(id)arg1;
- (void)clickUserImageView:(id)arg1;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

