//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface KKRecPlayEndView : UIView
{
    UIButton *_replayButton;
    UIButton *_unLikeButton;
    UILabel *_replayLabel;
    UILabel *_unLikeLabel;
    UIView *_maskView;
    _Bool _showReplayOnly;
    id <KKRecPlayendViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
}

@property(nonatomic) _Bool showReplayOnly; // @synthesize showReplayOnly=_showReplayOnly;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak id <KKRecPlayendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickUnlikeEvent:(id)arg1;
- (void)reFreshClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showReplayOnly:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

