//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface UTExposingItem : NSObject
{
    _Bool _visible;
    NSString *_controlName;
    NSDate *_beginTime;
    NSString *_indexInControlName;
    NSString *_exposingPageName;
}

@property(retain, nonatomic) NSString *exposingPageName; // @synthesize exposingPageName=_exposingPageName;
@property(retain, nonatomic) NSString *indexInControlName; // @synthesize indexInControlName=_indexInControlName;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSString *controlName; // @synthesize controlName=_controlName;
- (void).cxx_destruct;

@end

