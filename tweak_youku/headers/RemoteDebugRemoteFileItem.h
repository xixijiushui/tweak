//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RemoteDebugLocalFileItem.h"

@class NSDictionary, NSString;

@interface RemoteDebugRemoteFileItem : RemoteDebugLocalFileItem
{
    NSString *_storageType;
    NSDictionary *_storageInfo;
}

@property(copy, nonatomic) NSDictionary *storageInfo; // @synthesize storageInfo=_storageInfo;
@property(copy, nonatomic) NSString *storageType; // @synthesize storageType=_storageType;
- (void).cxx_destruct;

@end
