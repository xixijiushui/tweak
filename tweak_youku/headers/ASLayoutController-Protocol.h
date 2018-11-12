//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASElementMap, NSHashTable;

@protocol ASLayoutController <NSObject>
- (void)allElementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 displaySet:(id *)arg3 preloadSet:(id *)arg4 map:(ASElementMap *)arg5;
- (NSHashTable *)elementsForScrolling:(long long)arg1 rangeMode:(long long)arg2 rangeType:(long long)arg3 map:(ASElementMap *)arg4;
- (CDStruct_8caa76fc)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_8caa76fc)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
@end
