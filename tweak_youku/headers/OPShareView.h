//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKShareCenterDelegate.h"

@class CALayer, NSArray, NSString, OPPlugin, OPShareManagerTool, UILabel, UIScrollView;

@interface OPShareView : UIView <YKShareCenterDelegate>
{
    id <OPShareViewDelegate> _delegate;
    OPPlugin *_plugin;
    OPShareManagerTool *_actionManager;
    NSString *_videoId;
    UILabel *_titleLabel;
    CALayer *_titleLineLayer;
    NSString *_title;
    NSArray *_openPlatformArray;
    UIScrollView *_shareAreaScrollView;
}

@property(retain, nonatomic) UIScrollView *shareAreaScrollView; // @synthesize shareAreaScrollView=_shareAreaScrollView;
@property(copy, nonatomic) NSArray *openPlatformArray; // @synthesize openPlatformArray=_openPlatformArray;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CALayer *titleLineLayer; // @synthesize titleLineLayer=_titleLineLayer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) OPShareManagerTool *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) __weak OPPlugin *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) __weak id <OPShareViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openByPlatformButton:(id)arg1;
- (void)createShareArea;
- (void)didSpecialShareButtonSelected:(int)arg1 withShareName:(id)arg2;
- (void)shareExposeStaticsWithPlatformIdStr:(id)arg1;
- (void)appendSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 withvideoId:(id)arg3 plugin:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 withvideoId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

