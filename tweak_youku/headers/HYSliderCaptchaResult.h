//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HYChallengeResult.h"

@class NSString;

@interface HYSliderCaptchaResult : HYChallengeResult
{
    NSString *_sessionId;
}

+ (id)captchaResultWithSessionId:(id)arg1;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)toJsonDict;

@end

