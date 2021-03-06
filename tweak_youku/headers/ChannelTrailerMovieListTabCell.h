//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKTabMenuDelegate.h"

@class NSString, YKChannelList, YKTabMenu;

@interface ChannelTrailerMovieListTabCell : UITableViewCell <YKTabMenuDelegate>
{
    id <ChannelTrailerMovieListTabCellDelegate> _delegate;
    YKTabMenu *_tabMenu;
    YKChannelList *_list;
}

@property(retain, nonatomic) YKChannelList *list; // @synthesize list=_list;
@property(retain, nonatomic) YKTabMenu *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(nonatomic) __weak id <ChannelTrailerMovieListTabCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ykTabMenu:(id)arg1 didSelectMenuItem:(id)arg2 atIndex:(long long)arg3;
- (void)setUpWithChannelTrailerMovieList:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

