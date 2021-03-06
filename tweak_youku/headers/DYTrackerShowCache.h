//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CardContext, NSString;

@interface DYTrackerShowCache : NSObject
{
    _Bool _isRequestDownloadSucess;
    _Bool _isRequestCacheSucess;
    NSString *_showID;
    CardContext *_context;
    long long _cacheStatus;
    long long _downLoadStatus;
}

@property(nonatomic) long long downLoadStatus; // @synthesize downLoadStatus=_downLoadStatus;
@property(nonatomic) long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(nonatomic) _Bool isRequestCacheSucess; // @synthesize isRequestCacheSucess=_isRequestCacheSucess;
@property(nonatomic) _Bool isRequestDownloadSucess; // @synthesize isRequestDownloadSucess=_isRequestDownloadSucess;
@property(retain, nonatomic) CardContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *showID; // @synthesize showID=_showID;
- (void).cxx_destruct;

@end

