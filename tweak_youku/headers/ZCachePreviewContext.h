//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ZCachePreviewContext : NSObject
{
    NSString *_appName;
    CDUnknownBlockType _callback;
}

+ (_Bool)previewApp:(id)arg1 withProgressCallback:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)updateFinished;
- (void)reportMessage:(id)arg1;
- (void)update;
- (id)baseUrl;
- (id)initWithAppName:(id)arg1 withCallback:(CDUnknownBlockType)arg2;

@end

