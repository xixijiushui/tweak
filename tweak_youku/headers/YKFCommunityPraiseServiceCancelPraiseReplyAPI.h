//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKFAPIRequest.h"

@interface YKFCommunityPraiseServiceCancelPraiseReplyAPI : YKFAPIRequest
{
    long long _model;
}

+ (id)apiWithModel:(long long)arg1;
@property(nonatomic) long long model; // @synthesize model=_model;
- (id)transformJSONToModel:(id)arg1 error:(id *)arg2;
- (id)schema;
- (id)method;
- (id)APIPath;
- (id)init;

@end

