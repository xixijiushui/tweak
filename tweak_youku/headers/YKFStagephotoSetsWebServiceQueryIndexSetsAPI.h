//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIRequest.h"

@class YKFStagephotoIndexSetsRO;

@interface YKFStagephotoSetsWebServiceQueryIndexSetsAPI : YKFAPIRequest
{
    YKFStagephotoIndexSetsRO *_model;
}

+ (id)apiWithModel:(id)arg1;
@property(retain, nonatomic) YKFStagephotoIndexSetsRO *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)transformJSONToModel:(id)arg1 error:(id *)arg2;
- (id)schema;
- (id)method;
- (id)APIPath;
- (id)init;

@end

