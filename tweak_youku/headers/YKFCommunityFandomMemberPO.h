//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIModel.h"

@class YKFCommunityFandomFansDetailPO;

@interface YKFCommunityFandomMemberPO : YKFAPIModel
{
    _Bool _canSelect;
    YKFCommunityFandomFansDetailPO *_fandomFansDetailVO;
}

@property(retain, nonatomic) YKFCommunityFandomFansDetailPO *fandomFansDetailVO; // @synthesize fandomFansDetailVO=_fandomFansDetailVO;
@property(nonatomic) _Bool canSelect; // @synthesize canSelect=_canSelect;
- (void).cxx_destruct;

@end

