//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface HYCaptchaObject : NSObject
{
    NSString *_captchaKey;
    UIImage *_captchaImage;
    double _validDuration;
}

+ (id)buildFromJsonDict:(id)arg1;
@property(nonatomic) double validDuration; // @synthesize validDuration=_validDuration;
@property(retain, nonatomic) UIImage *captchaImage; // @synthesize captchaImage=_captchaImage;
@property(retain, nonatomic) NSString *captchaKey; // @synthesize captchaKey=_captchaKey;
- (void).cxx_destruct;

@end

