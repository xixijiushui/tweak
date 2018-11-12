//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DYKURLRouterHandler.h"

@class NSString;

@interface SokuManager : NSObject <DYKURLRouterHandler>
{
    _Bool _isDebug;
    NSString *_searchHotWord;
    NSString *_sourceFrom;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *sourceFrom; // @synthesize sourceFrom=_sourceFrom;
@property(copy, nonatomic) NSString *searchHotWord; // @synthesize searchHotWord=_searchHotWord;
@property(nonatomic) _Bool isDebug; // @synthesize isDebug=_isDebug;
- (void).cxx_destruct;
- (id)urlRouterHandlerSokuDeal:(id)arg1;
- (id)urlRouterHandler:(id)arg1;
- (void)initSpotlightSearch;
- (id)getDetailPageWithParameters:(id)arg1;
- (void)jump2CelebrityDetailPage:(id)arg1 selectIndex:(long long)arg2 tabsTitles:(id)arg3 viewcontroller:(id)arg4;
- (id)getSearchSourceFrom;
- (id)getHotSearchWord;
- (void)setHotSearchWord:(id)arg1;
- (id)getSearchControllerWithSearchBtnOriginFrame:(struct CGRect)arg1 searchKeyWord:(id)arg2;
- (id)getSearchControllerWithSearchKeyWord:(id)arg1 callerType:(long long)arg2;
- (void)searchWithSearchController:(id)arg1 keyword:(id)arg2 kref:(long long)arg3;
- (id)getSearchControllerWithSearchKeyWord:(id)arg1 kref:(long long)arg2;
- (id)getSearchControllerWithSearchBtnOriginFrameFrom3DTouch:(struct CGRect)arg1;
- (id)getSearchControllerWithSearchBtnOriginFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

