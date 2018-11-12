//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class CALayer, CATransformLayer, ICNoteEditorDateView, ICNoteEditorViewController, NSAttributedString, NSDictionary, UIResponder, UIView;

@interface ICTextView : UITextView
{
    struct _NSRange _selectedRangeBeforeMarking;
    _Bool _shouldAvoidBecomingFirstResponder;
    _Bool _isTransitioningToNewSize;
    _Bool __icaxShouldPreventUpdatingFakeCursorRange;
    _Bool _disableContentOffsetChanges;
    _Bool _isInSetBounds;
    ICNoteEditorViewController *_editorController;
    ICNoteEditorDateView *_dateView;
    CALayer *_topSplitLayer;
    CALayer *_bottomSplitLayer;
    UIResponder *_nextResponderOverride;
    unsigned long long __icaxModifiedCursorPosition;
    NSAttributedString *__icaxCachedModifiedAttributedString;
    CATransformLayer *_splitLayerContainer;
    NSDictionary *_icTypingAttributes;
    NSDictionary *_pendingTypingAttributes;
    struct _NSRange __icaxModifiedSelectionRange;
    struct CGRect _currentSetBoundsRect;
}

@property(nonatomic) struct CGRect currentSetBoundsRect; // @synthesize currentSetBoundsRect=_currentSetBoundsRect;
@property(nonatomic) _Bool isInSetBounds; // @synthesize isInSetBounds=_isInSetBounds;
@property(retain, nonatomic) NSDictionary *pendingTypingAttributes; // @synthesize pendingTypingAttributes=_pendingTypingAttributes;
@property(retain, nonatomic) NSDictionary *icTypingAttributes; // @synthesize icTypingAttributes=_icTypingAttributes;
@property(nonatomic) _Bool disableContentOffsetChanges; // @synthesize disableContentOffsetChanges=_disableContentOffsetChanges;
@property(retain, nonatomic) CATransformLayer *splitLayerContainer; // @synthesize splitLayerContainer=_splitLayerContainer;
@property(nonatomic) _Bool _icaxShouldPreventUpdatingFakeCursorRange; // @synthesize _icaxShouldPreventUpdatingFakeCursorRange=__icaxShouldPreventUpdatingFakeCursorRange;
@property(copy, nonatomic) NSAttributedString *_icaxCachedModifiedAttributedString; // @synthesize _icaxCachedModifiedAttributedString=__icaxCachedModifiedAttributedString;
@property(nonatomic) struct _NSRange _icaxModifiedSelectionRange; // @synthesize _icaxModifiedSelectionRange=__icaxModifiedSelectionRange;
@property(nonatomic) unsigned long long _icaxModifiedCursorPosition; // @synthesize _icaxModifiedCursorPosition=__icaxModifiedCursorPosition;
@property(nonatomic) _Bool isTransitioningToNewSize; // @synthesize isTransitioningToNewSize=_isTransitioningToNewSize;
@property(nonatomic) _Bool shouldAvoidBecomingFirstResponder; // @synthesize shouldAvoidBecomingFirstResponder=_shouldAvoidBecomingFirstResponder;
@property(nonatomic) __weak UIResponder *nextResponderOverride; // @synthesize nextResponderOverride=_nextResponderOverride;
@property(retain, nonatomic) CALayer *bottomSplitLayer; // @synthesize bottomSplitLayer=_bottomSplitLayer;
@property(retain, nonatomic) CALayer *topSplitLayer; // @synthesize topSplitLayer=_topSplitLayer;
@property(retain, nonatomic) ICNoteEditorDateView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) __weak ICNoteEditorViewController *editorController; // @synthesize editorController=_editorController;
- (void).cxx_destruct;
- (void)handleAccessibilityDarkerSystemColorsStatusDidChange:(id)arg1;
@property(readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString;
- (struct UIEdgeInsets)minimumMargins;
- (void)applyLeftAndRightEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)layoutMarginsDidChange;
- (void)_deleteBackwardAndNotify:(_Bool)arg1;
- (void)deleteBackward;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)insertText:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)customCopyData;
@property(readonly, nonatomic) _Bool isSelectionCopyableSize;
@property(readonly, nonatomic) _Bool isDocumentCopyableSize;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)replaceCharactersInSelectedRangeWithoutExceedingMaxLengthWithAttributedString:(id)arg1;
- (void)paste:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)createLayersForSplitAtCharacter:(unsigned long long)arg1 topTargetFrame:(struct CGRect *)arg2 bottomTargetFrame:(struct CGRect *)arg3;
- (id)splitLayerForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3;
- (struct CGRect)splitFrameForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3 originForRendering:(struct CGPoint *)arg4;
- (struct CGRect)splitFrameForCharacterRange:(struct _NSRange)arg1 withTargetFrame:(struct CGRect *)arg2 top:(_Bool)arg3;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
@property(readonly, nonatomic) NSDictionary *internalTypingAttributes;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (id)typingAttributes;
- (void)_pushPendingTypingAttributesIfNeeded;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setTypingAttributes:(id)arg1;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)undoManager;
- (id)TTTextStorage;
- (id)TTTextStorageOptional;
- (void)setupLinkTextAttributes;
- (void)setEditable:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)select:(id)arg1;
- (void)setClampedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)clampedContentOffset:(struct CGPoint)arg1;
- (double)maxYContentOffset;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)resetContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)singleSelectedAttachment;
- (id)_nextKeyResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomesEditableWithGestures;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
@property(readonly, nonatomic) UIView *containerViewForAttachments;
- (void)layoutSubviews;
@property(readonly, nonatomic) double dateLabelOverscroll;
- (void)createDateLabel;
- (void)inputModeDidChange:(id)arg1;
- (void)setTextSelectionForceGestureEnabled:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

