//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol XAdEngineViewProtocol <NSObject>
@property(nonatomic) _Bool transparent;
@property(nonatomic) __weak id <XAdAssetDelegate> adAssetDelegate;
- (void)loadURL:(NSURL *)arg1 isLocal:(_Bool)arg2;
@end

