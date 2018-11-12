//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, LFRoomMessageHintView, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface LFRoomChatMessageView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMutableArray *_data;
    LFRoomMessageHintView *_hintView;
    _Bool _locationBottom;
    NSIndexPath *_recordIndexPath;
    UIView *_tableHeaderView;
    CAGradientLayer *_maskLayer;
    double _chatMaskHeight;
    unsigned long long _chatMaxCount;
    unsigned long long _chatMinCount;
    _Bool _cellTouchDisabled;
    id <LFRoomChatViewMessageDelegate> _delegate;
}

+ (id)roomChatMessageViewWithContentSize:(struct CGSize)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool cellTouchDisabled; // @synthesize cellTouchDisabled=_cellTouchDisabled;
@property(readonly, nonatomic) __weak id <LFRoomChatViewMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkTableViewLocationIsBottom;
- (void)checkTableContentIsFull;
- (void)checkMenuController;
- (_Bool)checkMessageCount;
- (void)refreshNewChatMessage:(id)arg1;
- (void)insertNewChatMessage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)_settingTableHeaderView;
- (void)_settingHintView;
- (void)_settingTableViewLayout;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
