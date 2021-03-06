//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSMessageCommandDelegate.h"
#import "LSParser.h"

@class NSString;

@interface LSWatchDownCommand : NSObject <LSParser, LSMessageCommandDelegate>
{
    long long _watchId;
    long long _liveid;
    long long _sceneId;
    NSString *_streamName;
}

@property(retain, nonatomic) NSString *streamName; // @synthesize streamName=_streamName;
@property(nonatomic) long long sceneId; // @synthesize sceneId=_sceneId;
@property(nonatomic) long long liveid; // @synthesize liveid=_liveid;
@property(nonatomic) long long watchId; // @synthesize watchId=_watchId;
- (void).cxx_destruct;
- (void)postCommand;
- (void)parseObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long rand;
@property(readonly) Class superclass;

@end

