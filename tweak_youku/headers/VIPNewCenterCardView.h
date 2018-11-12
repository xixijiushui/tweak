//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel, VIPNCMemberInfoModel, VIPNewCenterCardTitleView, VIPNewCenterModel;

@interface VIPNewCenterCardView : UIView
{
    VIPNewCenterModel *_drawer;
    VIPNCMemberInfoModel *_itemModel;
    float _scale;
    UIImageView *_validImgView;
    UIButton *_openVIPBtn;
    UIImageView *_bgImageView;
    UIImageView *_cardTypeImgView;
    UILabel *_exptimeLabel;
    VIPNewCenterCardTitleView *_desLabel;
}

@property(retain, nonatomic) VIPNewCenterCardTitleView *desLabel; // @synthesize desLabel=_desLabel;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UILabel *exptimeLabel; // @synthesize exptimeLabel=_exptimeLabel;
@property(retain, nonatomic) UIImageView *cardTypeImgView; // @synthesize cardTypeImgView=_cardTypeImgView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIButton *openVIPBtn; // @synthesize openVIPBtn=_openVIPBtn;
@property(retain, nonatomic) UIImageView *validImgView; // @synthesize validImgView=_validImgView;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)setVIPCenterHeaderData:(id)arg1 withMemberInfo:(id)arg2;
- (void)openVIPBtnAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

