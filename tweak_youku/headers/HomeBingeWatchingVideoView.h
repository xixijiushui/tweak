//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomeVideoView.h"

@class HomeVideoProgressBar, NSString, UILabel;

@interface HomeBingeWatchingVideoView : HomeVideoView
{
    _Bool _isShowProgressBar;
    double _progress;
    NSString *_tagName;
    HomeVideoProgressBar *_progressBar;
    UILabel *_tagLabel;
}

@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) HomeVideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool isShowProgressBar; // @synthesize isShowProgressBar=_isShowProgressBar;
- (void).cxx_destruct;
- (void)layoutVideoBottomView;
- (void)layoutTitleView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

