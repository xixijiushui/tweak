//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface _MFActorSnapshotView : UIView
{
    UIImageView *_imageView;
    struct UIEdgeInsets _snapshotInsets;
}

@property(nonatomic) struct UIEdgeInsets snapshotInsets; // @synthesize snapshotInsets=_snapshotInsets;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

