//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKJSONClient;

@interface YKSTFeedApiManager : NSObject
{
    YKJSONClient *_jsonClient;
}

+ (id)manager;
@property(retain, nonatomic) YKJSONClient *jsonClient; // @synthesize jsonClient=_jsonClient;
- (void).cxx_destruct;
- (void)feedActionWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)feedbackActionWithID:(id)arg1 targetType:(id)arg2 sourceFeedType:(id)arg3 negtiveReasons:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

