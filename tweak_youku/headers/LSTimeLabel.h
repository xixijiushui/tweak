//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSDateFormatter, NSString, NSTimer;

@interface LSTimeLabel : UILabel
{
    CDUnknownBlockType _block;
    NSString *_leftText;
    CDUnknownBlockType _appointBlock;
    CDUnknownBlockType _countDownFireBlock;
    NSTimer *_timer;
    NSDateFormatter *_dateFormatter;
    long long _countDownSeconds;
}

@property(nonatomic) long long countDownSeconds; // @synthesize countDownSeconds=_countDownSeconds;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType countDownFireBlock; // @synthesize countDownFireBlock=_countDownFireBlock;
@property(copy, nonatomic) CDUnknownBlockType appointBlock; // @synthesize appointBlock=_appointBlock;
@property(copy, nonatomic) NSString *leftText; // @synthesize leftText=_leftText;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)onTimerFire;
- (void)beginCountDown;
- (void)updateLabel;
- (void)setCountDownTime:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

