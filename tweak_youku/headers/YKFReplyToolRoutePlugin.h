//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFReplyToolBasePlugin.h"

#import "YKFReplyToolPluginRoutableProtocol.h"

@class RACCommand;

@interface YKFReplyToolRoutePlugin : YKFReplyToolBasePlugin <YKFReplyToolPluginRoutableProtocol>
{
    RACCommand *_routeCommand;
}

@property(retain, nonatomic) RACCommand *routeCommand; // @synthesize routeCommand=_routeCommand;
- (void).cxx_destruct;

@end

