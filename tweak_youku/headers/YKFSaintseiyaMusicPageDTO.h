//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFSaintseiyaChoosemusicMusicItemDTO>, YKFSaintseiyaGlobalContextDTO;

@interface YKFSaintseiyaMusicPageDTO : YKFAPIModel
{
    YKFSaintseiyaGlobalContextDTO *_context;
    long long _pageNo;
    NSArray<YKFSaintseiyaChoosemusicMusicItemDTO> *_pageResult;
    long long _total;
}

@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSArray<YKFSaintseiyaChoosemusicMusicItemDTO> *pageResult; // @synthesize pageResult=_pageResult;
@property(nonatomic) long long pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) YKFSaintseiyaGlobalContextDTO *context; // @synthesize context=_context;
- (void).cxx_destruct;

@end

