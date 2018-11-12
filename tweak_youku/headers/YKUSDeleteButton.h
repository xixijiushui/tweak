//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UITableView;

@interface YKUSDeleteButton : UIView
{
    UIView *_originView;
    UITableView *_tableView;
    UIButton *_bottomDelBtn;
    UIButton *_selectedAllButton;
    CDUnknownBlockType _deleteHandler;
    CDUnknownBlockType _selectedAllHandler;
}

@property(copy, nonatomic) CDUnknownBlockType selectedAllHandler; // @synthesize selectedAllHandler=_selectedAllHandler;
@property(copy, nonatomic) CDUnknownBlockType deleteHandler; // @synthesize deleteHandler=_deleteHandler;
@property(readonly, nonatomic) UIButton *selectedAllButton; // @synthesize selectedAllButton=_selectedAllButton;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_bottomDelBtn;
- (void).cxx_destruct;
- (void)refreshSelectedAllButton;
- (void)reloadDelButtonStatus;
- (void)refreshWithExtraText:(id)arg1;
- (void)refreshWithSelectedCount:(long long)arg1;
- (void)hide;
- (void)hideWithTableViewHeight:(float)arg1;
- (void)show;
- (void)showWithTableViewHeight:(float)arg1;
- (void)handleSelectedAllButton;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 addToOriginView:(id)arg2 withTableView:(id)arg3 deleteHandler:(CDUnknownBlockType)arg4 selectedAllHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;

@end
