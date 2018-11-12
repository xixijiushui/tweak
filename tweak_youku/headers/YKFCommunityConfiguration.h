//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFCommunitybaseConfigServiceGetConfigAPI;

@interface YKFCommunityConfiguration : NSObject
{
    _Bool _configFetched;
    _Bool _videoUploadEnable;
    YKFCommunitybaseConfigServiceGetConfigAPI *_getConfigApi;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool videoUploadEnable; // @synthesize videoUploadEnable=_videoUploadEnable;
@property(nonatomic) _Bool configFetched; // @synthesize configFetched=_configFetched;
@property(retain, nonatomic) YKFCommunitybaseConfigServiceGetConfigAPI *getConfigApi; // @synthesize getConfigApi=_getConfigApi;
- (void).cxx_destruct;
- (void)fetchConfigComplete:(CDUnknownBlockType)arg1;
- (void)fetchConfig;
- (_Bool)isVideoUploadEnable;
- (void)setupConfigObserve;
- (id)init;

@end

