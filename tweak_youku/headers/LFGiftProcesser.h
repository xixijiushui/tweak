//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFMessageProcess.h"

@interface LFGiftProcesser : LFMessageProcess
{
    CDUnknownBlockType _processMessageBlock;
}

@property(copy, nonatomic) CDUnknownBlockType processMessageBlock; // @synthesize processMessageBlock=_processMessageBlock;
- (void).cxx_destruct;
- (void)didRecieveMessage:(id)arg1 type:(id)arg2;
- (id)init;

@end
