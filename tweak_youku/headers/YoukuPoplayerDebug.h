//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class YKPLDebugCenter;

@interface YoukuPoplayerDebug : WVDynamicHandler
{
    YKPLDebugCenter *_debugCenter;
}

+ (void)openConsole:(id)arg1 withWVBridgeContext:(id)arg2;
+ (void)clearCount:(id)arg1 withWVBridgeContext:(id)arg2;
@property(retain, nonatomic) YKPLDebugCenter *debugCenter; // @synthesize debugCenter=_debugCenter;
- (void).cxx_destruct;
- (void)debugStatus:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)rootPath:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)mockTest:(id)arg1 withWVBridgeContext:(id)arg2;

@end
