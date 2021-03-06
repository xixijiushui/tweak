//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKLMultiViewDelegate.h"
#import "YKLMultiViewProtocol.h"

@class NSString, YKLMultiView;

@interface YKLMultiViewAdapter : NSObject <YKLMultiViewDelegate, YKLMultiViewProtocol>
{
    YKLMultiView *_rootView;
    id <YKLMultiViewAdapterDelagate> _delegate;
}

@property(nonatomic) __weak id <YKLMultiViewAdapterDelagate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKLMultiView *rootView; // @synthesize rootView=_rootView;
- (void).cxx_destruct;
- (id)getMultiViewDelegate;
- (void)setMultiViewDelegate:(id)arg1;
- (void)endPullMultiViewPannel:(id)arg1;
- (void)startPullMultiViewPannel:(id)arg1;
- (void)onBgClick;
- (void)changeScene:(id)arg1;
- (void)dealloc;
- (void)hideMultiView;
- (void)up:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)show:(unsigned long long)arg1 nowSceneId:(id)arg2 dataSource:(id)arg3;
- (id)getRootView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

