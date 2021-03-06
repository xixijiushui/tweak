//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKSelectViewDelegate.h"

@class NSMutableArray, NSString, SearchFilterModel;

@interface SKFilterGroupView : UIView <SKSelectViewDelegate>
{
    _Bool _isHidden;
    id <SKFilterGroupViewDelegate> _delegate;
    SearchFilterModel *_filterModel;
    NSMutableArray *_filterViews;
}

@property(retain, nonatomic) NSMutableArray *filterViews; // @synthesize filterViews=_filterViews;
@property(nonatomic) __weak SearchFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) __weak id <SKFilterGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)filterviews;
- (void)selectView:(id)arg1 didSelectAtIndex:(long long)arg2;
- (id)getDataSource;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

