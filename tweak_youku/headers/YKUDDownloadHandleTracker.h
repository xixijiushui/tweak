//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKUDBasicDownloadTracker.h"

@interface YKUDDownloadHandleTracker : YKUDBasicDownloadTracker
{
    long long _checkCount;
}

@property long long checkCount; // @synthesize checkCount=_checkCount;
- (void)checkFreeSpace;
- (_Bool)onComplete;
- (_Bool)onCompleteOfSegment:(id)arg1;
- (_Bool)onError:(id)arg1 ofSegment:(id)arg2;
- (id)initWithVideo:(id)arg1 andScheduler:(id)arg2;

@end

