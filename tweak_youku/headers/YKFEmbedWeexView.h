//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, UIImageView, WXSDKInstance;

@interface YKFEmbedWeexView : UIView
{
    NSString *_loadingState;
    NSDictionary *_model;
    NSString *_maskImageUrl;
    CDUnknownBlockType _layoutChangedBlock;
    NSURL *_requestURL;
    NSString *_requestContent;
    WXSDKInstance *_instance;
    UIView *_weexView;
    UIImageView *_maskView;
    NSMutableDictionary *_initialInfo;
}

@property(retain, nonatomic) NSMutableDictionary *initialInfo; // @synthesize initialInfo=_initialInfo;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) NSString *requestContent; // @synthesize requestContent=_requestContent;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(copy, nonatomic) CDUnknownBlockType layoutChangedBlock; // @synthesize layoutChangedBlock=_layoutChangedBlock;
@property(retain, nonatomic) NSString *maskImageUrl; // @synthesize maskImageUrl=_maskImageUrl;
@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *loadingState; // @synthesize loadingState=_loadingState;
- (void).cxx_destruct;
- (void)stop;
- (void)refreshWithModel:(id)arg1;
- (void)refresh;
- (void)reload;
- (void)loadRequestContent:(id)arg1;
- (void)loadRequestURL:(id)arg1;
- (void)renderWeexView;
- (void)createWeexInstance;
- (void)addApplicationStateObservers;
- (void)applicationStateDidChange:(id)arg1;
- (void)updateInstanceState:(long long)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)destroyInstance;
- (void)setup;
- (void)showMaskView;
- (void)resetMaskView;
- (void)initMaskView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

