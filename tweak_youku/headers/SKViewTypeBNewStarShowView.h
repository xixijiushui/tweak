//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKViewTypeBNewStarShowCardsController, SearchVideoModel, SearchViewController, SokuJSONClient, ViewTypeBStarItemModel;

@interface SKViewTypeBNewStarShowView : UIView
{
    ViewTypeBStarItemModel *_person;
    SearchViewController *_sController;
    SKViewTypeBNewStarShowCardsController *_starCards;
    SokuJSONClient *_jsonClient;
    SearchVideoModel *_personSearchModel;
    double _totalheight;
    UIView *_tapView;
}

@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
@property(nonatomic) double totalheight; // @synthesize totalheight=_totalheight;
@property(retain, nonatomic) SearchVideoModel *personSearchModel; // @synthesize personSearchModel=_personSearchModel;
@property(retain, nonatomic) SokuJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
@property(retain, nonatomic) SKViewTypeBNewStarShowCardsController *starCards; // @synthesize starCards=_starCards;
@property(nonatomic) __weak SearchViewController *sController; // @synthesize sController=_sController;
@property(retain, nonatomic) ViewTypeBStarItemModel *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)calcScreenNumberOfModel:(id)arg1;
- (void)setHeightOfModels:(id)arg1;
- (void)tableViewAnimate;
- (void)showPersonTableView;
- (void)showErrorPersonTableView;
- (void)loadDatas;
- (void)reLoadDatas;
- (void)hidedown:(_Bool)arg1;
- (void)hidedown;
- (void)showup;
- (void)show;
- (id)init;

@end

