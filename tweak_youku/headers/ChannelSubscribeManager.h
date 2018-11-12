//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ChannelSubscribeManager : NSObject
{
    NSMutableArray *_videos;
    id <ChannelSubscribeManagerDelegate> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <ChannelSubscribeManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *videos; // @synthesize videos=_videos;
- (void).cxx_destruct;
- (void)cancel;
- (void)getReleaseInfo:(CDUnknownBlockType)arg1;
- (void)subscrie:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userLoginStatusChange:(id)arg1;
- (id)init;

@end
