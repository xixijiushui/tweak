//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface ICArchivedUIState : NSObject
{
    id <ICArchivedUIStateDelegate> _delegate;
    NSDictionary *_state;
}

@property(copy, nonatomic) NSDictionary *state; // @synthesize state=_state;
@property(nonatomic) __weak id <ICArchivedUIStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)hasArchivedState;
- (void)loadState;
- (void)updateState;
- (void)updateAndSaveState;
- (void)clearSavedState;
- (id)singleNoteWindows;
- (_Bool)folderListHidden;
- (_Bool)attachmentBrowserOpen;
- (id)noteEditorTextViewScrollPosition;
- (_Bool)primaryControllerHidden;
- (_Bool)notesListWasOnViewStack;
- (_Bool)showingNoteEditor;
- (_Bool)showingLegacyUI;
- (id)currentNoteContainer;
- (id)currentNote;
@property(readonly, copy, nonatomic) NSString *currentNoteContainerIdentifier;
@property(readonly, copy, nonatomic) NSString *currentFolderIdentifier;
@property(readonly, copy, nonatomic) NSString *currentNoteIdentifier;
- (id)initWithDelegate:(id)arg1;

@end
