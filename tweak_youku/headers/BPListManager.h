//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BPList, Card, DetailCardsController, NSMutableArray, NSMutableDictionary, NSString;

@interface BPListManager : NSObject
{
    _Bool _allowForbidUpdateNextCard;
    BPList *_playingList;
    BPList *_previousList;
    BPList *_nextList;
    Card *_nextCard;
    BPList *_nextVideoList;
    NSString *_featurePlayVid;
    DetailCardsController *_cardsController;
    NSMutableArray *_listArray;
    NSMutableDictionary *_listDic;
}

@property(retain, nonatomic) NSMutableDictionary *listDic; // @synthesize listDic=_listDic;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(nonatomic) _Bool allowForbidUpdateNextCard; // @synthesize allowForbidUpdateNextCard=_allowForbidUpdateNextCard;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
@property(copy, nonatomic) NSString *featurePlayVid; // @synthesize featurePlayVid=_featurePlayVid;
@property(retain, nonatomic) BPList *nextVideoList; // @synthesize nextVideoList=_nextVideoList;
@property(readonly, nonatomic) Card *nextCard; // @synthesize nextCard=_nextCard;
@property(retain, nonatomic) BPList *nextList; // @synthesize nextList=_nextList;
@property(retain, nonatomic) BPList *previousList; // @synthesize previousList=_previousList;
@property(retain, nonatomic) BPList *playingList; // @synthesize playingList=_playingList;
- (void).cxx_destruct;
- (id)getAllList;
- (void)setNextCard:(id)arg1;
- (void)playerVideoChangeUpdateBpList;
- (id)queryNextVideoInBPList:(id)arg1;
- (id)queryListWithCard:(id)arg1;
- (id)queryNextListWithBPList:(id)arg1;
- (id)nextCardArrayFrom:(long long)arg1 to:(long long)arg2;
- (void)removeAllList;
- (_Bool)updateBPList:(id)arg1;
- (_Bool)isPriorityHitVIdeo:(id)arg1;
- (_Bool)appendBPList:(id)arg1;
- (_Bool)existBPList:(id)arg1;
- (id)init;
- (void)dealloc;

@end

