//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UIImage, UILabel;

@interface YKBCTerminationView : UIView
{
    CALayer *_logoLayer;
    UIImage *_logoImage;
    id <YKBCTerminationViewDelegate> _delegate;
    UILabel *_promptLabel;
    UILabel *_noteLabel;
    UIButton *_button;
    long long _modeType;
}

@property(nonatomic) long long modeType; // @synthesize modeType=_modeType;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) __weak id <YKBCTerminationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonActionEvent:(id)arg1;
- (void)refreshSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

