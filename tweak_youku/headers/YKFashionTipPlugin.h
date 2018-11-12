//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPFunctionLayoutModel, UIView, YKFashionTopic, YKFashionViewController;

@interface YKFashionTipPlugin : OPPlugin
{
    _Bool _endHadFired;
    OPFunctionLayoutModel *_functionTask;
    UIView *_contentView;
    YKFashionTopic *_topic;
    YKFashionViewController *_superViewController;
}

+ (id)params;
@property(nonatomic) __weak YKFashionViewController *superViewController; // @synthesize superViewController=_superViewController;
@property(retain, nonatomic) YKFashionTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (void)appendSubviews;
- (void)setupWithTopic:(id)arg1;
- (_Bool)isLastVideo;
- (double)duration;
- (double)played;
- (void)onReceived:(id)arg1;
- (void)update;
- (void)uninstall;
- (void)onRun;

@end

