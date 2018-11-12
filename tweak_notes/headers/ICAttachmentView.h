//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICBaseAttachmentView.h"

#import "ICAttachmentViewContentFrame.h"
#import "UIGestureRecognizerDelegate.h"

@class ICTextView, NSString;

@interface ICAttachmentView : ICBaseAttachmentView <UIGestureRecognizerDelegate, ICAttachmentViewContentFrame>
{
    _Bool _forManualRendering;
}

+ (void)invalidateAllAttachmentViewsForTextStorage:(id)arg1 layoutManager:(id)arg2;
@property(readonly) _Bool forManualRendering; // @synthesize forManualRendering=_forManualRendering;
- (void)icaxActivate;
- (void)respondToLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)respondToTapGesture:(id)arg1;
- (void)removeFromSuperview;
- (void)delete:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)editAttachmentWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)share:(id)arg1;
@property(readonly, nonatomic) ICTextView *textView;
- (void)menuWillHide:(id)arg1;
- (void)updateFirstResponder;
- (void)requestEditorFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)showMenu;
- (void)addMenuItemsIfNecessary;
- (void)showAttachmentsAsLargePreviews:(id)arg1;
- (void)showAttachmentsAsThumbnails:(id)arg1;
- (void)setAttachmentViewType:(short)arg1;
- (void)didLongPressAttachment:(id)arg1;
- (void)prepareForPrinting;
- (void)openAttachment;
- (void)didTapAttachment:(id)arg1;
- (void)setupEventHandling;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(_Bool)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sharedInit;
- (void)dealloc;
- (struct CGRect)frameForContent;
- (void)setupConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
