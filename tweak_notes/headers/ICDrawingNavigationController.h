//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentNavigationController.h"

@class ICDrawingViewController;

@interface ICDrawingNavigationController : ICAttachmentNavigationController
{
    ICDrawingViewController *_drawingViewController;
}

@property(retain, nonatomic) ICDrawingViewController *drawingViewController; // @synthesize drawingViewController=_drawingViewController;
- (void).cxx_destruct;
- (id)scrimColor;
- (struct CGRect)contentsRectForInlineAttachment;
- (struct CGRect)frameForFullscreenAttachmentInView:(id)arg1;
- (id)freeTransformableViewController;
- (_Bool)shouldAutorotate;
- (id)imageForTransition;
- (void)didCancelTransitionTo;
- (void)willTransitionOut;
- (id)initWithPresentationDelegate:(id)arg1 editorController:(id)arg2 gotoNoteButton:(id)arg3 editable:(_Bool)arg4;

@end

