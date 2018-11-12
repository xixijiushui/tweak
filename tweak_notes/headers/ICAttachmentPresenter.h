//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICAttachmentPresentationDelegate.h"
#import "ICImageAttachmentPresentationDelegate.h"
#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"

@class ICAttachment, NSString, UIBarButtonItem, UIView, UIViewController;

@interface ICAttachmentPresenter : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, ICAttachmentPresentationDelegate, ICImageAttachmentPresentationDelegate>
{
    _Bool _showGoToNote;
    _Bool _editable;
    UIViewController *_presentedViewController;
    ICAttachment *_attachment;
    UIView *_viewToPresentFrom;
    UIViewController *_presentingViewController;
    UIBarButtonItem *_goToNoteButton;
}

+ (id)previewViewControllerForAttachment:(id)arg1 fromView:(id)arg2 isFromAttachmentBrowser:(_Bool)arg3;
+ (_Bool)presentAttachment:(id)arg1 fromView:(id)arg2 showGoToNote:(_Bool)arg3 editable:(_Bool)arg4 presentingViewController:(id)arg5;
+ (_Bool)presentAttachment:(id)arg1 fromView:(id)arg2 showGoToNote:(_Bool)arg3;
@property(retain, nonatomic) UIBarButtonItem *goToNoteButton; // @synthesize goToNoteButton=_goToNoteButton;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property _Bool showGoToNote; // @synthesize showGoToNote=_showGoToNote;
@property(retain) UIView *viewToPresentFrom; // @synthesize viewToPresentFrom=_viewToPresentFrom;
@property(retain) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property(retain) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (void).cxx_destruct;
- (void)attachmentWillBeDeletedNotification:(id)arg1;
- (void)attachmentViewControllerDidDismiss:(id)arg1;
- (struct UIImage *)image;
- (struct UIView *)viewToPresentAttachmentFrom;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (id)viewToPresentFromForQuickLook;
- (void)previewControllerDidDismiss:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)goToNote:(id)arg1;
- (void)openURL:(id)arg1;
- (void)dismiss:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)previewMenuItemsForAttachment;
- (void)presentAttachmentViewController:(id)arg1;
- (void)presentQuickLook;
- (void)presentDrawing;
- (void)presentURL;
- (void)presentMovie;
- (void)presentImage;
- (void)presentAttachment;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

