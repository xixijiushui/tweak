//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewType5_6Model.h"

@class NSNumber, NSString;

@interface ViewTypeBProgramModel : ViewType5_6Model
{
    NSString *_sale_point;
    NSString *_source_img;
    NSString *_publish_hilights;
    long long _subscribe;
    long long _tag_type;
    NSString *_info;
    NSString *_playlistid;
    NSString *_videoid;
    NSNumber *_ugc_supply;
    NSString *_feed_url;
    NSString *_pl_type;
    long long _allVipEpisode;
}

@property(nonatomic) long long allVipEpisode; // @synthesize allVipEpisode=_allVipEpisode;
@property(retain, nonatomic) NSString *pl_type; // @synthesize pl_type=_pl_type;
@property(copy, nonatomic) NSString *feed_url; // @synthesize feed_url=_feed_url;
@property(retain, nonatomic) NSNumber *ugc_supply; // @synthesize ugc_supply=_ugc_supply;
@property(copy, nonatomic) NSString *videoid; // @synthesize videoid=_videoid;
@property(copy, nonatomic) NSString *playlistid; // @synthesize playlistid=_playlistid;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) long long tag_type; // @synthesize tag_type=_tag_type;
@property(nonatomic) long long subscribe; // @synthesize subscribe=_subscribe;
@property(copy, nonatomic) NSString *publish_hilights; // @synthesize publish_hilights=_publish_hilights;
@property(copy, nonatomic) NSString *source_img; // @synthesize source_img=_source_img;
@property(copy, nonatomic) NSString *sale_point; // @synthesize sale_point=_sale_point;
- (void).cxx_destruct;
- (void)parseStatisticsParam;
- (id)initWithDic:(id)arg1;

// Remaining properties
@property(nonatomic) long long doc_source;

@end

