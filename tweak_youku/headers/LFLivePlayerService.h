//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LFLiveMicService, LFLivePlayerModel, LFMessageDispatcher;

@interface LFLivePlayerService : NSObject
{
    CDUnknownBlockType _errorNotifyBlock;
    CDUnknownBlockType _playerModelChangedBlock;
    CDUnknownBlockType _urlRequestStartBlock;
    CDUnknownBlockType _urlRequestStopBlock;
    LFMessageDispatcher *_dispatcher;
    LFLivePlayerModel *_playerModel;
    LFLiveMicService *_micService;
}

@property(retain, nonatomic) LFLiveMicService *micService; // @synthesize micService=_micService;
@property(retain, nonatomic) LFLivePlayerModel *playerModel; // @synthesize playerModel=_playerModel;
@property(retain, nonatomic) LFMessageDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(copy, nonatomic) CDUnknownBlockType urlRequestStopBlock; // @synthesize urlRequestStopBlock=_urlRequestStopBlock;
@property(copy, nonatomic) CDUnknownBlockType urlRequestStartBlock; // @synthesize urlRequestStartBlock=_urlRequestStartBlock;
@property(copy, nonatomic) CDUnknownBlockType playerModelChangedBlock; // @synthesize playerModelChangedBlock=_playerModelChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType errorNotifyBlock; // @synthesize errorNotifyBlock=_errorNotifyBlock;
- (void).cxx_destruct;
- (void)getMicInfo:(id)arg1;
- (void)dealloc;
- (id)initWithDispatcher:(id)arg1;

@end

