//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, YKFStarArrivalDetailService, YKFStararrivalDetailsPO, YKFStararrivalToolsPO;

@interface YKFStarCommingDetailViewModel : NSObject
{
    YKFStararrivalDetailsPO *_detailPO;
    NSArray *_pageItems;
    long long _defaultType;
    YKFStararrivalToolsPO *_toolPO;
    YKFStarArrivalDetailService *_service;
    long long _starCommingID;
}

@property(nonatomic) long long starCommingID; // @synthesize starCommingID=_starCommingID;
@property(retain, nonatomic) YKFStarArrivalDetailService *service; // @synthesize service=_service;
@property(retain, nonatomic) YKFStararrivalToolsPO *toolPO; // @synthesize toolPO=_toolPO;
@property(nonatomic) long long defaultType; // @synthesize defaultType=_defaultType;
@property(retain, nonatomic) NSArray *pageItems; // @synthesize pageItems=_pageItems;
@property(retain, nonatomic) YKFStararrivalDetailsPO *detailPO; // @synthesize detailPO=_detailPO;
- (void).cxx_destruct;
- (id)initWithStarCommingID:(long long)arg1;
- (void)checkCurrentUserIsFollowFandomComplete:(CDUnknownBlockType)arg1;
- (void)refreshDetailInfo:(id)arg1;
- (void)fetchToolinfoComplete:(CDUnknownBlockType)arg1;
- (void)fetchStarCommingDetailInfoOnComplete:(CDUnknownBlockType)arg1;
- (id)_createPageItemsWithDetailInfo:(id)arg1;

@end

