//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@class OPPlayerUpsHelper;

@interface OPPlayerUpsPlugin : OPPlugin
{
    OPPlayerUpsHelper *_upsHelper;
}

@property(retain, nonatomic) OPPlayerUpsHelper *upsHelper; // @synthesize upsHelper=_upsHelper;
- (void).cxx_destruct;
- (void)onReceived:(id)arg1;
- (void)onDeInit;
- (void)onRun;
- (void)onInit;

@end

