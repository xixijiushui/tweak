//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YKFPostPublishAudioItem.h"

@class NSString;

@interface YKFPostPublishAudioItem : NSObject <YKFPostPublishAudioItem>
{
    NSString *_audioUrl;
    long long _duration;
}

@property(nonatomic, getter=ykf_duration) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic, getter=ykf_audioUrl) NSString *audioUrl; // @synthesize audioUrl=_audioUrl;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

