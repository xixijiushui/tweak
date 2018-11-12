//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextViewDelegate.h"

@class ICNote, ICTextController, ICTextView, NSString, NotesBackgroundView;

@interface ICNotePreviewController : UIViewController <UITextViewDelegate>
{
    ICNote *_note;
    ICTextView *_textView;
    ICTextController *_textController;
}

@property(retain, nonatomic) ICTextController *textController; // @synthesize textController=_textController;
@property(retain, nonatomic) ICTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (void).cxx_destruct;
- (void)addPasswordEntryViewController;
- (_Bool)isNotePasswordProtectedAndLocked;
- (id)previewMenuItems;
- (void)shareNote;
- (id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (void)setupPreview;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
