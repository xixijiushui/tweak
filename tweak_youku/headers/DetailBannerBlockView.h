//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface DetailBannerBlockView : UIView
{
    UILabel *_textLabel1;
    UILabel *_textLabel2;
}

@property(retain, nonatomic) UILabel *textLabel2; // @synthesize textLabel2=_textLabel2;
@property(retain, nonatomic) UILabel *textLabel1; // @synthesize textLabel1=_textLabel1;
- (void).cxx_destruct;
- (void)setupText1:(long long)arg1 andText2:(id)arg2;
- (id)newTextLabel:(double)arg1 withBold:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

