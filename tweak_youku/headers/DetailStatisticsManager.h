//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DetailCardsController;

@interface DetailStatisticsManager : NSObject
{
    DetailCardsController *_cardsController;
}

+ (void)YKAReferPageDetailPlayerlWithEventName:(id)arg1 withTarget:(id)arg2 modulesType:(int)arg3 vid:(id)arg4 sid:(id)arg5 plid:(id)arg6 currentVid:(id)arg7 index:(int)arg8;
@property(nonatomic) __weak DetailCardsController *cardsController; // @synthesize cardsController=_cardsController;
- (void).cxx_destruct;
- (id)dynamicSPMwithCardVideoArray:(id)arg1;
- (id)dynamicSPM:(id)arg1;
- (id)getParamsFromStatisticsModel:(id)arg1;
- (void)updateCurrentVideoInfoWithStatisticsModel:(id)arg1;
- (void)errorStatisticsWithFailedTypeText:(id)arg1 cardContext:(id)arg2;
- (void)exposeStatictisWithStatisticsModelArray:(id)arg1 arg1:(id)arg2 expandParams:(id)arg3;
- (void)exposeStatictisWithStatisticsModelArray:(id)arg1 expandParams:(id)arg2;
- (void)clickStatictisWithStatisticsModel:(id)arg1 expandParams:(id)arg2;

@end
