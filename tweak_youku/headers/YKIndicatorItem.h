//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface YKIndicatorItem : NSObject
{
    NSString *_title;
    UIColor *_color;
    UIFont *_font;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 color:(id)arg2 font:(id)arg3;

@end

