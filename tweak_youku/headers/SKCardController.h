//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKCardsControllerDelegate.h"

@class NSArray, SKCardContext, SKCardsController, SokuJSONClient;

@interface SKCardController : NSObject <SKCardsControllerDelegate>
{
    _Bool _isExtension;
    _Bool _isFold;
    _Bool _isPrepared;
    _Bool _showCardError;
    _Bool _showCardHeader;
    _Bool _showCardFooter;
    _Bool _showCardSpacing;
    _Bool _canRequestMoreData;
    SokuJSONClient *_jsonClient;
    id <SKCardControllerDelegate> _delegate;
    SKCardsController *_cardsController;
    SKCardController *_extensionController;
    SKCardContext *_cardContext;
    long long _rowCountCache;
    NSArray *_rowHeightsCache;
    long long _extensionRowIndex;
}

@property(nonatomic) _Bool canRequestMoreData; // @synthesize canRequestMoreData=_canRequestMoreData;
@property(nonatomic) long long extensionRowIndex; // @synthesize extensionRowIndex=_extensionRowIndex;
@property(retain, nonatomic) NSArray *rowHeightsCache; // @synthesize rowHeightsCache=_rowHeightsCache;
@property(nonatomic) long long rowCountCache; // @synthesize rowCountCache=_rowCountCache;
@property(nonatomic) _Bool showCardSpacing; // @synthesize showCardSpacing=_showCardSpacing;
@property(nonatomic) _Bool showCardFooter; // @synthesize showCardFooter=_showCardFooter;
@property(nonatomic) _Bool showCardHeader; // @synthesize showCardHeader=_showCardHeader;
@property(nonatomic) _Bool showCardError; // @synthesize showCardError=_showCardError;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(nonatomic) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(retain, nonatomic) SKCardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(retain, nonatomic) SKCardController *extensionController; // @synthesize extensionController=_extensionController;
@property(nonatomic) __weak SKCardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(nonatomic) __weak id <SKCardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SokuJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)requestErrorCardData;
- (_Bool)cardsController:(id)arg1 shouldShowCardErrorWithCode:(long long)arg2;
- (double)cardsController:(id)arg1 heightForCardSpacingInTableView:(id)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)dealloc;
- (id)init;

@end

