//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSComponent.h"

#import "DetailComponentDelegate.h"

@class DetailCardsController, NSString;

@interface DetailComponent : CMSComponent <DetailComponentDelegate>
{
}

- (id)currentCardsController;

// Remaining properties
@property(nonatomic) __weak DetailCardsController *cardsController; // @dynamic cardsController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

