//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICNoteContext.h"

@interface ICNoteContext (UndoSupport)
- (void)copyFolder:(id)arg1 toFolder:(id)arg2;
- (void)copyNotes:(id)arg1 toFolder:(id)arg2;
- (id)addNewNoteByCopyingNote:(id)arg1 toFolder:(id)arg2;
- (void)undoablyUndeleteFolder:(id)arg1 didMarkNotesForDeletion:(_Bool)arg2 actionName:(id)arg3;
- (void)undoablyDeleteFolder:(id)arg1 markNotesForDeletion:(_Bool)arg2 actionName:(id)arg3;
- (void)undoablyDeleteFolder:(id)arg1 actionName:(id)arg2;
- (id)undoablyCopyFolder:(id)arg1 toAccount:(id)arg2 copyingNotes:(_Bool)arg3 actionName:(id)arg4;
- (id)undoablyAddFolderWithActionName:(id)arg1;
- (void)undoablyTrashOrDeleteNotes:(id)arg1;
- (void)undoablyDeleteNotes:(id)arg1;
- (void)undoablyUndeleteNote:(id)arg1 actionName:(id)arg2;
- (void)undoablyDeleteNote:(id)arg1 actionName:(id)arg2 save:(_Bool)arg3;
- (void)undoablyDeleteNote:(id)arg1 actionName:(id)arg2;
- (void)undoablyCopyNotes:(id)arg1 toFolder:(id)arg2 actionName:(id)arg3;
- (id)undoablyCopyNote:(id)arg1 toFolder:(id)arg2 actionName:(id)arg3 save:(_Bool)arg4;
- (id)undoablyCopyNote:(id)arg1 toFolder:(id)arg2 actionName:(id)arg3;
- (void)undoablyUndeleteAttachment:(id)arg1;
- (void)undoablyDeleteAttachment:(id)arg1;
@end

