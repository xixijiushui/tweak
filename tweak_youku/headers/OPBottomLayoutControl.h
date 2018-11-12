//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPLayoutControl.h"

#import "OPLayoutModelDelegate.h"

@class NSMutableArray, NSString, OPLayoutModel, OPLayoutModelGroup, UIView;

@interface OPBottomLayoutControl : OPLayoutControl <OPLayoutModelDelegate>
{
    OPLayoutModelGroup *_layoutModelGroup;
    long long _layoutModeType;
    double _portraitControlHeihgt;
    double _landscapeControlHeihgt;
    _Bool _isCanShow;
    _Bool _isTopStyle;
    UIView *_bottomView;
    OPLayoutModel *_layoutModel;
    NSMutableArray *_leftArray;
    NSMutableArray *_centerArray;
    NSMutableArray *_rightArray;
    NSMutableArray *_otherArray;
}

@property(nonatomic) _Bool isTopStyle; // @synthesize isTopStyle=_isTopStyle;
@property(retain, nonatomic) NSMutableArray *otherArray; // @synthesize otherArray=_otherArray;
@property(retain, nonatomic) NSMutableArray *rightArray; // @synthesize rightArray=_rightArray;
@property(retain, nonatomic) NSMutableArray *centerArray; // @synthesize centerArray=_centerArray;
@property(retain, nonatomic) NSMutableArray *leftArray; // @synthesize leftArray=_leftArray;
@property(retain, nonatomic) OPLayoutModel *layoutModel; // @synthesize layoutModel=_layoutModel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
- (void).cxx_destruct;
- (void)dealParams;
- (void)updateLayoutModelArrayState:(long long)arg1;
- (void)modelArrayRemoveAll;
- (void)modelArrayRemoveModel:(id)arg1;
- (void)modelArrayAddModel:(id)arg1;
- (void)initLayoutModelArray;
- (void)setupSubviews;
- (void)layoutWillAppear:(id)arg1;
- (void)layoutModelGroup:(id)arg1 didCancel:(id)arg2;
- (void)layoutModelGroup:(id)arg1 willExecute:(id)arg2;
- (void)layoutModelGroup:(id)arg1 didUnregister:(id)arg2;
- (void)layoutModelGroup:(id)arg1 didRegister:(id)arg2;
- (void)onReceived:(id)arg1;
- (void)onUpdate:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

