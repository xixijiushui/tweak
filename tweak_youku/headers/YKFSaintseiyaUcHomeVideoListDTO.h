//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFSaintseiyaBasePageDataDTO.h"

@class NSArray<YKFSaintseiyaHomePageDataDTO>, YKFSaintseiyaReportExtendDTO;

@interface YKFSaintseiyaUcHomeVideoListDTO : YKFSaintseiyaBasePageDataDTO
{
    _Bool _hasMore;
    long long _createTime;
    long long _pageNo;
    NSArray<YKFSaintseiyaHomePageDataDTO> *_pageResult;
    long long _pageSize;
    YKFSaintseiyaReportExtendDTO *_reportExtend;
    long long _total;
}

@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) YKFSaintseiyaReportExtendDTO *reportExtend; // @synthesize reportExtend=_reportExtend;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSArray<YKFSaintseiyaHomePageDataDTO> *pageResult; // @synthesize pageResult=_pageResult;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;

@end

