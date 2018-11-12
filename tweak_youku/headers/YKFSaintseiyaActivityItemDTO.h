//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaBasePageDataDTO.h"

@class NSArray<YKFSaintseiyaHomePageDataDTO>, NSString, YKFSaintseiyaReportExtendDTO, YKFSaintseiyaShootButtonItemDTO, YKFSaintseiyaVideoCreatorPageDTO;

@interface YKFSaintseiyaActivityItemDTO : YKFSaintseiyaBasePageDataDTO
{
    _Bool _hasMore;
    NSString *_actionUrl;
    long long _activityId;
    NSString *_tdescription;
    long long _hotValue;
    long long _obj_id;
    NSString *_image;
    long long _pageNo;
    NSArray<YKFSaintseiyaHomePageDataDTO> *_pageResult;
    long long _pageSize;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    YKFSaintseiyaShootButtonItemDTO *_shootButton;
    NSString *_title;
    long long _topicId;
    long long _total;
    NSString *_unit;
    YKFSaintseiyaVideoCreatorPageDTO *_videoCreatorPage;
}

@property(retain, nonatomic) YKFSaintseiyaVideoCreatorPageDTO *videoCreatorPage; // @synthesize videoCreatorPage=_videoCreatorPage;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) YKFSaintseiyaShootButtonItemDTO *shootButton; // @synthesize shootButton=_shootButton;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSArray<YKFSaintseiyaHomePageDataDTO> *pageResult; // @synthesize pageResult=_pageResult;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long obj_id; // @synthesize obj_id=_obj_id;
@property(nonatomic) long long hotValue; // @synthesize hotValue=_hotValue;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *tdescription; // @synthesize tdescription=_tdescription;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

