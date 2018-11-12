//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMSComponentDelegate.h"

@class CMSComponentContext, CardsController, ComponentCard, NSString, YKJSONClient;

@interface CMSComponent : NSObject <CMSComponentDelegate>
{
    YKJSONClient *_jsonClient;
    CardsController *_cardsController;
    ComponentCard *_componentCard;
    CMSComponentContext *_componentContext;
    long long _firstRowIndex;
    double _cardSpacing;
}

@property(nonatomic) double cardSpacing; // @synthesize cardSpacing=_cardSpacing;
@property(nonatomic) long long firstRowIndex; // @synthesize firstRowIndex=_firstRowIndex;
@property(retain, nonatomic) CMSComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(nonatomic) __weak ComponentCard *componentCard; // @synthesize componentCard=_componentCard;
@property(nonatomic) __weak CardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)componentCard:(id)arg1 reuseCell:(id)arg2 forComponentContentAtIndex:(long long)arg3;
- (double)componentCard:(id)arg1 rowHeightForComponentContentAtIndex:(long long)arg2;
- (long long)componentCard:(id)arg1 rowCountForComponentContentInTableView:(id)arg2;
- (void)didFinishInitConfigurationInComponentCard:(id)arg1;
- (id)nextComponent;
- (id)previousComponent;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
