//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class NSMutableDictionary;

@interface OPVVPlugin : OPPlugin
{
    NSMutableDictionary *_vvStartDict;
    NSMutableDictionary *_vvEndDict;
    NSMutableDictionary *_linkParamsCache;
}

- (void).cxx_destruct;
- (void)updateLinkParams;
- (id)queryPlayerParamsWithEventType:(id)arg1 queryDict:(id)arg2 sourceDict:(id)arg3;
- (id)parseDict:(id)arg1 forKey:(id)arg2 extend:(_Bool)arg3 whiteList:(id)arg4 blackList:(id)arg5;
- (id)queryDictFrom:(id)arg1 forKey:(id)arg2 nullAble:(_Bool)arg3;
- (void)sendVVEnd;
- (void)sendVVStart;
- (void)sendVVEndIfNeeded:(id)arg1;
- (void)sendVVStartIfNeeded:(id)arg1;
- (void)receivePlayVideoDidChangeEvent:(id)arg1;
- (void)receiveEnginePlayerEvent:(id)arg1;
- (void)onRun;
- (void)onDeInit;
- (void)onInit;

@end

