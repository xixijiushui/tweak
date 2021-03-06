//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ASKHeadlineViewDelegate.h"
#import "AUIPageScrollViewDataSource.h"
#import "AUIPageScrollViewDelegate.h"

@class ASKMainViewHeadlineModel, AUIPageScrollView, NSIndexPath, NSString, UIImageView;

@interface ASKDrawerHeadline : UIView <AUIPageScrollViewDataSource, AUIPageScrollViewDelegate, ASKHeadlineViewDelegate>
{
    NSString *_drawerIdentifier;
    id <ASKDrawerHeadlineDelegate> _delegate;
    NSIndexPath *_indexPath;
    UIImageView *_logoImageView;
    AUIPageScrollView *_noticeView;
    ASKMainViewHeadlineModel *_dataModel;
}

+ (struct CGSize)drawerSize;
@property(retain, nonatomic) ASKMainViewHeadlineModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak AUIPageScrollView *noticeView; // @synthesize noticeView=_noticeView;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <ASKDrawerHeadlineDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *drawerIdentifier; // @synthesize drawerIdentifier=_drawerIdentifier;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)didClickedAtImageView:(id)arg1;
- (void)didClickedOnASKHeadlineView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)AUIPageScrollView:(id)arg1 didClickedAtIndex:(unsigned long long)arg2;
- (void)AUIPageScrollView:(id)arg1 didScrolledToIndex:(unsigned long long)arg2;
- (struct CGSize)sizeForPageScrollView:(id)arg1;
- (id)uiviewOfSize:(struct CGSize)arg1 forPageScrollView:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfPagesForPageScrollView:(id)arg1;
- (void)buildSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

