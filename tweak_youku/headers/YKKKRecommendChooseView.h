//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView, UITableView;

@interface YKKKRecommendChooseView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    id <YKKKRecommendChooseViewDelegate> _delegate;
    UITableView *_tableView;
    UIScrollView *_scrollView;
    NSMutableArray *_itemArray;
    NSMutableArray *_buttonArray;
    double _rowHeight;
}

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <YKKKRecommendChooseViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)action:(id)arg1;
- (void)refreshButtonStyle:(long long)arg1 title:(id)arg2 image:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 itemArray:(id)arg2 rowHeight:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

