//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIView;

@interface WVToastInfo : NSObject
{
    int _y;
    NSString *_text;
    UIView *_view;
    double _time;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) int y; // @synthesize y=_y;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 toView:(id)arg2 displaytime:(double)arg3 postion:(int)arg4 withCallback:(CDUnknownBlockType)arg5;

@end

