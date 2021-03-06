//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFBaseTableViewController.h"

@class NSString, TTFSignInCardViewModel;

@interface TTFSignInCardViewController : YKFBaseTableViewController
{
    _Bool _isDateSelected;
    _Bool _goBackDirectly;
    long long _cardId;
    TTFSignInCardViewModel *_viewModel;
    NSString *_cardImageUrl;
    NSString *_cardMessage;
    long long _selectedTime;
}

@property(nonatomic) _Bool goBackDirectly; // @synthesize goBackDirectly=_goBackDirectly;
@property(nonatomic) long long selectedTime; // @synthesize selectedTime=_selectedTime;
@property(nonatomic) _Bool isDateSelected; // @synthesize isDateSelected=_isDateSelected;
@property(retain, nonatomic) NSString *cardMessage; // @synthesize cardMessage=_cardMessage;
@property(retain, nonatomic) NSString *cardImageUrl; // @synthesize cardImageUrl=_cardImageUrl;
@property(retain, nonatomic) TTFSignInCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (id)utUpdateSpmPageName;
- (id)utUpdatePageName;
- (void)setId:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isValidTime:(double)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)updateImage:(id)arg1;
- (void)changeCardImage;
- (void)publishPressed;
- (_Bool)canPublish;
- (id)commitRightBarButtonItem;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)goBack:(id)arg1;
- (void)requestApi;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

