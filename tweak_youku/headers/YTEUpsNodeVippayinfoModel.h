//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEBaseModel.h"

@class YTEUpsNodeVippayinfoResultModel;

@interface YTEUpsNodeVippayinfoModel : YTEBaseModel
{
    long long _error;
    YTEUpsNodeVippayinfoResultModel *_result;
}

@property(copy, nonatomic) YTEUpsNodeVippayinfoResultModel *result; // @synthesize result=_result;
@property(nonatomic) long long error; // @synthesize error=_error;

@end
