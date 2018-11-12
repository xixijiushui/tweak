//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMSCardProtocol.h"
#import "CardsControllerDelegate.h"

@class CardContainerViewLayoutItem, CardContext, CardsController, NSArray, NSMutableArray, YKJSONClient;

@interface CardController : NSObject <CMSCardProtocol, CardsControllerDelegate>
{
    _Bool _isFold;
    _Bool _isPrepared;
    _Bool _showCardError;
    _Bool _showCardHeader;
    _Bool _showCardFooter;
    _Bool _showCardSpacing;
    _Bool _canRequestMoreData;
    _Bool _headerExposed;
    _Bool _footerExposed;
    _Bool _isExtension;
    YKJSONClient *_jsonClient;
    id <CardControllerDelegate> _delegate;
    CardsController *_cardsController;
    CardContext *_cardContext;
    CardContainerViewLayoutItem *_layoutItem;
    NSMutableArray *_exposedArray;
    long long _rowCountCache;
    NSArray *_rowHeightsCache;
    long long _extensionRowIndex;
    id _extensionController;
    id _imageClient;
}

@property(retain, nonatomic) id imageClient; // @synthesize imageClient=_imageClient;
@property(retain, nonatomic) id extensionController; // @synthesize extensionController=_extensionController;
@property(nonatomic) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(nonatomic) long long extensionRowIndex; // @synthesize extensionRowIndex=_extensionRowIndex;
@property(retain, nonatomic) NSArray *rowHeightsCache; // @synthesize rowHeightsCache=_rowHeightsCache;
@property(nonatomic) long long rowCountCache; // @synthesize rowCountCache=_rowCountCache;
@property(nonatomic) _Bool footerExposed; // @synthesize footerExposed=_footerExposed;
@property(nonatomic) _Bool headerExposed; // @synthesize headerExposed=_headerExposed;
@property(retain, nonatomic) NSMutableArray *exposedArray; // @synthesize exposedArray=_exposedArray;
@property(nonatomic) _Bool canRequestMoreData; // @synthesize canRequestMoreData=_canRequestMoreData;
@property(nonatomic) _Bool showCardSpacing; // @synthesize showCardSpacing=_showCardSpacing;
@property(nonatomic) _Bool showCardFooter; // @synthesize showCardFooter=_showCardFooter;
@property(nonatomic) _Bool showCardHeader; // @synthesize showCardHeader=_showCardHeader;
@property(nonatomic) _Bool showCardError; // @synthesize showCardError=_showCardError;
@property(retain, nonatomic) CardContainerViewLayoutItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) _Bool isFold; // @synthesize isFold=_isFold;
@property(retain, nonatomic) CardContext *cardContext; // @synthesize cardContext=_cardContext;
@property(nonatomic) __weak CardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(nonatomic) __weak id <CardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (_Bool)isCardFooterAtIndexPath:(id)arg1;
- (_Bool)isCardHeaderAtIndexPath:(id)arg1;
- (_Bool)isCardSpacingAtIndexPath:(id)arg1;
- (void)setupLayoutItem;
- (_Bool)shouldExposeWithIndex:(long long)arg1;
- (void)requestErrorCardData;
- (id)cardsController:(id)arg1 reuseIdentifierForCardSpacingInContainerView:(id)arg2;
- (_Bool)cardsController:(id)arg1 shouldShowCardErrorWithCode:(long long)arg2;
- (double)cardsController:(id)arg1 heightForCardSpacingInTableView:(id)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (id)init;
- (void)dealloc;

@end

