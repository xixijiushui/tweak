//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YKFCommunityFandomServiceListFandomsByVideoIdsAPI, YKFCommunityFandomSimplePO;

@interface YKFCommentsTitleCardViewModel : NSObject
{
    YKFCommunityFandomSimplePO *_fandom;
    YKFCommunityFandomServiceListFandomsByVideoIdsAPI *_api;
}

@property(retain, nonatomic) YKFCommunityFandomServiceListFandomsByVideoIdsAPI *api; // @synthesize api=_api;
@property(retain, nonatomic) YKFCommunityFandomSimplePO *fandom; // @synthesize fandom=_fandom;
- (void).cxx_destruct;
- (void)listFandomsByVideoId:(id)arg1 complete:(CDUnknownBlockType)arg2;

@end
