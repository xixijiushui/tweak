//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIActivityIndicatorView;

@interface PTSubscribeButton : UIButton
{
    long long _subscribeState;
    NSString *_textChange;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSString *textChange; // @synthesize textChange=_textChange;
@property(nonatomic) long long subscribeState; // @synthesize subscribeState=_subscribeState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
