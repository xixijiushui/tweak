//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class ActivityView, NSString, UIImage, UIImageView;

@interface YKFeedPreparePlugin : OPPlugin
{
    _Bool _hideActivityView;
    _Bool _isStartPlayLoadingPending;
    ActivityView *_activityView;
    UIImageView *_coverView;
    UIImage *_coverImage;
    NSString *_coverPath;
    NSString *_preCoverPath;
}

+ (id)params;
@property(nonatomic) _Bool isStartPlayLoadingPending; // @synthesize isStartPlayLoadingPending=_isStartPlayLoadingPending;
@property(retain, nonatomic) NSString *preCoverPath; // @synthesize preCoverPath=_preCoverPath;
@property(retain, nonatomic) NSString *coverPath; // @synthesize coverPath=_coverPath;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) ActivityView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) _Bool hideActivityView; // @synthesize hideActivityView=_hideActivityView;
- (void).cxx_destruct;
- (void)setupCover;
- (void)refresh;
- (void)removeSubviews;
- (void)appendSubviews;
- (void)setupSubviews;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end
