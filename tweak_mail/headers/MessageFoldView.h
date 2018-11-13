//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface MessageFoldView : UIView
{
    id <MessageFoldViewDelegate> _delegate;
    NSArray *_foldViews;
    NSArray *_foldShadowViews;
    NSArray *_foldLineViews;
    UIView *_coveredView;
    struct CGRect _coveredRect;
    double _minHeight;
    unsigned long long _foldCount;
    int _foldContentsVisibility;
    _Bool _validCoveredSnapshots;
}

@property(nonatomic) id <MessageFoldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)updateFoldSnapshotsIfNecessary;
- (void)invalidateFoldSnapshots;
- (_Bool)isUnfolded;
- (_Bool)isUnfolding;
- (void)setMessageFoldContentsVisibility:(int)arg1;
- (void)setLastQuoteLevel:(unsigned long long)arg1;
- (void)setCoveredRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_updateCoveredSnapshots;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 foldCount:(unsigned long long)arg2 minHeight:(double)arg3;

@end

