//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKDailyReoprt, KKDailyShow, NSString;

@interface KKDailyItemResult : NSObject
{
    NSString *_content;
    NSString *_gif;
    NSString *_img;
    KKDailyShow *_show;
    NSString *_title;
    long long *_dailyId;
    KKDailyReoprt *_report;
}

+ (id)parseJson:(id)arg1;
@property(retain, nonatomic) KKDailyReoprt *report; // @synthesize report=_report;
@property(nonatomic) long long *dailyId; // @synthesize dailyId=_dailyId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) KKDailyShow *show; // @synthesize show=_show;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *gif; // @synthesize gif=_gif;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)init;

@end
