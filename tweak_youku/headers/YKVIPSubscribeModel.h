//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKVIPShortVideoModel.h"

@class NSString;

@interface YKVIPSubscribeModel : YKVIPShortVideoModel
{
    _Bool _reservation;
    NSString *_videoImg;
    NSString *_display;
    NSString *_releasetime;
    NSString *_displayformat;
    NSString *_reservationTitle;
    NSString *_timestampType;
}

@property(nonatomic) _Bool reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) NSString *timestampType; // @synthesize timestampType=_timestampType;
@property(retain, nonatomic) NSString *reservationTitle; // @synthesize reservationTitle=_reservationTitle;
@property(retain, nonatomic) NSString *displayformat; // @synthesize displayformat=_displayformat;
@property(retain, nonatomic) NSString *releasetime; // @synthesize releasetime=_releasetime;
@property(retain, nonatomic) NSString *display; // @synthesize display=_display;
@property(retain, nonatomic) NSString *videoImg; // @synthesize videoImg=_videoImg;
- (void).cxx_destruct;
- (id)initItemModelWithDictionary:(id)arg1;

@end

