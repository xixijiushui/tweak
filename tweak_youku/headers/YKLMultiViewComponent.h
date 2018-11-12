//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "YKLMultiViewAdapterDelagate.h"

@class NSArray, NSDictionary, NSString;

@interface YKLMultiViewComponent : WXComponent <YKLMultiViewAdapterDelagate>
{
    id <YKLMultiViewProtocol> _multiViewAdapter;
    NSDictionary *_multiViewAttributes;
    NSString *_nowSceneId;
    NSString *_screenState;
    NSArray *_dataSource;
}

+ (id)wx_export_method_28;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSString *screenState; // @synthesize screenState=_screenState;
@property(retain, nonatomic) NSString *nowSceneId; // @synthesize nowSceneId=_nowSceneId;
@property(retain, nonatomic) NSDictionary *multiViewAttributes; // @synthesize multiViewAttributes=_multiViewAttributes;
@property(retain, nonatomic) id <YKLMultiViewProtocol> multiViewAdapter; // @synthesize multiViewAdapter=_multiViewAdapter;
- (void).cxx_destruct;
- (void)endPullMultiViewPannel:(id)arg1;
- (void)startPullMultiViewPannel:(id)arg1;
- (void)onBgClick;
- (void)changeScene:(id)arg1;
- (void)openSceneList;
- (void)viewDidLoad;
- (id)loadView;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

