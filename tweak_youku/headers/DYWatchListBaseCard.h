//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardController.h"

@class DYWatchListComponent, NSMutableArray;

@interface DYWatchListBaseCard : CardController
{
    DYWatchListComponent *_component;
    NSMutableArray *_exposureArray;
}

@property(retain, nonatomic) NSMutableArray *exposureArray; // @synthesize exposureArray=_exposureArray;
@property(retain, nonatomic) DYWatchListComponent *component; // @synthesize component=_component;
- (void).cxx_destruct;
- (id)trackinfoWithCardVideo;
- (id)scmWithCardVideo;
- (id)spmWithCardVideo:(long long)arg1;
- (id)cardsController:(id)arg1 exposureforCardContentAtIndex:(long long)arg2;

@end
