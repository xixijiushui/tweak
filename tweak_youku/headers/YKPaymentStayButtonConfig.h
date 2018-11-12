//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSValue;

@interface YKPaymentStayButtonConfig : NSObject
{
    NSString *_title;
    double _titleFontSize;
    NSString *_titleColor;
    CDUnknownBlockType _actionHandler;
    NSValue *_rectValue;
    long long _style;
}

+ (id)createWithTitle:(id)arg1 titleFontSize:(double)arg2 titleColor:(id)arg3 actionHandler:(CDUnknownBlockType)arg4 style:(long long)arg5;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSValue *rectValue; // @synthesize rectValue=_rectValue;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;

@end

