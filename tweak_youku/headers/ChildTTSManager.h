//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NlsRecognizerDelegate.h"

@class NLSPlayAudio, NSString, NlsRecognizer;

@interface ChildTTSManager : NSObject <NlsRecognizerDelegate>
{
    _Bool _isAppForeground;
    NlsRecognizer *_recognizer;
    NLSPlayAudio *_audioPlayer;
    CDUnknownBlockType _blockSucess;
    CDUnknownBlockType _blockFail;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isAppForeground; // @synthesize isAppForeground=_isAppForeground;
@property(copy, nonatomic) CDUnknownBlockType blockFail; // @synthesize blockFail=_blockFail;
@property(copy, nonatomic) CDUnknownBlockType blockSucess; // @synthesize blockSucess=_blockSucess;
@property(retain, nonatomic) NLSPlayAudio *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) NlsRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)stopTTS;
- (void)recognizerDidStopRecieveTTSData:(id)arg1;
- (void)recognizerDidStartRecieveTTSData:(id)arg1;
- (void)recognizer:(id)arg1 didCompleteTTSWithVoiceData:(id)arg2 error:(id)arg3;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)startTTS:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (_Bool)isTTSAvaiable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

