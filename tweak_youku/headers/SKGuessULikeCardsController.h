//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKCardsController.h"

@class NSMutableArray;

@interface SKGuessULikeCardsController : SKCardsController
{
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)assembleCards;
- (void)refreshWithDataArray:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
