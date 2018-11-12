//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UITextView, UIView, YKJSONClient;

@interface ZPDForwardFeedViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate>
{
    long long _totalWords;
    NSString *_articleText;
    long long _forwardType;
    NSString *_titleText;
    NSString *_coverImgUrlStr;
    NSString *_subTitle;
    NSString *_targetUid;
    NSString *_targetId;
    UIView *_naviBar;
    UIButton *_closeBtn;
    UIButton *_forwardBtn;
    UILabel *_titleLable;
    UIScrollView *_scrollView;
    UITextView *_textView;
    UILabel *_placeholder;
    UIView *_bottomContainer;
    UIImageView *_coverImg;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_calculateContainer;
    UILabel *_leftQuotaLabel;
    UIButton *_playIcon;
    YKJSONClient *_jsonClient;
}

@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) UIButton *playIcon; // @synthesize playIcon=_playIcon;
@property(retain, nonatomic) UILabel *leftQuotaLabel; // @synthesize leftQuotaLabel=_leftQuotaLabel;
@property(retain, nonatomic) UIView *calculateContainer; // @synthesize calculateContainer=_calculateContainer;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImg; // @synthesize coverImg=_coverImg;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *naviBar; // @synthesize naviBar=_naviBar;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *targetUid; // @synthesize targetUid=_targetUid;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *coverImgUrlStr; // @synthesize coverImgUrlStr=_coverImgUrlStr;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) long long forwardType; // @synthesize forwardType=_forwardType;
@property(copy, nonatomic) NSString *articleText; // @synthesize articleText=_articleText;
- (void).cxx_destruct;
- (void)commitForward;
- (void)shout:(id)arg1;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)adjustTextViewHeight;
- (void)textViewDidChange:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)setupUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupData;
- (void)viewDidLoad;
- (id)initWithTargetId:(id)arg1 targetUid:(id)arg2 targetType:(long long)arg3 titleText:(id)arg4 subTitle:(id)arg5 articleText:(id)arg6 coverImgUrlStr:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

