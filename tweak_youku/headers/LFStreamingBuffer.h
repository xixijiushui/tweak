//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LFStreamBuffer.h"

@class LFLiveDebug, LFStreamingBufferConfiguration, NSMutableArray, NSObject<OS_dispatch_semaphore>, NSString;

@interface LFStreamingBuffer : NSObject <LFStreamBuffer>
{
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _startTimer;
    id <LFStreamingBufferDelegate> _delegate;
    NSMutableArray *_list;
    NSMutableArray *_sendSpeedList;
    long long _timerCallBackCount;
    long long _terribleCount;
    LFLiveDebug *_debugInfo;
    LFStreamingBufferConfiguration *_bufferConfiguration;
}

@property(retain, nonatomic) LFStreamingBufferConfiguration *bufferConfiguration; // @synthesize bufferConfiguration=_bufferConfiguration;
@property(retain, nonatomic) LFLiveDebug *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(nonatomic) long long terribleCount; // @synthesize terribleCount=_terribleCount;
@property(nonatomic) _Bool startTimer; // @synthesize startTimer=_startTimer;
@property(nonatomic) long long timerCallBackCount; // @synthesize timerCallBackCount=_timerCallBackCount;
@property(retain, nonatomic) NSMutableArray *sendSpeedList; // @synthesize sendSpeedList=_sendSpeedList;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(nonatomic) __weak id <LFStreamingBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doControlQuality;
- (void)tick;
- (long long)simpleAdjudicationFineCount:(id)arg1;
- (double)currTimestampLength;
- (id)buffer;
- (void)removeAllVideoObject:(id)arg1;
- (void)removeAllObject;
- (id)popFirstObject;
- (void)appendObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

