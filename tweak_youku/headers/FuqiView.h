//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FuqiView : UIView
{
    UIImageView *_backImage;
    UIImageView *_fuqiImage;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *fuqiImage; // @synthesize fuqiImage=_fuqiImage;
@property(retain, nonatomic) UIImageView *backImage; // @synthesize backImage=_backImage;
- (void).cxx_destruct;
- (void)showFuqi:(_Bool)arg1 fuqiNumber:(int)arg2;
- (void)creatUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

