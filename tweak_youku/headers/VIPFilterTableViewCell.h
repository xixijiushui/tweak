//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "VIPCommonItemViewDelegate.h"

@class NSString, VIPCommonItemView;

@interface VIPFilterTableViewCell : UITableViewCell <VIPCommonItemViewDelegate>
{
    id <VIPFilterTableViewCellDelegate> _clickDelegate;
    VIPCommonItemView *_itemViewLeft;
    VIPCommonItemView *_itemViewCenter;
    VIPCommonItemView *_itemViewRight;
}

@property(retain, nonatomic) VIPCommonItemView *itemViewRight; // @synthesize itemViewRight=_itemViewRight;
@property(retain, nonatomic) VIPCommonItemView *itemViewCenter; // @synthesize itemViewCenter=_itemViewCenter;
@property(retain, nonatomic) VIPCommonItemView *itemViewLeft; // @synthesize itemViewLeft=_itemViewLeft;
@property(nonatomic) __weak id <VIPFilterTableViewCellDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)commonItemViewClicked:(id)arg1;
- (void)didShowDetailCellWithData:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

