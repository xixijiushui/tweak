//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol AliShortMusicProtocol <NSObject>
- (_Bool)openUrlAction:(NSString *)arg1 params:(NSDictionary *)arg2;
- (NSDictionary *)getMusicInfo:(NSString *)arg1;
- (id)createMusicController:(id)arg1 type:(long long)arg2 musicId:(NSString *)arg3 params:(NSDictionary *)arg4 onUseMusic:(void (^)(NSDictionary *, long long))arg5 onUselocalVideo:(void (^)(NSString *, NSError *))arg6;
- (id)createMusicController:(id)arg1 type:(long long)arg2 musicId:(NSString *)arg3 onUseMusic:(void (^)(NSDictionary *, long long))arg4 onUselocalVideo:(void (^)(NSString *, NSError *))arg5;
@end

