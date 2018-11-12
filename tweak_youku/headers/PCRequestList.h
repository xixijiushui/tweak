//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PCRequestList : NSObject
{
    NSMutableDictionary *_layerRequestList;
    NSMutableDictionary *_popRequestList;
}

@property(retain, nonatomic) NSMutableDictionary *popRequestList; // @synthesize popRequestList=_popRequestList;
@property(retain, nonatomic) NSMutableDictionary *layerRequestList; // @synthesize layerRequestList=_layerRequestList;
- (void).cxx_destruct;
- (id)popRequestWithLayerID:(id)arg1;
- (id)layerIDWithPopRequest:(id)arg1;
- (id)layerRequestWithPopRequest:(id)arg1;
- (_Bool)containsLayerID:(id)arg1;
- (void)removeForLayerID:(id)arg1;
- (void)addLayerRequest:(id)arg1 popRequest:(id)arg2 layerID:(id)arg3;

@end
