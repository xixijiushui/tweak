//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DetailCardsController, NSArray, NSString, UITableView;

@interface DetailEposideChoiceView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isAnimateing;
    CDUnknownBlockType _selectChangedBlock;
    DetailCardsController *_cardsController;
    UITableView *_myTableView;
    NSArray *_dataArray;
    long long _selectIndex;
}

@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) _Bool isAnimateing; // @synthesize isAnimateing=_isAnimateing;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(copy, nonatomic) CDUnknownBlockType selectChangedBlock; // @synthesize selectChangedBlock=_selectChangedBlock;
- (void).cxx_destruct;
- (void)exposeStatics;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)initWithData:(id)arg1 selectIndex:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

