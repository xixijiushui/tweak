//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFSocketConnection;

@interface LFMicOrderConnection : NSObject
{
    LFSocketConnection *_connection;
}

@property(retain, nonatomic) LFSocketConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)cancelAttentionById:(id)arg1 completion:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)sendAttentionById:(id)arg1 roomId:(id)arg2 completion:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)getPullMicOrder:(id)arg1 completion:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

@end

