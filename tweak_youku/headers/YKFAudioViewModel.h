//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface YKFAudioViewModel : NSObject
{
    NSString *_audioURL;
    long long _duration;
    unsigned long long _audioIdentifier;
}

@property(nonatomic) unsigned long long audioIdentifier; // @synthesize audioIdentifier=_audioIdentifier;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *audioURL; // @synthesize audioURL=_audioURL;
- (void).cxx_destruct;

@end

