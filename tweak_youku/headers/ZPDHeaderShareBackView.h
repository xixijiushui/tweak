//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface ZPDHeaderShareBackView : UIView
{
    _Bool _isFollow;
    id <ZPDHeaderShareBackViewDelegate> _delegate;
    UIButton *_shareBtn;
    UIView *_linView;
    UIButton *_backBtn;
}

@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
@property(retain, nonatomic) UIView *linView; // @synthesize linView=_linView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(nonatomic) __weak id <ZPDHeaderShareBackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
- (void).cxx_destruct;
- (void)didShareClick;
- (void)didBackClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

