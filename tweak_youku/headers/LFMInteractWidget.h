//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LFMInteractWidget : NSObject
{
    unsigned long long _wID;
    NSString *_wName;
    NSString *_wIntroduction;
    NSString *_wIcon;
    NSString *_wpcURL;
    NSString *_wh5URL;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *wh5URL; // @synthesize wh5URL=_wh5URL;
@property(copy, nonatomic) NSString *wpcURL; // @synthesize wpcURL=_wpcURL;
@property(copy, nonatomic) NSString *wIcon; // @synthesize wIcon=_wIcon;
@property(copy, nonatomic) NSString *wIntroduction; // @synthesize wIntroduction=_wIntroduction;
@property(copy, nonatomic) NSString *wName; // @synthesize wName=_wName;
@property(nonatomic) unsigned long long wID; // @synthesize wID=_wID;
- (void).cxx_destruct;

@end

