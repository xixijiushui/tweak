//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

#import "ICTrackedAttributeDelegate.h"

@class ICTextController, NSMutableDictionary, NSTextContainer, UITextView;

@interface ICLayoutManager : NSLayoutManager <ICTrackedAttributeDelegate>
{
    _Bool _shouldManuallyRenderSeparateSubviews;
    _Bool _lineHeightIncludeParagraphSpacing;
    _Bool _needsClearRemovedAttachments;
    UITextView *_textView;
    NSMutableDictionary *_todoButtonsByTrackingUUID;
    NSMutableDictionary *_activeSupplementalViews;
    NSMutableDictionary *_hiddenSupplementalViews;
    struct CGPoint _cachedOrigin;
    struct CGSize _cachedTextContainerSize;
}

@property(nonatomic) struct CGSize cachedTextContainerSize; // @synthesize cachedTextContainerSize=_cachedTextContainerSize;
@property(retain, nonatomic) NSMutableDictionary *hiddenSupplementalViews; // @synthesize hiddenSupplementalViews=_hiddenSupplementalViews;
@property(retain, nonatomic) NSMutableDictionary *activeSupplementalViews; // @synthesize activeSupplementalViews=_activeSupplementalViews;
@property(nonatomic) struct CGPoint cachedOrigin; // @synthesize cachedOrigin=_cachedOrigin;
@property(retain, nonatomic) NSMutableDictionary *todoButtonsByTrackingUUID; // @synthesize todoButtonsByTrackingUUID=_todoButtonsByTrackingUUID;
@property(nonatomic) _Bool needsClearRemovedAttachments; // @synthesize needsClearRemovedAttachments=_needsClearRemovedAttachments;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool lineHeightIncludeParagraphSpacing; // @synthesize lineHeightIncludeParagraphSpacing=_lineHeightIncludeParagraphSpacing;
@property(nonatomic) _Bool shouldManuallyRenderSeparateSubviews; // @synthesize shouldManuallyRenderSeparateSubviews=_shouldManuallyRenderSeparateSubviews;
- (void).cxx_destruct;
- (id)icaxTodoButtonForParagraphStyle:(id)arg1;
- (void)clearViewForTextAttachment:(id)arg1 removeFromSuperview:(_Bool)arg2;
- (struct UIView *)viewForTextAttachmentNoCreate:(id)arg1;
- (struct UIView *)viewForTextAttachment:(id)arg1;
- (void)clearSupplementalViewForIdentifier:(id)arg1;
- (struct UIView *)supplementalViewForIdentifier:(id)arg1 allowHiddenViews:(_Bool)arg2;
- (void)invalidateLayoutForAttachment:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)attachmentDidLoad:(id)arg1;
@property(readonly, nonatomic) NSTextContainer *textContainer;
@property(readonly, nonatomic) ICTextController *textController;
- (id)icTextView;
- (void)updateVisibleSupplementalViews;
- (void)contentOffsetFixWorkaroundFrom9_2;
- (void)hideSupplementalView:(struct UIView *)arg1 forIdentifier:(id)arg2;
- (void)unhideSupplementalView:(struct UIView *)arg1 forIdentifier:(id)arg2;
- (void)enumerateAttachmentViewsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)rangeForAttachment:(id)arg1 withTextAttachment:(id *)arg2;
- (void)updateFrameOfViewForAttachment:(id)arg1 inCharacterRange:(struct _NSRange)arg2 atPoint:(struct CGPoint)arg3;
- (void)ensureViewIsAddedForAttachment:(id)arg1 inCharacterRange:(struct _NSRange)arg2;
- (void)_clearRemovedAttachments;
- (void)clearRemovedAttachmentsIfNeeded;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (void)clearAllSupplementalViews;
- (void)updateSubviewsForCharacterRange:(struct _NSRange)arg1;
- (void)updateSubviewsForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)manuallyRenderSubviewsForCharacterRange:(struct _NSRange)arg1;
- (void)clearAllTodos;
- (void)drawBulletsForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)didPressTodoButton:(id)arg1;
- (id)drawTodoViewForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawListStylesForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)contentSizeCategoryDidChange;
- (void)textController:(id)arg1 updatedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 removedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 addedTrackedAttribute:(id)arg2;
- (struct CGRect)usedLineRectForRange:(struct _NSRange)arg1;
- (struct CGRect)lineRectForRange:(struct _NSRange)arg1;
- (struct CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)icReplaceTextStorage:(id)arg1;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2 updateAttachments:(_Bool)arg3;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)dealloc;
- (id)init;

@end
