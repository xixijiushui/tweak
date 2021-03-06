//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKCardsController.h"

@class NSMutableArray, SKViewTypeBNewStarShowView, ViewTypeBStarItemModel;

@interface SKViewTypeBNewStarShowCardsController : SKCardsController
{
    ViewTypeBStarItemModel *_person;
    SKViewTypeBNewStarShowView *_starShowView;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) SKViewTypeBNewStarShowView *starShowView; // @synthesize starShowView=_starShowView;
@property(retain, nonatomic) ViewTypeBStarItemModel *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)notifyRequestData;
- (void)assembleCards;
- (void)assembleCardWhenRequestFailed;
- (void)refreshWithDataArray:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

