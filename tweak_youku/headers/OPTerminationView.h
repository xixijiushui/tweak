//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIButton, UIImage, UILabel;

@interface OPTerminationView : UIView
{
    CALayer *_logoLayer;
    UIButton *_button;
    UIImage *_logoImage;
    id <OPTerminationViewDelegate> _delegate;
    UILabel *_promptLabel;
    long long _modeType;
}

@property(nonatomic) long long modeType; // @synthesize modeType=_modeType;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) __weak id <OPTerminationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonActionEvent:(id)arg1;
- (void)refreshSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

