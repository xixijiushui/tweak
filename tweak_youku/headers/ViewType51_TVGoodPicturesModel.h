//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray, NSString;

@interface ViewType51_TVGoodPicturesModel : ViewTypeBaseModel
{
    NSString *_showid;
    NSMutableArray *_pictures;
}

@property(retain, nonatomic) NSMutableArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) NSString *showid; // @synthesize showid=_showid;
- (void).cxx_destruct;
- (void)obtainPageStatisticParams:(id)arg1;
- (void)notifyUpdateSubmodesParameters;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

