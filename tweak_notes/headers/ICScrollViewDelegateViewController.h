//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ICScrollViewKeyboardResizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class ICScrollViewKeyboardResizer, NSString, NotesBackgroundView;

@interface ICScrollViewDelegateViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UIScrollViewDelegate>
{
    ICScrollViewKeyboardResizer *_scrollViewResizer;
}

@property(retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer; // @synthesize scrollViewResizer=_scrollViewResizer;
- (void).cxx_destruct;
- (double)topInsetForResizer:(id)arg1;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (void)setupScrollViewKeyboardResizer;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) NotesBackgroundView *backgroundView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

