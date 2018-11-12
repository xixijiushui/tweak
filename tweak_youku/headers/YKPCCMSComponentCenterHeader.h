//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComponentCard.h"

@class NSMutableArray, NSString, UIImageView, YKJSONClient, YKPCBubbleView, YKPCHeaderTableViewCell;

@interface YKPCCMSComponentCenterHeader : ComponentCard
{
    _Bool isDisplayButton;
    NSString *_signUrl;
    _Bool _isFetchingHeader;
    YKPCHeaderTableViewCell *_currentHeaderCell;
    YKJSONClient *_mtopJsonClient;
    YKPCBubbleView *_bubbleView;
    UIImageView *_backgroundView;
    NSMutableArray *_exposureArray;
}

@property(retain, nonatomic) NSMutableArray *exposureArray; // @synthesize exposureArray=_exposureArray;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) YKPCBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) YKJSONClient *mtopJsonClient; // @synthesize mtopJsonClient=_mtopJsonClient;
@property(nonatomic) _Bool isFetchingHeader; // @synthesize isFetchingHeader=_isFetchingHeader;
@property(retain, nonatomic) YKPCHeaderTableViewCell *currentHeaderCell; // @synthesize currentHeaderCell=_currentHeaderCell;
- (void).cxx_destruct;
- (void)signButtonDidClickedWithUrl:(id)arg1;
- (void)requestSignButtonState;
- (void)showOtherView:(long long)arg1 parameters:(id)arg2;
- (id)cmsPageName;
- (id)cardsController:(id)arg1 exposureforCardContentAtIndex:(long long)arg2;
- (double)cardsController:(id)arg1 heightForCardSpacingInTableView:(id)arg2;
- (void)cardsController:(id)arg1 reuseCell:(id)arg2 forCardContentAtIndex:(long long)arg3;
- (id)cardsController:(id)arg1 cellIdentifierForCardContentAtIndex:(long long)arg2;
- (Class)cardsController:(id)arg1 cellClassForCardContentAtIndex:(long long)arg2;
- (double)cardsController:(id)arg1 rowHeightForCardContentAtIndex:(long long)arg2;
- (long long)cardsController:(id)arg1 rowCountForCardContentInTableView:(id)arg2;
- (void)cardsController:(id)arg1 superViewWillAppear:(id)arg2;
- (void)didFinishInitConfigurationInCardsController:(id)arg1;

@end
