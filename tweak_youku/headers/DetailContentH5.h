//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKH5BaseWebViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class DYKH5WebViewController, DetailContent, NSMutableDictionary, NSString, UIScrollView;

@interface DetailContentH5 : NSObject <DYKH5BaseWebViewControllerDelegate, UIScrollViewDelegate>
{
    DetailContent *_content;
    DYKH5WebViewController *_viewController;
    UIScrollView *_scrollView;
    NSMutableDictionary *_urlDic;
    NSMutableDictionary *_conDic;
}

@property(retain, nonatomic) NSMutableDictionary *conDic; // @synthesize conDic=_conDic;
@property(retain, nonatomic) NSMutableDictionary *urlDic; // @synthesize urlDic=_urlDic;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) DYKH5WebViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak DetailContent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollsToTop:(_Bool)arg1;
- (void)showWithFrame:(struct CGRect)arg1 ofIndex:(long long)arg2;
- (id)queryUrlStringOfIndex:(long long)arg1;
- (void)addUrlString:(id)arg1 ofIndex:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

