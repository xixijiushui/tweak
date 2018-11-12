//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMSCardVideo.h"

@class NSDictionary, NSString;

@interface YKCMSPersonalCenterCardVideo : CMSCardVideo
{
    _Bool _loginOnJump;
    _Bool _bubbleSwitch;
    _Bool _hasCornerDigit;
    _Bool _redPoint;
    _Bool _hasSubscribed;
    NSDictionary *_cmsInfo;
    NSString *_cornerDigit;
    NSString *_ratioLR;
    NSString *_defaultImg;
    NSString *_defaultGifImg;
    NSString *_successImg;
    NSString *_successGifImg;
    NSString *_subSuccessJumpTarget;
    NSString *_subFailJumpTarget;
    NSDictionary *_subLiveParams;
}

@property(retain, nonatomic) NSDictionary *subLiveParams; // @synthesize subLiveParams=_subLiveParams;
@property(copy, nonatomic) NSString *subFailJumpTarget; // @synthesize subFailJumpTarget=_subFailJumpTarget;
@property(copy, nonatomic) NSString *subSuccessJumpTarget; // @synthesize subSuccessJumpTarget=_subSuccessJumpTarget;
@property(copy, nonatomic) NSString *successGifImg; // @synthesize successGifImg=_successGifImg;
@property(copy, nonatomic) NSString *successImg; // @synthesize successImg=_successImg;
@property(copy, nonatomic) NSString *defaultGifImg; // @synthesize defaultGifImg=_defaultGifImg;
@property(copy, nonatomic) NSString *defaultImg; // @synthesize defaultImg=_defaultImg;
@property(nonatomic) _Bool hasSubscribed; // @synthesize hasSubscribed=_hasSubscribed;
@property(copy, nonatomic) NSString *ratioLR; // @synthesize ratioLR=_ratioLR;
@property(nonatomic) _Bool redPoint; // @synthesize redPoint=_redPoint;
@property(nonatomic) _Bool hasCornerDigit; // @synthesize hasCornerDigit=_hasCornerDigit;
@property(nonatomic) _Bool bubbleSwitch; // @synthesize bubbleSwitch=_bubbleSwitch;
@property(copy, nonatomic) NSString *cornerDigit; // @synthesize cornerDigit=_cornerDigit;
@property(nonatomic) _Bool loginOnJump; // @synthesize loginOnJump=_loginOnJump;
@property(copy, nonatomic) NSDictionary *cmsInfo; // @synthesize cmsInfo=_cmsInfo;
- (void).cxx_destruct;
- (_Bool)setupWithCMSInfo:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *liveId;

@end

