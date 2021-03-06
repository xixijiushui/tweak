//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UILabel, UITextView;

@interface LSMoreDetailViewController : UIViewController
{
    CDUnknownBlockType _backButtonTappedBlock;
    UILabel *_titleLabel;
    UIButton *_backButton;
    UITextView *_contentView;
    NSString *_titleText;
    NSString *_contentText;
    struct CGRect _originRect;
}

@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UITextView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 content:(id)arg3;

@end

