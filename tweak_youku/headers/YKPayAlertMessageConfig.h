//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface YKPayAlertMessageConfig : NSObject
{
    NSString *_text;
    double _fontSize;
    UIColor *_textColor;
    double _top;
    double _bottom;
}

@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double top; // @synthesize top=_top;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

