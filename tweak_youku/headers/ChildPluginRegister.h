//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OPPlayerAPI;

@interface ChildPluginRegister : NSObject
{
    OPPlayerAPI *_playInterface;
}

@property(retain, nonatomic) OPPlayerAPI *playInterface; // @synthesize playInterface=_playInterface;
- (void).cxx_destruct;
- (void)registerPlugin:(id)arg1 class:(Class)arg2;
- (void)registerPlugin:(id)arg1 class:(Class)arg2 layer:(long long)arg3;
- (id)plugin:(id)arg1;
- (id)initWithApi:(id)arg1;

@end

