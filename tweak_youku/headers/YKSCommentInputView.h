//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YKSCommentEditViewDelegate.h"

@class NSString, YKSCommentEditView, YKSCommentService;

@interface YKSCommentInputView : UIView <YKSCommentEditViewDelegate>
{
    NSString *_videoID;
    CDUnknownBlockType _textChangedBlock;
    YKSCommentEditView *_editView;
    YKSCommentService *_service;
}

@property(retain, nonatomic) YKSCommentService *service; // @synthesize service=_service;
@property(retain, nonatomic) YKSCommentEditView *editView; // @synthesize editView=_editView;
@property(copy, nonatomic) CDUnknownBlockType textChangedBlock; // @synthesize textChangedBlock=_textChangedBlock;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;
- (id)vid;
- (void)didClickSendBtn;
- (void)didSendMsg:(id)arg1;
- (void)dismiss;
- (void)show;
- (void)tapGestureAction:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

