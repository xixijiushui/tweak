//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HYUserServiceContext, NSDictionary, NSString;

@interface HYBaseUserRequest : NSObject
{
    NSString *_serviceVersion;
    NSString *_randomState;
    HYUserServiceContext *_serviceContext;
    NSDictionary *_analyticsData;
    NSString *_urlPath;
    NSString *_mtopApiName;
}

@property(retain, nonatomic) NSString *mtopApiName; // @synthesize mtopApiName=_mtopApiName;
@property(retain, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(retain, nonatomic) NSDictionary *analyticsData; // @synthesize analyticsData=_analyticsData;
@property(retain, nonatomic) HYUserServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(retain, nonatomic) NSString *randomState; // @synthesize randomState=_randomState;
@property(retain, nonatomic) NSString *serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)toJsonDict;
- (id)init;

@end

