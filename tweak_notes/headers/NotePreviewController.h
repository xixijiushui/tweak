//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextViewDelegate.h"

@class NSString, NoteContentLayer, NoteObject, NotesBackgroundView;

@interface NotePreviewController : UIViewController <UITextViewDelegate>
{
    NoteObject *_note;
    NoteContentLayer *_contentLayer;
}

@property(retain, nonatomic) NoteContentLayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) NoteObject *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (id)previewMenuItems;
- (void)shareNote;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (void)setupLegacyNotePreview;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
