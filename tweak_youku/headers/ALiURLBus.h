//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ALiURLBus : NSObject
{
    NSMutableArray *_handleList;
    NSMutableArray *_filterList;
}

+ (id)defaultBus;
@property(retain, nonatomic) NSMutableArray *filterList; // @synthesize filterList=_filterList;
@property(retain, nonatomic) NSMutableArray *handleList; // @synthesize handleList=_handleList;
- (void).cxx_destruct;
- (_Bool)handleOpenURL:(id)arg1;
- (id)processURL:(id)arg1 context:(id)arg2;
- (_Bool)matchUrl:(id)arg1 match:(id)arg2;
- (id)filterURL:(id)arg1 context:(id)arg2;
- (_Bool)handleURL:(id)arg1 context:(id)arg2;
- (void)removeFilter:(id)arg1;
- (void)addFilter:(id)arg1;
- (void)removeHandle:(id)arg1;
- (void)addHandle:(id)arg1;
- (id)init;

@end
