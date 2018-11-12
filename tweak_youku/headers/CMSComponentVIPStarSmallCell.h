//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "CMSComponentCellProtocol.h"
#import "CardVideoViewDelegate.h"

@class NSString, UIButton, UIImageView, VIPCMSAction, VIPCMSCardVideo, YKVIPCardVideoView;

@interface CMSComponentVIPStarSmallCell : UICollectionViewCell <CMSComponentCellProtocol, CardVideoViewDelegate>
{
    _Bool _isLast;
    YKVIPCardVideoView *_cardVideoView;
    VIPCMSCardVideo *_model;
    VIPCMSAction *_action;
    id <CMSComponentVIPStarSmallCellProtocol> _delegate;
    UIButton *_moreBtn;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(nonatomic) __weak id <CMSComponentVIPStarSmallCellProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(retain, nonatomic) VIPCMSCardVideo *model; // @synthesize model=_model;
@property(retain, nonatomic) YKVIPCardVideoView *cardVideoView; // @synthesize cardVideoView=_cardVideoView;
- (void).cxx_destruct;
- (void)cardVideoViewDidSelectVideo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setupModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
