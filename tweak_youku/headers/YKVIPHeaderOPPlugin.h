//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPPlugin.h"

@interface YKVIPHeaderOPPlugin : OPPlugin
{
    id <YKVIPHeaderOPPluginDelegate> _delegate;
}

+ (id)params;
@property(nonatomic) __weak id <YKVIPHeaderOPPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onReceived:(id)arg1;
- (void)onRun;

@end

