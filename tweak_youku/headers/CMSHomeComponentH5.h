//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponentH5.h"

@class NSString;

@interface CMSHomeComponentH5 : CMSComponentH5
{
    _Bool _hiddenContent;
    _Bool _needRefresh;
    double _webViewHeight;
    double _webViewWidth;
    NSString *_webUrl;
}

@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(nonatomic) _Bool hiddenContent; // @synthesize hiddenContent=_hiddenContent;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(nonatomic) double webViewWidth; // @synthesize webViewWidth=_webViewWidth;
@property(nonatomic) double webViewHeight; // @synthesize webViewHeight=_webViewHeight;
- (void).cxx_destruct;
- (id)componentCard:(id)arg1 cardVideoArrayForComponentContentAtIndex:(long long)arg2;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (id)componentCard:(id)arg1 cellIdentifierForComponentContentAtIndex:(long long)arg2;
- (Class)componentCard:(id)arg1 cellClassForComponentContentAtIndex:(long long)arg2;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)display:(id)arg1;
- (void)changeFrame:(id)arg1;
- (void)myEventListener:(id)arg1;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (void)dealloc;

@end

