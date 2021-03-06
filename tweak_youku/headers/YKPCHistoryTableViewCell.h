//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "YKPCVideoViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView, YKCMSPersonalCenterHistoryCard;

@interface YKPCHistoryTableViewCell : UITableViewCell <YKPCVideoViewDelegate>
{
    UIScrollView *_scrollView;
    id <YKPCHistoryTableViewCellDelegate> _itemClickDelegate;
    YKCMSPersonalCenterHistoryCard *_card;
    NSMutableArray *_scrollViewArray;
    NSMutableArray *_statisticArray;
}

@property(retain, nonatomic) NSMutableArray *statisticArray; // @synthesize statisticArray=_statisticArray;
@property(retain, nonatomic) NSMutableArray *scrollViewArray; // @synthesize scrollViewArray=_scrollViewArray;
@property(nonatomic) __weak YKCMSPersonalCenterHistoryCard *card; // @synthesize card=_card;
@property(nonatomic) __weak id <YKPCHistoryTableViewCellDelegate> itemClickDelegate; // @synthesize itemClickDelegate=_itemClickDelegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)exposeStatistics;
- (void)caculateCurrentDisplay;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)videoViewDidClick:(id)arg1 Model:(id)arg2;
- (void)layoutSubviews;
- (void)resetContentOffset;
- (void)refreshData;
- (void)setUpView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

