//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class NSString, YKFModelRequestPagingPO;

@interface YKFCommunityPhotoListRO : YKFAPIModel
{
    NSString *_albumId;
    long long _fandomId;
    long long _orderBy;
    YKFModelRequestPagingPO *_paging;
    NSString *_targetId;
    long long _targetType;
}

@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) YKFModelRequestPagingPO *paging; // @synthesize paging=_paging;
@property(nonatomic) long long orderBy; // @synthesize orderBy=_orderBy;
@property(nonatomic) long long fandomId; // @synthesize fandomId=_fandomId;
@property(retain, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

@end

