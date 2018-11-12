//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKTaskReachBizModel.h"

@class NSString, UIColor, YKTaskReachButtonModel;

@interface YKTaskReachToastModel : YKTaskReachBizModel
{
    NSString *_title;
    UIColor *_bg_Color;
    NSString *_bg_imageUrl;
    NSString *_bg_openUri;
    NSString *_iconUrl;
    double _duration;
    NSString *_gravity;
    double _width;
    double _height;
    double _xOffset;
    double _yOffset;
    YKTaskReachButtonModel *_buttonAction;
}

@property(retain, nonatomic) YKTaskReachButtonModel *buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *bg_openUri; // @synthesize bg_openUri=_bg_openUri;
@property(retain, nonatomic) NSString *bg_imageUrl; // @synthesize bg_imageUrl=_bg_imageUrl;
@property(retain, nonatomic) UIColor *bg_Color; // @synthesize bg_Color=_bg_Color;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)localVersion;
- (void)setFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
