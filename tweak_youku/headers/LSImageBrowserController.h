//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UILabel, UIScrollView;

@interface LSImageBrowserController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UILabel *_pageLabel;
    NSArray *_images;
    long long _defaultIndex;
    struct CGRect _originRect;
}

@property(nonatomic) struct CGRect originRect; // @synthesize originRect=_originRect;
@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)backButtonTapped:(id)arg1;
- (void)tapGesture:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)createImageViewWithIndex:(long long)arg1;
- (void)initScrollView;
- (void)dealloc;
- (void)addBackButton;
- (void)addPageTitle;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 imageURLs:(id)arg2 atIndex:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 images:(id)arg2 atIndex:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

