//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VICBaseView.h"

@class NSString, UIImageView, UILabel;

@interface VICFocusTopLabelView : VICBaseView
{
    NSString *_labelText;
    UILabel *_starNameLabel;
    UIImageView *_backGroundView;
}

@property(retain, nonatomic) UIImageView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UILabel *starNameLabel; // @synthesize starNameLabel=_starNameLabel;
@property(copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
- (void).cxx_destruct;
- (void)setupView:(id)arg1;
- (void)setup:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
