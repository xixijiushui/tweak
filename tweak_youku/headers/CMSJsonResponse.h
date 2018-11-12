//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMSComponentContext, CMSJsonRequest, CMSPageItem, NSArray, NSDictionary;

@interface CMSJsonResponse : NSObject
{
    _Bool _isCache;
    CMSJsonRequest *_request;
    NSDictionary *_json;
    CMSPageItem *_channel;
    CMSPageItem *_requestPageItem;
    long long _pageSelectIndex;
    NSArray *_pageItems;
    NSArray *_cardContexts;
    NSArray *_componentContexts;
    NSArray *_itemContexts;
    CMSComponentContext *_componentContext;
}

@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) CMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) NSArray *itemContexts; // @synthesize itemContexts=_itemContexts;
@property(retain, nonatomic) NSArray *componentContexts; // @synthesize componentContexts=_componentContexts;
@property(retain, nonatomic) NSArray *cardContexts; // @synthesize cardContexts=_cardContexts;
@property(retain, nonatomic) NSArray *pageItems; // @synthesize pageItems=_pageItems;
@property(nonatomic) long long pageSelectIndex; // @synthesize pageSelectIndex=_pageSelectIndex;
@property(retain, nonatomic) CMSPageItem *requestPageItem; // @synthesize requestPageItem=_requestPageItem;
@property(retain, nonatomic) CMSPageItem *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(retain, nonatomic) CMSJsonRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isRequestPageItem:(id)arg1;
- (void)processResponse;

@end
