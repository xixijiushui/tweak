//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TrackerShowForecastCard, TrackerShowForecastTitle, TrackerShowItemResult, TrackerShowNowFollowCard, TrackerShowOredreCard, TrackerShowOredreTitle, TrackerShowTemplate;

@interface DYTrackerShowComponent : NSObject
{
    _Bool _isExposedTop;
    _Bool _isExposedCenter;
    _Bool _isExposedBottom;
    TrackerShowItemResult *_itemresult;
    TrackerShowTemplate *_itemtemplate;
    TrackerShowForecastTitle *_forecasttitle;
    TrackerShowForecastCard *_forecastcard;
    TrackerShowOredreTitle *_ordercardtitle;
    TrackerShowOredreCard *_ordercard;
    TrackerShowNowFollowCard *_nowfollowcard;
    long long _indexTag;
    NSMutableArray *_exposureArray;
    unsigned long long _exposedType;
}

+ (id)parseJson:(id)arg1;
@property(nonatomic) _Bool isExposedBottom; // @synthesize isExposedBottom=_isExposedBottom;
@property(nonatomic) _Bool isExposedCenter; // @synthesize isExposedCenter=_isExposedCenter;
@property(nonatomic) _Bool isExposedTop; // @synthesize isExposedTop=_isExposedTop;
@property(nonatomic) unsigned long long exposedType; // @synthesize exposedType=_exposedType;
@property(retain, nonatomic) NSMutableArray *exposureArray; // @synthesize exposureArray=_exposureArray;
@property(nonatomic) long long indexTag; // @synthesize indexTag=_indexTag;
@property(retain, nonatomic) TrackerShowNowFollowCard *nowfollowcard; // @synthesize nowfollowcard=_nowfollowcard;
@property(retain, nonatomic) TrackerShowOredreCard *ordercard; // @synthesize ordercard=_ordercard;
@property(retain, nonatomic) TrackerShowOredreTitle *ordercardtitle; // @synthesize ordercardtitle=_ordercardtitle;
@property(retain, nonatomic) TrackerShowForecastCard *forecastcard; // @synthesize forecastcard=_forecastcard;
@property(retain, nonatomic) TrackerShowForecastTitle *forecasttitle; // @synthesize forecasttitle=_forecasttitle;
@property(retain, nonatomic) TrackerShowTemplate *itemtemplate; // @synthesize itemtemplate=_itemtemplate;
@property(retain, nonatomic) TrackerShowItemResult *itemresult; // @synthesize itemresult=_itemresult;
- (void).cxx_destruct;
- (id)init;

@end
