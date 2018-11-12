//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSLayoutManagerDelegate.h"

@class ICLayoutManager, ICNote, ICTextController, ICTextView, NSString;

@interface ICTextViewController : UIViewController <NSLayoutManagerDelegate>
{
    ICTextController *_textController;
    ICNote *_note;
    double _initialContainerWidth;
}

+ (id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(_Bool)arg2 note:(id)arg3 containerWidth:(double)arg4;
@property(nonatomic) double initialContainerWidth; // @synthesize initialContainerWidth=_initialContainerWidth;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
@property(retain, nonatomic) ICTextController *textController; // @synthesize textController=_textController;
- (void).cxx_destruct;
- (void)layoutManager:(id)arg1 textContainer:(id)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)layoutManagerDidInvalidateLayout:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) ICLayoutManager *layoutManager;
- (id)editorController;
@property(readonly, nonatomic) ICTextView *textView;
- (void)loadView;
- (id)initWithNote:(id)arg1 initialContainerWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

