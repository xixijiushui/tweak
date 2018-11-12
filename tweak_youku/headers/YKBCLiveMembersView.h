//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MQLFormViewDataSource.h"

@class NSString, UIButton, UILabel, YKBCMQLFormView;

@interface YKBCLiveMembersView : UIView <MQLFormViewDataSource>
{
    int _memberMax;
    int _memberCnt;
    YKBCMQLFormView *_formView;
    UIView *_headerContain;
    UILabel *_contentLab;
    UILabel *_numLab;
    UIButton *_closeBtn;
    id <YKBCLiveMembersViewDelegate> _delegate;
}

@property(nonatomic) int memberCnt; // @synthesize memberCnt=_memberCnt;
@property(nonatomic) __weak id <YKBCLiveMembersViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *numLab; // @synthesize numLab=_numLab;
@property(retain, nonatomic) UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(retain, nonatomic) UIView *headerContain; // @synthesize headerContain=_headerContain;
@property(nonatomic) int memberMax; // @synthesize memberMax=_memberMax;
@property(retain, nonatomic) YKBCMQLFormView *formView; // @synthesize formView=_formView;
- (void).cxx_destruct;
- (id)formView:(id)arg1 backgroundColorForCellAtIndex:(unsigned long long)arg2;
- (id)formView:(id)arg1 imageForCellAtIndex:(unsigned long long)arg2;
- (id)formView:(id)arg1 titleColorForCellAtIndex:(unsigned long long)arg2;
- (id)formView:(id)arg1 partForCellAtIndex:(unsigned long long)arg2;
- (id)formView:(id)arg1 titleForCellAtIndex:(unsigned long long)arg2;
- (struct CGSize)formView:(id)arg1 sizeForCellAtIndex:(unsigned long long)arg2;
- (long long)numberOfCellsInFormView:(id)arg1;
- (void)setupViews;
- (void)relayoutSubviews;
- (void)updateHeaderNumber:(int)arg1 max:(int)arg2;
- (void)layoutHeader;
- (void)setupHeaderViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

