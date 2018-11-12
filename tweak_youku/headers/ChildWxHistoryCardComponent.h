//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChildWxBaseCardComponent.h"

#import "ChildBaseCardViewDelegate.h"

@class ChildBaseHistoryDTO, ChildHistoryCardViewController, NSString;

@interface ChildWxHistoryCardComponent : ChildWxBaseCardComponent <ChildBaseCardViewDelegate>
{
    ChildBaseHistoryDTO *_data;
    ChildHistoryCardViewController *_cardController;
}

@property(retain, nonatomic) ChildHistoryCardViewController *cardController; // @synthesize cardController=_cardController;
@property(retain, nonatomic) ChildBaseHistoryDTO *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)getShowName;
- (id)getShowId;
- (struct CGRect)cardRectForBounds:(struct CGRect)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewDidLoad;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
