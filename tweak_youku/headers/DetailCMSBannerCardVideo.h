//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailBaseObject.h"

@class NSString;

@interface DetailCMSBannerCardVideo : DetailBaseObject
{
    long long _scgItems;
    NSString *_scgVideoId;
    NSString *_scgVideoImg;
    NSString *_scgVideoTitle;
}

@property(retain, nonatomic) NSString *scgVideoTitle; // @synthesize scgVideoTitle=_scgVideoTitle;
@property(retain, nonatomic) NSString *scgVideoImg; // @synthesize scgVideoImg=_scgVideoImg;
@property(retain, nonatomic) NSString *scgVideoId; // @synthesize scgVideoId=_scgVideoId;
@property(nonatomic) long long scgItems; // @synthesize scgItems=_scgItems;
- (void).cxx_destruct;
- (void)setupWithCMSInfo:(id)arg1;

@end

