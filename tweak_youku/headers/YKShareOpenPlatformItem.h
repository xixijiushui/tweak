//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKShareOpenPlatformItem : NSObject
{
    int _openPlatformId;
    NSString *_openPlatformName;
    NSString *_iconImgName;
    NSString *_unInstallIcon;
}

+ (id)supportingOpenPlatformIdsforOutPutType:(int)arg1;
+ (id)nameOfOpenPlatform:(int)arg1;
+ (id)openPlatformItemWithId:(int)arg1;
@property(copy, nonatomic) NSString *unInstallIcon; // @synthesize unInstallIcon=_unInstallIcon;
@property(copy, nonatomic) NSString *iconImgName; // @synthesize iconImgName=_iconImgName;
@property(copy, nonatomic) NSString *openPlatformName; // @synthesize openPlatformName=_openPlatformName;
@property(nonatomic) int openPlatformId; // @synthesize openPlatformId=_openPlatformId;
- (void).cxx_destruct;

@end

