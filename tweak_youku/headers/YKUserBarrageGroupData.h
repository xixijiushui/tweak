//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSDiscardableContent.h"

@class NSMutableDictionary;

@interface YKUserBarrageGroupData : NSObject <NSDiscardableContent>
{
    _Bool _isLoadedFromBackend;
    _Bool _contentDiscarded;
    unsigned long long _minuteAt;
    unsigned long long _size;
    NSMutableDictionary *_barrageDataMap;
}

@property(nonatomic, getter=isContentDiscarded) _Bool contentDiscarded; // @synthesize contentDiscarded=_contentDiscarded;
@property(retain, nonatomic) NSMutableDictionary *barrageDataMap; // @synthesize barrageDataMap=_barrageDataMap;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long minuteAt; // @synthesize minuteAt=_minuteAt;
@property(nonatomic) _Bool isLoadedFromBackend; // @synthesize isLoadedFromBackend=_isLoadedFromBackend;
- (void).cxx_destruct;
- (unsigned long long)totalBarrageCount;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (_Bool)isEmpty;
- (id)barragesOnSecond:(unsigned long long)arg1 forType:(unsigned long long)arg2;
- (id)barragesDictOnSecond:(unsigned long long)arg1;
- (void)addBarrage:(id)arg1;
- (id)initWithMinuteAt:(unsigned long long)arg1;

@end
