//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKVIPCellProtocol.h"

@class NSString, YKVIPPageService;

@interface YKVIPBaseCell : UITableViewCell <YKVIPCellProtocol>
{
    id model;
    double _cellPadding;
    YKVIPPageService *_pageService;
    id <YKVIPBaseCellDelegate> _delegate;
}

@property(nonatomic) __weak id <YKVIPBaseCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak YKVIPPageService *pageService; // @synthesize pageService=_pageService;
@property(nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property(retain, nonatomic) id model; // @synthesize model;
- (void).cxx_destruct;
- (id)visibleItems;
- (void)movieAction;
- (void)removeVideoView;
- (void)setupVideoView;
- (void)setupModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
