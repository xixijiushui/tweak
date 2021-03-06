//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKBaseModel.h"

@class NSMutableArray, NSNumber, NSString;

@interface OtherSiteEpisodesModel : SKBaseModel
{
    NSNumber *_sourceSite;
    NSString *_sourceSiteName;
    NSString *_sourceImg;
    NSString *_play_mode;
    NSNumber *_total;
    NSNumber *_complete;
    NSString *_stripe_bottom;
    NSString *_stripeBottomNoStatus;
    NSNumber *_newestOrder;
    NSNumber *_trailerCount;
    NSNumber *_extraCount;
    NSNumber *_paid;
    NSMutableArray *_series;
}

@property(retain, nonatomic) NSMutableArray *series; // @synthesize series=_series;
@property(retain, nonatomic) NSNumber *paid; // @synthesize paid=_paid;
@property(retain, nonatomic) NSNumber *extraCount; // @synthesize extraCount=_extraCount;
@property(retain, nonatomic) NSNumber *trailerCount; // @synthesize trailerCount=_trailerCount;
@property(retain, nonatomic) NSNumber *newestOrder; // @synthesize newestOrder=_newestOrder;
@property(retain, nonatomic) NSString *stripeBottomNoStatus; // @synthesize stripeBottomNoStatus=_stripeBottomNoStatus;
@property(retain, nonatomic) NSString *stripe_bottom; // @synthesize stripe_bottom=_stripe_bottom;
@property(retain, nonatomic) NSNumber *complete; // @synthesize complete=_complete;
@property(retain, nonatomic) NSNumber *total; // @synthesize total=_total;
@property(retain, nonatomic) NSString *play_mode; // @synthesize play_mode=_play_mode;
@property(retain, nonatomic) NSString *sourceImg; // @synthesize sourceImg=_sourceImg;
@property(retain, nonatomic) NSString *sourceSiteName; // @synthesize sourceSiteName=_sourceSiteName;
@property(retain, nonatomic) NSNumber *sourceSite; // @synthesize sourceSite=_sourceSite;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1 withOtherSitesDatas:(id)arg2;

@end

