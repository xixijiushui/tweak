//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMHTMLElement, NSString, NoteContentLayer, UIPasteboard, UIScrollView;

@protocol NoteContentLayerDelegate <NSObject>
- (_Bool)isNoteContentLayerVisible:(NoteContentLayer *)arg1;
- (void)noteContentLayer:(NoteContentLayer *)arg1 didChangeContentSize:(struct CGSize)arg2;
- (void)noteContentLayer:(NoteContentLayer *)arg1 handleLongPressOnElement:(DOMHTMLElement *)arg2 atPoint:(struct CGPoint)arg3;
- (_Bool)noteContentLayer:(NoteContentLayer *)arg1 canHandleLongPressOnElement:(DOMHTMLElement *)arg2;
- (void)insertImageInNoteContentLayer:(NoteContentLayer *)arg1;
- (_Bool)allowsAttachmentsInNoteContentLayer:(NoteContentLayer *)arg1;
- (_Bool)noteContentLayer:(NoteContentLayer *)arg1 acceptContentsFromPasteboard:(UIPasteboard *)arg2;
- (_Bool)canInsertImagesInNoteContentLayer:(NoteContentLayer *)arg1;
- (void)noteContentLayer:(NoteContentLayer *)arg1 contentScrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)noteContentLayer:(NoteContentLayer *)arg1 containsCJK:(_Bool)arg2;
- (void)noteContentLayer:(NoteContentLayer *)arg1 setEditing:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)noteContentLayer:(NoteContentLayer *)arg1 acceptStringIncreasingContentLength:(NSString *)arg2;
- (void)noteContentLayerContentDidChange:(NoteContentLayer *)arg1 updatedTitle:(_Bool)arg2;
- (_Bool)noteContentLayerShouldBeginEditing:(NoteContentLayer *)arg1;

@optional
- (void)noteContentLayerKeyboardDidHide:(NoteContentLayer *)arg1;
@end

