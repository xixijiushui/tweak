//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKJSONClient;

@interface DYCollectionManager : NSObject
{
    YKJSONClient *_jsonClient;
}

+ (id)sharedManager;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)mergeAction:(CDUnknownBlockType)arg1;
- (void)mergeCollect:(CDUnknownBlockType)arg1;
- (void)removeCollectBatch:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)removeCollect:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)addCollect:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)isCheckCollectBatchStatus:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)isCheckCollectStatus:(id)arg1 finished:(CDUnknownBlockType)arg2;

@end

