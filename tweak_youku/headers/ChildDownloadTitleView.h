//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface ChildDownloadTitleView : UIView
{
    _Bool _iconEnable;
    UILabel *_titleLabel;
    UIImageView *_bottomImageView;
}

@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool iconEnable; // @synthesize iconEnable=_iconEnable;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)didSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

