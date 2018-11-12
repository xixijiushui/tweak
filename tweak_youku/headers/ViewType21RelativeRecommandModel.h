//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewTypeBaseModel.h"

@class NSMutableArray, NSString, ViewTypeCustomCollectionHeadModel;

@interface ViewType21RelativeRecommandModel : ViewTypeBaseModel
{
    NSString *_area_title;
    long long _channel_id;
    ViewTypeCustomCollectionHeadModel *_headModel;
    NSMutableArray *_shows;
}

@property(retain, nonatomic) NSMutableArray *shows; // @synthesize shows=_shows;
@property(retain, nonatomic) ViewTypeCustomCollectionHeadModel *headModel; // @synthesize headModel=_headModel;
@property(nonatomic) long long channel_id; // @synthesize channel_id=_channel_id;
@property(copy, nonatomic) NSString *area_title; // @synthesize area_title=_area_title;
- (void).cxx_destruct;
- (void)setSearchTitle:(id)arg1;
- (void)setGroupNumber:(long long)arg1;
- (void)setHighlightword:(id)arg1;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

@end

