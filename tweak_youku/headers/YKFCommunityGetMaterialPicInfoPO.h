//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSArray<YKFCommunityMaterialPO>;

@interface YKFCommunityGetMaterialPicInfoPO : YKFAPIModel
{
    _Bool _hasNext;
    NSArray<YKFCommunityMaterialPO> *_materialList;
    long long _pageNum;
}

@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSArray<YKFCommunityMaterialPO> *materialList; // @synthesize materialList=_materialList;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
- (void).cxx_destruct;

@end

