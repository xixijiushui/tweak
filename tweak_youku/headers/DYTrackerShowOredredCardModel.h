//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYTrackerShowOredreCardDetail, DYTrackerShowOredreCardRecommend, DYTrackerShowOredreCardTitle;

@interface DYTrackerShowOredredCardModel : NSObject
{
    DYTrackerShowOredreCardTitle *_trackerOredreTitle;
    DYTrackerShowOredreCardDetail *_trackerOredreDetail;
    DYTrackerShowOredreCardRecommend *_trackerOrdreRecommend;
}

+ (id)parseJson:(id)arg1;
@property(retain, nonatomic) DYTrackerShowOredreCardRecommend *trackerOrdreRecommend; // @synthesize trackerOrdreRecommend=_trackerOrdreRecommend;
@property(retain, nonatomic) DYTrackerShowOredreCardDetail *trackerOredreDetail; // @synthesize trackerOredreDetail=_trackerOredreDetail;
@property(retain, nonatomic) DYTrackerShowOredreCardTitle *trackerOredreTitle; // @synthesize trackerOredreTitle=_trackerOredreTitle;
- (void).cxx_destruct;
- (id)init;

@end

