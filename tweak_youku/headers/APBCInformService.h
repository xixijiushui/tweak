//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, YKFCommunityContentMgmtServiceInformPostAPI, YKFCommunityFandomMgmtServiceListInformReasonsAPI;

@interface APBCInformService : NSObject
{
    YKFCommunityFandomMgmtServiceListInformReasonsAPI *_informReasonsAPI;
    YKFCommunityContentMgmtServiceInformPostAPI *_informPostAPI;
    NSArray *_optionReasons;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *optionReasons; // @synthesize optionReasons=_optionReasons;
@property(retain, nonatomic) YKFCommunityContentMgmtServiceInformPostAPI *informPostAPI; // @synthesize informPostAPI=_informPostAPI;
@property(retain, nonatomic) YKFCommunityFandomMgmtServiceListInformReasonsAPI *informReasonsAPI; // @synthesize informReasonsAPI=_informReasonsAPI;
- (void).cxx_destruct;
- (void)informWithFandomID:(long long)arg1 ID:(long long)arg2 reasonID:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (void)requestOptionsWithCallback:(CDUnknownBlockType)arg1;

@end

