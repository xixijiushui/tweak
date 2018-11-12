//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol LFSocketIOTransport <NSObject>
@property(nonatomic) __weak id <LFSocketIOTransportDelegate> delegate;
- (void)send:(NSString *)arg1;
- (_Bool)isReady;
- (void)close;
- (void)open:(NSArray *)arg1;
- (id)initWithDelegate:(id <LFSocketIOTransportDelegate>)arg1;
@end

