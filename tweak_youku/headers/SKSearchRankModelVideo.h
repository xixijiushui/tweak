//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class NSNumber, NSString;

@interface SKSearchRankModelVideo : SKBaseModel
{
    _Bool _showid_valid;
    NSNumber *_querycount;
    NSNumber *_trend;
    NSString *_total_pv;
    NSString *_display_status;
    NSString *_keyword;
    NSString *_tag;
    NSString *_showid;
    NSString *_vid;
    NSString *_total_sv;
    NSString *_show_thumburl;
}

@property(retain, nonatomic) NSString *show_thumburl; // @synthesize show_thumburl=_show_thumburl;
@property(copy, nonatomic) NSString *total_sv; // @synthesize total_sv=_total_sv;
@property(nonatomic) _Bool showid_valid; // @synthesize showid_valid=_showid_valid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *showid; // @synthesize showid=_showid;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *display_status; // @synthesize display_status=_display_status;
@property(copy, nonatomic) NSString *total_pv; // @synthesize total_pv=_total_pv;
@property(copy, nonatomic) NSNumber *trend; // @synthesize trend=_trend;
@property(copy, nonatomic) NSNumber *querycount; // @synthesize querycount=_querycount;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

