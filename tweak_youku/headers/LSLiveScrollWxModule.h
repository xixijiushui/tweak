//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXScrollerComponent.h"

@class UIScrollView;

@interface LSLiveScrollWxModule : WXScrollerComponent
{
    UIScrollView *_scrollView;
    long long _paddingTop;
}

@property(nonatomic) long long paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (long long)parsePaddingTop:(id)arg1;
- (void)update:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)viewDidLoad;
- (void)viewWillLoad;
- (id)loadView;
- (void)configPaddingTop:(long long)arg1;

@end
