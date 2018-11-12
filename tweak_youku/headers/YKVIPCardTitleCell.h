//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, VIPCMSAction;

@interface YKVIPCardTitleCell : UIView
{
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_imgView;
    VIPCMSAction *_action;
}

@property(retain, nonatomic) VIPCMSAction *action; // @synthesize action=_action;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitleFontWith:(double)arg1;
- (void)clickHeaderTitle:(id)arg1;
- (void)setHeaderDataWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
